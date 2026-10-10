//演示多个字符从两端移动,向中间汇聚
#include <stdio.h>
#include <windows.h>

char arr1[]="LEGO Audi Quattro S1 E2 by:wzm65535 https://www.bilibili.com/video/BV1KLNX6rEqj"; //要替换的文本
char arr2[]="###############################################################################"; //原文本

int main()
{
    printf("%s\r\n",arr2);
    unsigned int num; //数组的元素数量
    num = (sizeof(arr1)/sizeof(arr1[1]));
    for (unsigned char i = 0; i < (num/2); i++)
    {
        system("cls"); //清屏
        arr2[i] = arr1[i];
        arr2[(num-i-2)] = arr1[(num-i-2)];
        printf("%s\r\n",arr2);
        Sleep(500);
    }   
}