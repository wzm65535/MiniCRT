//猜数字游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guess()
{
    int a,b,c,num,guess,g_num; //数字范围a,b,生成的随机数c,num为猜测次数,guess用户猜测数字,g_num为猜测次数，第一次赋值后不变
    time_t sec;  //时间变量
    sec = time(NULL);  
    srand(((unsigned)sec));  //初始化随机数发生器
    printf("猜数字游戏\r\n");
    printf("请输入整数数字范围(例如11-45):");
    scanf("%d%*c%d",&a,&b);
    printf("请输入猜测次数:");
    scanf("%d",&num);
    g_num = num;
    c = rand() % (b - a + 1) + a; //获得a,b间的随机数
    while(1)
    {
        for (num; num > 0; num--) //猜测循环
        {
            printf("猜猜是几:");
            scanf("%d",&guess);
          //  num--; //机会减一
            if(guess == c) //胜利
            {
                printf("你赢了!总共猜了%d次\r\n\r\n",(g_num-num));
                return 0;
            }
            else if(guess < c) //猜小了
            {
                printf("猜小了\r\n");
            }
            else if(guess > c) //猜大了
            {
                printf("猜大了\r\n");
            }         
        }  
        printf("你输了!\r\n\r\n"); //失败
        return 0;
    }
}    