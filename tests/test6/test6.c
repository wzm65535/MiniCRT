/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//测试二分查找算法
#include <stdio.h>

unsigned char arr[] = {1,2,3,4,5,6,7,8,9,10};
unsigned char left; //查找范围的最左侧
unsigned char right = sizeof(arr); //查找范围的最右侧
unsigned char mid = (sizeof(arr)/sizeof(arr[1]))/2-1; //查找范围的中值的下标
unsigned char find = 0; //默认未找到
unsigned char key = 7; //要找的数字

int main()
{
    while(left <= right)
    {
        mid = (left+right)/2;
        if(arr[mid] > key)  //要找的数大于中值
        {
            right = mid-1;
        }
        else if(arr[mid] < key) //要找的数小于中值
        {
            left = mid+1;
        }
        else
        {
            find = 1; //找到了
            break;
        }
    }
    if(find == 1)
    {
        printf("找到了,下标为%d\r\n",mid);
        return 0;
    }
    else
    {
        printf("找不到!\r\n");
        return 0;
    }
}