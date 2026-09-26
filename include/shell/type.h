#include <stdio.h>

int type()
{
    printf("int:%d\r\n",sizeof(int));
    printf("char:%d\r\n",sizeof(char));
    printf("short:%d\r\n",sizeof(short));
    printf("long:%d\r\n",sizeof(long));
    printf("long long:%d\r\n",sizeof(long long));
    printf("double:%d\r\n",sizeof(double));
    printf("float:%d\r\n",sizeof(float));
    printf("long double:%d\r\n",sizeof(long double));
    printf("u int:%d\r\n",sizeof(unsigned int));
    printf("u char%d\r\n",sizeof(unsigned char));
    printf("u short:%d\r\n",sizeof(unsigned short));
    printf("u long:%d\r\n",sizeof(unsigned long));
    printf("u long long:%d\r\n",sizeof(unsigned long long));
    printf("\r\n");
}