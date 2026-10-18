//用递归求第n个斐波那契数
#include <stdio.h>

int Fib(int n)
{
    if(n <= 2)
    {
        return 1;
    }
    else if(n > 2)
    {
        return (Fib(n - 1)+Fib(n - 2));
    }
}

int main()
{
    int n = 0;
    printf("请输入整数n,求第n个斐波那契数:");
    scanf("%d",&n);
    int r = 0;  //结果
    r = Fib(n);
    printf("%d",r);
}