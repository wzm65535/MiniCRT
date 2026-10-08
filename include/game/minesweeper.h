/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用，但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//扫雷游戏
/*游戏规则
可以排查雷 
把除Mine_Num个雷之外的所有非雷都找出来，排雷成功，游戏结束
如果位置是雷,就炸死游戏结束
如果位置不是雷,就显示周围有?个雷
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

#define Mine_Num 10     //应下雷数量

#define wide 9          //棋盘宽
#define high 9          //棋盘高

#define wides wide + 2  //判断雷时防止数组越界,外框要大一圈
#define highs high + 2

void Init_Board();      //初始化棋盘
void Print_Board();     //打印棋盘
int FindMine();        //排雷

//static修饰仅在本文件中使用
char mine[wides][highs] = {'0'};   //雷的位置
char show[wides][highs] = {32};   //排查出的雷的位置,给用户展示用的,空格的ASCII码为32

static int put_mine_num = 0;                 //检查放雷数量
static char find_x = 0;             //排雷过程中,用户输入的x坐标
static char find_y = 0;             //排雷过程中,用户输入的y坐标
static int ground_num = 0;          //在遍历周围9格的时候发现的雷数
static unsigned char check = 0;     //用于检查雷是否全部排完

time_t second = 0;   //用户排雷用的秒数
time_t newsec = 0;   //统计耗时的时候用来获取最新秒数
/*
棋盘规划:
mine:                       show:
0 0 0 0 0 0 0 0 0 0 0       0 1 2 3 4 5 6 7 8 9 空
0 0 0 0 0 0 0 0 0 0 0       1 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       2 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       3 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       4 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       5 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       6 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       7 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       8 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       9 * * * * * * * * * 空
0 0 0 0 0 0 0 0 0 0 0       空空空空空空空空空空空空
*/

void minesweeper()  //扫雷主函数
{
    printf("游戏规则\r\n\
可以排查雷\r\n\
把除Mine_Num个雷之外的所有非雷都找出来,排雷成功,游戏结束\r\n\
如果位置是雷,就炸死游戏结束\r\n\
如果位置不是雷,就显示周围有?个雷\r\n"); //打印游戏规则
    for(unsigned i = 5;i > 0;i--)
    {
        printf("%d秒后进入游戏\r\n",i);
        Sleep(1000);  //延时1s
    }
    Init_Board();
    Print_Board();
    FindMine();
}

void Init_Board()  //初始化棋盘
{
    //初始化mine
    for(unsigned i = 0;i < highs;i++) //清空mine
    {
        for(unsigned a = 0;a < wides;a++)
        {
            mine[a][i] = '0';
        }
    }
    //将show初始化
    for(unsigned i = 0;i < highs;i++) //清空show
    {
        for(unsigned a = 0;a < wides;a++)
        {
            show[a][i] = ' ';
        }
    }
    for(unsigned i = 0;i < (high + 1);i++) //布置边框(高)
    {
        show[0][i] = (i + 48);
        for(unsigned i = 0;i < (wide + 1);i++) //布置边框(宽)
        {
            show[i][0] = (i + 48); //数组不吃int数字直接乱码,直接换成ASCII码(数字0的ASCII码为48)
        }
    }
    for(unsigned i = 1;i < (high + 1);i++) //布置雷区(高)
    {
        for(unsigned a = 1;a < (wide + 1);a++) //布置雷区(宽)
        {
            show[a][i] = '*';
        }   
    }

    //变量初始化
    static time_t sec;   //时间,将会作为随机数的种子
    unsigned char temp_x = 0;  //设置雷的x坐标
    unsigned char temp_y = 0;  //设置雷的y坐标

    sec = time(NULL); //获取时间
    srand((unsigned)sec); //设置随机数种子

    for(unsigned char i = 0;i < Mine_Num;i++)  //生成雷的位置
    {
        set:   
        temp_x = (rand() % wide +1);  //生成的数字范围为棋盘宽度,到时候进mine数组因为有框还得+1
        temp_y = (rand() % high +1);  //生成的数字范围为棋盘高度,到时候进mine数组因为有框还得+1
        if(mine[temp_x][temp_y] == '1')  //此处已放雷
        {
            goto set;  //重新放雷
        }
        mine[temp_x][temp_y] = '1';   //布置雷
    }

    for(unsigned char i = 0;i < highs;i++)
    {
        for(unsigned char a = 0;a < wides;a++)
        {
            if(mine[a][i] == '1')
            {
                put_mine_num++;
            }
        }
    }
    if(put_mine_num < Mine_Num)  //数量不够
    {
        goto set; //重新下雷
    }
}

void Print_Board()
{
    /*此处为调试用代码
    for(unsigned char i = 0;i < highs;i++)  //打印mine
    {
        for(unsigned char a = 0;a < wides;a++)
        {
            printf("%c ",mine[a][i]);
        }
        printf("\r\n");
    }
    */
    //system("cls");  //清屏
    printf("放置了%d个雷\r\n",put_mine_num);
    for(unsigned char i = 0;i < (high + 1);i++)  //打印show
    {
        for(unsigned char a = 0;a < (wide + 1);a++)
        {
            printf("%c ",show[a][i]);
        }
        printf("\r\n");
    }
}

int FindMine()
{
    second = time(NULL);  //开始计时
    while(1)
    {
        aaa:
        ground_num = 0;  //下面那段周围雷的数目清零
        Print_Board();  //打印棋盘
        printf("请输入你要排查的坐标(x,y):");
        scanf("%d%*c%d",&find_x,&find_y);
        if(mine[find_x][find_y] == '1') //如果位置是雷,就爆炸游戏结束
        {
            system("cls");
            printf("你输了!\r\n");
            printf("棋盘:\r\n");
            for(unsigned char i = 1;i < (high + 1);i++)//打印mine棋盘
            {
                for(unsigned char a = 1;a < (wide + 1);a++)
                {
                    printf("%c ",mine[a][i]);
                }
                printf("\r\n");
            }
            //统计耗时
            newsec = time(NULL);
            second = newsec - second;  
            printf("花费了%d秒\r\n");
            return 0;  //退出程序
        }
        else if(mine[find_x][find_y] == '0')  //如果位置不是雷,就显示周围有?个雷
        {
            mine[find_x][find_y] = 'O';
            check++;
            //printf("A:%d\r\n",check);  //调试用
            for(unsigned char i = (find_y-1);i < (find_y+2);i++)  //遍历周围(包括自己)的9个位置 
            {
                for(unsigned char a = (find_x-1);a < (find_x+2);a++)  //行  
                {  
                    if(mine[a][i] == '1')  //如果周围有雷
                    {
                        ground_num++;  //周围雷的数目+1
                    }         
                }    
            }
            //数组不吃int数字直接乱码,直接换成ASCII码(数字0的ASCII码为48)(和第88行问题一样)
            show[find_x][find_y] = (ground_num + 48);  //替换那个位置
        }
        if(check == ((high * wide) - Mine_Num))  //如果排查后所有点位通过(用户找到所有非雷)
        {
            printf("你赢了!\r\n"); 
            //统计耗时
            newsec = time(NULL);
            second = newsec - second; 
            printf("花费了%d秒\r\n");
            return 0;   //退出
        }
    }
}    