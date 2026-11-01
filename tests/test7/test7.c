/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//测试extern与static
#include "include.h"
#include "stdio.h"

static char text[9] = "wzm65535"; //aaa只能在这个文件内使用

int main()
{
    printf("%d\r\n",aaa);
    printf("%s\r\n",text);
}