//输入一个十进制数字,输出其二进制位
#include <stdio.h>

int num = 0;    //用户输入的数字
int aaa = 0;   //转二进制和改位用的临时变量
int bin[16] = {0};   //存读到的二进制用的数组

void bits()
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
        aaa = num;
        aaa = aaa >> i;
        aaa &= 1;
        bin[16-i-1] = aaa;    //将得到的二进制位存入数组
    }      
    printf("BIN:");
    for(unsigned char i = 0;i < 16;i++)   //输出二进制如0000 1111
    {
        if(i == 4 || i == 8 || i == 12)
        {
            printf(" ");
        }
        printf("%d",bin[i]);
    }
    printf("\r\n");
}

void bit_count()  //数一个十进制整数的二进制形式里有几个1
{
    bits();
    unsigned char count = 0;
    for(unsigned char i = 0;i < 16;i++)
    {
        if(bin[i] == 1)
        {
            count++;
        }
    }
    printf("共有%d个1\r\n",count);
}

void bit_toggle()  //对一个十进制整数的二进制形式进行按位取反
{
    bits();
    printf("T_BIN:");
    for(unsigned char i = 0;i < 16;i++)
    { 
        if(i == 4 || i == 8 || i == 12)
        {
            printf(" ");
        }
        if(bin[i] == 0)  //如果当前位是0
        {
            bin[i] = 1;
        }
        else if(bin[i] == 1) //如果当前位是1
        {
            bin[i] = 0;
        }
        printf("%d",bin[i]);
    }
    printf("\r\n");
}

void bit_set()  //设置一个十进制整数的二进制形式的某个位
{
    bits();
    b:
    printf("请输入你要更改哪一位(从左到右0-15):");
    int change = 0;  //用户选择的位号
    scanf("%d",&change);
    if(change >= 16)  //如果输入错误
    {
        printf("输入错误!\r\n");
        goto b;
    }
    c:
    printf("请输入要改为的值(0/1):");
    scanf("%d",&aaa);
    if(aaa == 0) //目标位要改成0
    {
        bin[change] = 0;
    }
    else if(aaa == 1)  //目标位要改成1
    {
        bin[change] = 1;
    }
    else
    {
        printf("输入错误!\r\n");
        goto c;
    }
    for(unsigned char i = 0;i < 16;i++)  //打印整个数组
    {
        if(i == 4 || i == 8 || i == 12)
        {
            printf(" ");
        }
        printf("%d",bin[i]);
    }
    printf("\r\n");
}