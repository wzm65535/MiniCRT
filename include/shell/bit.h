//位操作
#include <stdio.h>

static short int num = 0;    //用户输入的数字
static short int a = 0;   //转二进制用的临时变量
static int b[16] = {0};   //存读到的二进制用的数组

int bits()  //输入一个十进制数字,输出其二进制位
{
    printf("输入一个整数:");
    scanf("%d",&num);
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