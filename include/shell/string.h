/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//输入5个字符串,并将其及其的首字符换行打印出来
#include <stdio.h>

int string()
{
    unsigned int num = 5;  //字符串数量
    char storage[5][64];
    char *items[5] = {storage[0],storage[1],storage[2],storage[3],storage[4]};
    char **p = items;
    for(unsigned int i = 0;i < num;i++)
    {
        getchar();
        printf("请输入第%d个字符串:",i+1);
        scanf("%s",p[i]);
    }
    printf("\r\n");
    for(unsigned int i = 0;i < num;i++)
    {
        printf("[%d]:%s   首字符:%c\r\n",i+1,*p,**p);
        p++;
    }
}