/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//打印各种变量类型占多少字节
#include <stdio.h>
#include <stddef.h>

int main()
{
    printf("int:%d\r\n",sizeof(int));
    printf("char:%d\r\n",sizeof(char));
    printf("short:%d\r\n",sizeof(short));
    printf("long:%d\r\n",sizeof(long));
    printf("long long:%d\r\n",sizeof(long long));
    printf("u int:%d\r\n",sizeof(unsigned int));
    printf("u char%d\r\n",sizeof(unsigned char));
    printf("u short:%d\r\n",sizeof(unsigned short));
    printf("u long:%d\r\n",sizeof(unsigned long));
    printf("u long long:%d\r\n",sizeof(unsigned long long));
}