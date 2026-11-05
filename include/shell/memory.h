/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//输入一个整数,求这个整数存储的变量的地址(指针的值)和指针指向变量的值

int memory()
{
    printf("输入一个整数:");
    int a = 0;  //用户输入的数字
    scanf("%d",&a);
    printf("variable value:%d\r\n",a);
    printf("variable address:%p\r\n",&a);
    int *p = NULL;  //变量a的地址
    p = &a;
    printf("pointer value:%p\r\n",p);
    printf("pointer target:%d\r\n\r\n",*p);
}