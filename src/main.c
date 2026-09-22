/*
 * MiniCRT - 迷你C基础库
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用，但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */

#include <stdio.h>
#include <stdlib.h>
#include "C:Users\Tata\Desktop\MiniCRT\include\config.h"

int main()
{
    while(1)
    {
        printf("MiniCRT %s\r\n",version);
        printf("MiniCRT Tests Runner\r\n");
        printf("0.exit\r\n");
        printf("1.String tests\r\n");
        printf("2.Memory tests\r\n");
        printf("请选择(输入数字):");
        unsigned int choose;
        scanf("%d",&choose);
        switch(choose)
        {
            case 0:
            return 0;

            case 1:
            system("cls");
            printf("String tests\r\n");
            break;

            case 2:
            system("cls");
            printf("Memory tests\r\n");
            break;            
        }
    }    
}