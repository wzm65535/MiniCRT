/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//输1个整数n,按照顺序打印整数的每?位
#include <stdio.h>

int print(int n)
{
    if(n > 9)
    {
        print(n / 10);
    }
    printf("%d ",n % 10);
}

int main()
{
    int m; //用户输入的数字
    printf("请输入数字:");
    scanf("%d",&m);
    print(m);
}