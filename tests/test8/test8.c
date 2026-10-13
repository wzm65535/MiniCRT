//运用函数递归求n的阶乘
#include <stdio.h>

unsigned int n = 5;

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int ret = fact(n);
    printf("n的阶乘为%d\r\n",ret);
}