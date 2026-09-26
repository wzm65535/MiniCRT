/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用，但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "../include/config.h"
#include "../include/shell/shell.h"

int main()
{
    printf("MiniCRT Shell[%s]\r\n",version);
    while(1)
    {
        printf(">");
        char command[32];
        scanf("%s",&command);
        if(strcmp(command,"help") == 0) //帮助
        {
            printf("\r\n");
            printf("%s\r\n",commands);
        }
        else if(strcmp(command,"ver") == 0) //输出版本号
        {
            printf("MiniCRT Shell[%s]\r\n",version);
            printf("Copyright (C) 2026 wzm65535 保留所有权利\r\n");
        }
        else if(strcmp(command,"cls") == 0) //清屏
        {
            system("cls");
            printf("MiniCRT Shell[%s]\r\n",version);            
        }
        else if(strcmp(command,"echo") == 0) //输出字符串(最高1145字符)
        {
            char text[1145];
            scanf("%s",&text);
            printf("%s\r\n",text);
        }
        else if(strcmp(command,"exit") == 0) //退出程序
        {
            return 0;
        }
    }
}