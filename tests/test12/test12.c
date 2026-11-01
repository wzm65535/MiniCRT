/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//指针测试
#include <stdio.h>

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p;  //指针变量p 
    //正序打印数组a内的所有数的地址(解法1)
    for(unsigned char i = 0;i < 10;i++)
    {
        p = &a[i];
        printf("a[%d] = %d\r\n",i,a[i]);
        printf("*p = %p\r\n",p);
    }
    printf("\r\n");
    int b = 3;
    //运用指针求b的地址
    p = &b;  
    printf("变量b的值为:%d\r\n",b);
    printf("变量b的地址为:%p\r\n",p);
    //运用指针求p的地址
    printf("指针p的地址为:%p\r\n",&p);
    //运用指针求p指向的变量(b)的值
    printf("p指向的变量(b)的值为:%d\r\n",*p);   //*p 指向p指向的变量b
    int *ptr = NULL;  //空指针
    printf("空指针ptr的值为:%p\r\n",ptr);
    if(ptr)
    {
        printf("ptr不为空\r\n");
    }
    else if(!ptr)
    {
        printf("ptr为空指针\r\n");
    }
    printf("指针p的大小为:%zd\r\n",sizeof(p));

    //正序打印数组a内的所有数的地址(解法2)
    printf("\r\n正序打印数组a内的所有数的地址\r\n");
    p = &a[0];
    for(unsigned char i = 0;i < 10;i++)
    {
        printf("&a[%d] = %p\r\n",i,p);
        p++;  //指针递增指向 下一个 存储集(比如4个字节),因为数组在内存中是连续储存的,所以可以这么用
    }

    //倒序打印数组a内的所有数的地址(正序都演示两种解法了,这里就不演示了)
    printf("\r\n倒序打印数组a内的所有数的地址\r\n");
    p = &a[9];
    for(char i = 9;i > -1;i--)  //这里你猜我为什么改用char了
    {
        printf("&a[%d] = %p\r\n",i,p);
        p--;  //指针递减指向 上一个 存储集(比如4个字节),原因同上
    }
    
    printf("这个数组a是int类型,在之前的test1中可以发现int变量的大小为4字节,如果观察刚才打印的数组地址,可以发现从小到大每一个都递增4\r\n");   
    //泛型指针演示
    void *c = NULL;  //空指针记得随手赋NULL
    char e = 114;
    char *d = &e;
    c = d;  //可以看到泛型指针可以用来接收任何类型的地址
    printf("&char e = %p\r\n",&e);
    printf("char *d = %p\r\n",d);
    printf("void *c = %p\r\n",c);
    //指针比在内存中的前后
    if(&a[1] < &a[3])
    {
        printf("值a[3]在内存中储存的地址a[1]之后\r\n");
    }
    else if(!(&a[1] < &a[3]))
    {
        printf("值a[3]在内存中储存的地址不在a[1]之后\r\n");
    }
    /*const修饰指针变量
    int j,k;
    const int *h = &j;  //指针h的值可变,但指针指向的j不可变
    int * const i = &k;  //指针i的值不变,但指针指向的k可变*/
    /*野指针
    int *dcd; //局部变量指针未初始化,默认为随机值
    int a[10]={0};
    int *aac = a[11];  //指针越界访问
    还有假如有一个局部变量a是仅限在某个函数里的,
    如果那个函数执行完成,也读不到 //指针指向的空间释放
    */
}