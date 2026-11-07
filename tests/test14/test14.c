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
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("&arr[0]   = %p\r\n",&arr[0]);
    printf("&arr[0]+1 = %p\r\n",&arr[0]+1);
    printf("arr       = %p\r\n",arr);
    printf("arr + 1   = %p\r\n",arr+1);
    printf("&arr      = %p\r\n",&arr);
    printf("&arr + 1  = %p\r\n",&arr+1);
}