//输入十进制整数,对其进行位操作
#include <stdio.h>

static int num = 0;    //用户输入的数字
static short int a = 0;   //转二进制用的临时变量
static int b[16] = {0};   //存读到的二进制用的数组

int bits()  //输入一个十进制数字,输出其二进制位
{
    printf("BIN 显示 16 位补码,负数与高位无符号数可能显示相同二进制,输入整数范围为-32768~65535\r\n");
    a:
    printf("输入一个整数:");
    scanf("%d",&num);
    if(num >= 65536)
    {
        printf("输入值过大!重新");
        goto a;
    }
    else if(num < -32768)
    {
        printf("输入值过小!重新");
        goto a;        
    }
    for(unsigned char i = 0;i < 16;i++)
    {
        a = num;
        a = a >> i;
        a &= 1;
        b[16-i-1] = a;    //将得到的二进制位存入数组
    }      
    printf("BIN:");
    for(unsigned char i = 0;i < 16;i++)   //输出二进制如0000 1111
    {
        if(i == 4 || i == 8 || i == 12)
        {
            printf(" ");
        }
        printf("%d",b[i]);
    }
    printf("\r\n");
}