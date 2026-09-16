#include <stdio.h>

int main()
{
    //输出至少占5格右对齐
    printf("%5d\r\n",1);
    printf("%5d\r\n",114);
    printf("%5d\r\n",1145);
    printf("%5d\r\n",114514);
    //输出至少占5格左对齐
    printf("%-5d\r\n",1);
    printf("%-5d\r\n",114);
    printf("%-5d\r\n",1145);
    printf("%-5d\r\n",114514);
    //总是显示正负号
    printf("%+d\r\n",114514);
    printf("%+d\r\n",-114514);
    //限制小数位数为三位
    printf("%.3f\r\n",11.4514);
    //限制小数位为三位,输出至少占10格
    printf("%10.3f\r\n",114.5141);
    //限制小数位为三位,输出至少占10格(后面指定)
    printf("%*.*f\r\n",10,3,114.5141);
    //设置输出字符串的前4位
    printf("%.4s\r\n","114514abc");
    //复读机(最高1024字节)
    char text[1024];
    printf("我是复读机(最高1024字节):");
    scanf("%s",text);
    printf("复读:%s\r\n",text);

}