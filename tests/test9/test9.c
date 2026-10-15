//输??个整数n,按照顺序打印整数的每?位
#include <stdio.h>

int print(int n)
{
    if(n > 9)
    {
        print(n / 10);
    }
    printf("%d ",n % 10);
}

int main()
{
    int m; //用户输入的数字
    printf("请输入数字:");
    scanf("%d",&m);
    print(m);
}