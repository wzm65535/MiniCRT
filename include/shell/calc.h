/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//对操作数ab进行五则运算
#include <stdio.h>

int calc()
{
    double a=0,b=0; //操作数ab
    scanf("%lf%*c%lf",&a,&b);
    printf("+:%lf\r\n",(a+b));
    printf("-:%lf\r\n",(a-b));
    printf("*:%lf\r\n",(a*b));
    printf("/:%lf\r\n",(a/b));
    printf("%%:%lf\r\n",((int)a % (int)b));  //求余强制转换为整型
    printf("\r\n");
}