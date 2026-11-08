/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//指针数组测试
#include <stdio.h>

int main()
{
    printf("指针数组\r\n");
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("&arr[0]   = %p\r\n",&arr[0]);
    printf("&arr[0]+1 = %p\r\n",&arr[0]+1);
    printf("arr       = %p\r\n",arr);
    printf("arr + 1   = %p\r\n",arr+1);
    printf("&arr      = %p\r\n",&arr);
    printf("&arr + 1  = %p\r\n",&arr+1);
    //二级指针
    printf("二级指针\r\n");
    int a = 1;
    int *pa = &a;
    int **ppa = &pa;
    printf("a     = %d\r\n",a);
    printf("&a    = %p\r\n",&a);
    printf("pa    = %p\r\n",pa);
    printf("*pa   = %d\r\n",*pa);
    printf("ppa   = %p\r\n",ppa);
    printf("**ppa = %d\r\n",**ppa);
    **ppa = 30;
    printf("使**ppa = 30\r\n");
    printf("**ppa = %d\r\n",**ppa);
    //指针数组模拟二维数组
    printf("指针数组模拟二维数组\r\n");
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,0};
    int arr3[5] = {1,6,2,7,3};
    int *parr[3] = {arr1,arr2,arr3};  //指针数组
    int i = 0,b = 0;
    for(i = 0;i < 3;i++)  //打印arr1-3内的所有内容
    {
        for(b = 0;b < 5;b++)
        {
            printf("arr%d[%d] = %d ",i+1,b,parr[i][b]);
        }
        printf("\r\n");
    }
}