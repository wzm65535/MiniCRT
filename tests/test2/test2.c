/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//五则运算测试
#include <stdio.h>

unsigned char aaa = 45;

int main()
{
    printf("12+45=%d\r\n",12+aaa);
    aaa = 65;
    aaa++;
    printf("66-23=%d\r\n",aaa-23);
    aaa=12;
    aaa--;
    printf("11*1.1=%f\r\n",aaa*1.1);
    printf("20/2.5=%f\r\n",20/2.5);
    printf("20/6=%d 余%d\r\n",20/6,20%6);
    printf("(20+12-45)*15/7=%d 余%d\r\n",(20+12-45)*15/7,(20+12-45)*15%7);
    printf("3.14-1=%d(强制类型转换)\r\n",((char)3.14-1));
}