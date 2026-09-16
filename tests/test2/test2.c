#include <stdio.h>

unsigned char aaa = 45;

int main()
{
    printf("12+45=%d\r\n",12+aaa);
    aaa = 65;
    aaa++;
    printf("66-23=%d\r\n",aaa-23);
    aaa=12;
    aaa--;
    printf("11*1.1=%f\r\n",aaa*1.1);
    printf("20/2.5=%f\r\n",20/2.5);
    printf("20/6=%d 余%d\r\n",20/6,20%6);
    printf("(20+12-45)*15/7=%d 余%d\r\n",(20+12-45)*15/7,(20+12-45)*15%7);
    printf("3.14-1=%d(强制类型转换)\r\n",((char)3.14-1));
}