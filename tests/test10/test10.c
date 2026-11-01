/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//用递归求第n个斐波那契数
#include <stdio.h>

int Fib(int n)
{
    if(n <= 2)
    {
        return 1;
    }
    else if(n > 2)
    {
        return (Fib(n - 1)+Fib(n - 2));
    }
}

int main()
{
    int n = 0;
    printf("请输入整数n,求第n个斐波那契数:");
    scanf("%d",&n);
    int r = 0;  //结果
    r = Fib(n);
    printf("%d",r);
}