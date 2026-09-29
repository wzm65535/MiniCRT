//测试二分查找算法
#include <stdio.h>

unsigned char arr[] = {1,2,3,4,5,6,7,8,9,10};
unsigned char left; //查找范围的最左侧
unsigned char right = sizeof(arr); //查找范围的最右侧
unsigned char mid = (sizeof(arr)/sizeof(arr[1]))/2-1; //查找范围的中值的下标
unsigned char find = 0; //默认未找到
unsigned char key = 7; //要找的数字

int main()
{
    while(left <= right)
    {
        mid = (left+right)/2;
        if(arr[mid] > key)  //要找的数大于中值
        {
            right = mid-1;
        }
        else if(arr[mid] < key) //要找的数小于中值
        {
            left = mid+1;
        }
        else
        {
            find = 1; //找到了
            break;
        }
    }
    if(find == 1)
    {
        printf("找到了,下标为%d\r\n",mid);
        return 0;
    }
    else
    {
        printf("找不到!\r\n");
        return 0;
    }
}