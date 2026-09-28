/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用，但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//启动动画
#include <stdio.h>
#include <windows.h>
#include "config.h"
#include <string.h>

char arr1[35]="MiniCRT Shell ["; //要替换的文本

int start()
{
    strcat(arr1,version);
    strcat(arr1,"] ");
    strcat(arr1,"by wzm65535\r\n");

    unsigned int a; //数组的元素数量
    a = (sizeof(arr1)/sizeof(arr1[1]));
    char arr2[a]; //arr2为被替换文本(纯#号)
    
    unsigned int num; //arr2数组的元素数量
    num = (sizeof(arr2)/sizeof(arr2[1]));    
    for(unsigned char i = 1;i < num;i++) //这里i=1为了防止把最后一位的'\0'替换
    {
        arr2[i] = '#';
    }

    //演?多个字符从两端移动，向中间汇聚
    for (unsigned char i = 0; i < (num/2); i++)
    {
        system("cls"); //清屏
        arr2[i] = arr1[i];
        arr2[(num-i-2)] = arr1[(num-i-2)];
        printf("%s\r\n",arr2);
        Sleep(500);
    }     
}