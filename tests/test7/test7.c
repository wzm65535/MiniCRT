//测试extern与static
#include "include.h"
#include "stdio.h"

static char text[9] = "wzm65535"; //aaa只能在这个文件内使用

int main()
{
    printf("%d\r\n",aaa);
    printf("%s\r\n",text);
}