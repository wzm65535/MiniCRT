/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//主文件

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "../include/config.h"       //配置文件
#include "../include/start.h"        //启动动画
#include "../include/shell/shell.h"  //指令包装文件
#include "../include/game/game.h"    //游戏包装文件

int main()
{
    start(); //播放启动动画
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
            printf("MiniCRT Shell [%s]\r\n",version);
            printf("Copyright (C) 2026 wzm65535 保留所有权利\r\n");
            printf("\r\n");
        }
        else if(strcmp(command,"cls") == 0) //清屏
        {
            system("cls");
            printf("MiniCRT Shell [%s] by:wzm65535\r\n",version);            
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
        else if(strcmp(command,"type") == 0) //显示各种变量类型大小
        {
            type();
        }
        else if(strcmp(command,"calc") == 0) //求操作数的五则运算值
        {
            calc();
        }
        else if(strcmp(command,"game") == 0) //游戏
        {
            game();
        }
        else if(strcmp(command,"start") == 0) //显示启动界面
        {
            start();
        }
        else if(strcmp(command,"stats") == 0) //对输入5个正数进行均值,求和,最大值,最小值
        {
            stats();
        }
        else if(strcmp(command,"matrix") == 0) //输出一个矩阵,并对其进行行列处理,求和,转置操作
        {
            matrix();
        }
        else //查不到
        {
            printf("输入错误!输入help指令以查看指令集\r\n\r\n");
        }
    }
}