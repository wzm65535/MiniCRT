#include <stdio.h>

int calc()
{
    double a=0,b=0; //操作数ab
    scanf("%lf%*c%lf",&a,&b);
    printf("+:%lf\r\n",(a+b));
    printf("-:%lf\r\n",(a-b));
    printf("*:%lf\r\n",(a*b));
    printf("/:%lf\r\n",(a/b));
    printf("%%:%lf\r\n",((int)a % (int)b));  //求余强制转换为整型
    printf("\r\n");
}