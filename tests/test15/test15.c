/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//函数指针测试
#include <stdio.h>

int Add(int a,int b)  
{
    int c = 0;
    c = a + b;
    return c;
}

int main()
{
    int (*p) (int,int) = Add;  //函数返回值类型 (*指针变量名) (函数参数表列)
    printf("&Add = %p\r\n",&Add);  //打印Add函数的地址
    printf("*p   = %p\r\n",p);     //打印p的值
    printf("2+3  = %d\r\n",p(2,3));   //运用指向函数的指针实现调用函数
}