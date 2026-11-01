/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//演示多个字符从两端移动,向中间汇聚
#include <stdio.h>
#include <windows.h>

char arr1[]="LEGO Audi Quattro S1 E2 by:wzm65535 https://www.bilibili.com/video/BV1KLNX6rEqj"; //要替换的文本
char arr2[]="###############################################################################"; //原文本

int main()
{
    printf("%s\r\n",arr2);
    unsigned int num; //数组的元素数量
    num = (sizeof(arr1)/sizeof(arr1[1]));
    for (unsigned char i = 0; i < (num/2); i++)
    {
        system("cls"); //清屏
        arr2[i] = arr1[i];
        arr2[(num-i-2)] = arr1[(num-i-2)];
        printf("%s\r\n",arr2);
        Sleep(500);
    }   
}