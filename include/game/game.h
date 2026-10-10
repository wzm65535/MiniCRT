/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//包装游戏文件,防止主函数中调用一堆文件
#include "guess.h"            //猜数字游戏
#include "minesweeper.h"      //扫雷
#include <windows.h>

int game()
{
    system("cls");  //清屏
    game:
    printf("====games====\r\n");
    printf("0.exit\r\n");
    printf("1.guess\r\n");
    printf("2.minesweeper\r\n");
    printf("请选择:");

    static char choose;
    scanf("%*c%c",&choose);  //用户选择游戏
    printf("\r\n");
    switch(choose)
    {
        case '0':
        return 0;   //退出
        break;
        case '1':   
        guess();    //猜数字游戏
        break;
        case '2':    //扫雷
        minesweeper();
        break;
        default:
        printf("输入错误!\r\n");
        goto game;
    }
}