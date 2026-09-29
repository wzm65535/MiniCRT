/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用，但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//对输入的数字进行均值,求和,最大值,最小值
#include <stdio.h>
#include <windows.h>

int arr[5]; 
int sum = 0; //五个数字的和
int avarage = 0; //五个数字的均值
int max = 0; //五个数字的最大值
int min = 0; //五个数字的最小值
int temp; //排序过程中调换数组中项的临时变量

int stats()
{
    printf("请输入5个数字:\r\n");
    for(unsigned char i = 0;i < 5;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i]; //求和
    }
    avarage = sum / 5; //求均值
    //冒泡排序算法
    unsigned char i;
    while((arr[0]>arr[1])||(arr[1]>arr[2])||(arr[2]>arr[3])||(arr[3]>arr[4]))
    {       
        for(unsigned char a = 0;a < 4;a++)
        {
            if(arr[i] <= arr[i+1]) //前一个元素比后一个元素小或相等(正确)
            {
                i++;
            }
            else if(arr[i] > arr[i+1]) //如果如果前一个元素比后一个元素大,则交换它们的位置
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            } 
        }
    }       
    //计算并打印各项值
    min = arr[0]; //最小值
    max = arr[5]; //最大值
    printf("sum:%d\r\n",sum);
    printf("avarage:%d\r\n",avarage);
    printf("min:%d\r\n",min);
    printf("max:%d\r\n",max);

}