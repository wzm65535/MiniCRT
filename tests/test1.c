#include <stdio.h>
#include <stddef.h>

int main()
{
    printf("int:%d\r\n",sizeof(int));
    printf("char:%d\r\n",sizeof(char));
    printf("short:%d\r\n",sizeof(short));
    printf("long:%d\r\n",sizeof(long));
    printf("long long:%d\r\n",sizeof(long long));
    printf("u int:%d\r\n",sizeof(unsigned int));
    printf("u char%d\r\n",sizeof(unsigned char));
    printf("u short:%d\r\n",sizeof(unsigned short));
    printf("u long:%d\r\n",sizeof(unsigned long));
    printf("u long long:%d\r\n",sizeof(unsigned long long));
}