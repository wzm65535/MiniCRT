/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//求字符串字符数
#include <stdio.h>

int mini_strlen(const char *str)  //指针法
{
    unsigned int count = 0;  //字符数
    for(unsigned int i = 0;i < 65535;i++)
    {
        if(*str == '\0')  //如果读到结束符
        {
            return count;  //返回字符数
        }
        else
        {
            count++;
        }
        str++;
    }
    printf("共有65535字符,也可能是输入字符过多\r\n");
}
/*
int mini_strlen()
{
    unsigned int count = 0;  //字符数
    char a[65535];
    printf("请输入文本:");
    scanf("%s",&a);
    for(unsigned int i = 0;i < 65535;i++)
    {
        if(a[i] == '\0')  //如果读到结束符
        {
            printf("共有%d个字符\r\n",count);
            return 0;
        }
        else
        {
            count++;
        }        
    }
    printf("共有65535字符,也可能是输入字符过多\r\n");
}
*/