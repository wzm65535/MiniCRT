/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用，但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//输出一个矩阵,并对其进行行列处理,求和,转置操作
#include <stdio.h>

int find_number();

int matrix()
{
    
    //定义二维数组(矩阵)
    int arr2[3][3]={
        {1,2,3}, //定义第0行里的数
        {4,5,6}, //定义第1行里的数
        {7,8,9}  //定义第2行里的数
    };
    //打印原矩阵
    printf("这是原矩阵:\r\n");
    for(unsigned char i = 0;i < 3;i++)  
    {
        for(unsigned char a = 0;a < 3;a++) //打印一个横排
        {
            printf("%d ",(arr2[a][i]));
        }
        printf("\r\n");
    }
    //行列处理
    //进行第0行和第2行的转换
    int temp = 0; //给数组操作留的临时变量
    for(unsigned char i = 0;i < 3;i++)
    {
        temp = arr2[i][0];
        arr2[i][0] = arr2[i][2];
        arr2[i][2] = temp;
    }
    printf("将第0行与第2行转换:\r\n");
    for(unsigned char i = 0;i < 3;i++)  
    {
        for(unsigned char a = 0;a < 3;a++) //打印一个横排
        {
            printf("%d ",(arr2[a][i]));
        }
        printf("\r\n");
    }
    //在上一步基础上进行第0列与第2列的转换
    temp = 0;
    for(unsigned char i = 0;i < 3;i++)
    {
        temp = arr2[0][i];
        arr2[0][i] = arr2[2][i];
        arr2[2][i] = temp;
    }
    printf("将第0行与第2行转换:\r\n");
    for(unsigned char i = 0;i < 3;i++)  
    {
        for(unsigned char a = 0;a < 3;a++) //打印一个横排
        {
            printf("%d ",(arr2[a][i]));
        }
        printf("\r\n");
    }
    //在更改过的数组里查找某个数字
    int find = 10;
    printf("请输入0-9的数字:");
    scanf("%d",&find);
    switch(find)
    {
        case 0:
        find_number(0,arr2);
        break;
        case 1:
        find_number(1,arr2);
        break;
        case 2:
        find_number(2,arr2);
        break;
        case 3:
        find_number(3,arr2);
        break;
        case 4:
        find_number(4,arr2);
        break;
        case 5:
        find_number(5,arr2);
        break;
        case 6:
        find_number(6,arr2);
        break;
        case 7:
        find_number(7,arr2);
        break;
        case 8:
        find_number(8,arr2);
        break;
        case 9:
        find_number(9,arr2);
        break;
        default:
        printf("格式不对!\r\n");
        break;
    }
    //对整个数组进行求和
    int sum = 0;
    for(unsigned char y = 0;y < 3;y++)
    {
        for(unsigned char x = 0;x < 3;x++)
        {
            sum = sum + arr2[x][y];
        }
    }
    printf("数组内所有值的和为:%d\r\n\r\n",sum);
    //对数组的每一行进行求和
    int sum_x = 0;
    for(unsigned char y = 0;y < 3;y++)
    {
        for(unsigned char x = 0;x < 3;x++)
        {
            sum_x = sum_x + arr2[x][y];
        }
        printf("数组第%d行的和为:%d\r\n",y,sum_x);
        sum_x = 0;
    }
    printf("\r\n");
    //对数组的每一列进行求和
    int sum_y = 0;
    for(unsigned char x = 0;x < 3;x++)
    {
        for(unsigned char y = 0;y < 3;y++)
        {
            sum_y = sum_y + arr2[x][y];
        }
        printf("数组的%d列的和为:%d\r\n\r\n",x,sum_y);
        sum_y = 0;
    }
    //对数组的对角线上的数相加
    unsigned char diagional = 0; //对角线上数字的和
    printf("以下为数组的对角线上的数相加之和\r\n");
    //从左下到右上
    for(unsigned char x = 0;x < 3;x++)
    {
        unsigned char y = x;
        diagional = diagional + arr2[x][y];
    }
    printf("从左下到右上:%d\r\n",diagional);
    diagional = 0;
    //从右下到左上
    for(int x = 2;x > -1;x--)
    {
        int y = x;
        diagional = diagional + arr2[x][y];
    }
    printf("从右下到左上:%d\r\n\r\n",diagional);
    //对矩阵进行转置操作
    printf("对矩阵进行转置操作\r\n");
    arr2[0][0] = arr2[0][0];
    temp = arr2[1][0];
    arr2[1][0] = arr2[0][1];
    arr2[0][1] = temp;

    temp = arr2[2][0];
    arr2[2][0] = arr2[0][2];
    arr2[0][2] = temp;
    
    temp = arr2[2][1];
    arr2[2][1] = arr2[1][2];
    arr2[1][2] = temp;
    //打印整个矩阵
    for(unsigned char i = 0;i < 3;i++)  
    {
        for(unsigned char a = 0;a < 3;a++) //打印一个横排
        {
            printf("%d ",(arr2[a][i]));
        }
        printf("\r\n");
    }
}

int find_number(int num,int arr2[3][3]) //按行遍历数组寻找一个数字
{
    unsigned char y;
    for(y = 0;y < 3;y++)
    {
        for(unsigned char x = 0;x < 3;x++) //在一个x轴里查找
        {
            if(arr2[x][y] == num)
            {
                printf("找到了,在数组内的x轴坐标为%d,y轴坐标为%d\r\n\r\n",x,y);
            }
        }       
    }
}