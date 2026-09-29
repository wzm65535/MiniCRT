//一维数组与二维数组测试
#include <stdio.h>

int main()
{   
    int arr1[10]={0,1,2,3,4,5,6,7,8,9}; //一维数组
    int arr2[3][5]={1,2,3,4,5, 6,7,8,9,0 ,1,1,4,5,1}; //二维数组
    
    printf("一维数组\r\n");
    for(unsigned char i = 0; i < 10 ;i++) //打印数组内所有内容
    {
        printf("%d ",arr1[i]);
    }
    printf("\r\n以下为数组内所有内容的地址\r\n");
    for(unsigned char i = 0; i < 10 ;i++) //打印数组内所有内容的地址
    {
        printf("&arr1[%d] = %p\r\n",i,&arr1[i]);
    }
    printf("\r\n");

    printf("二维数组\r\n");
    for(unsigned char a=0; a<3;a++) //打印整个二维数组arr2
    {
        printf("\r\n");
        printf("第%d行:",a);
        for(unsigned char b=0;b<5;b++) //打印行
        {
            printf("%d ",arr2[a][b]); //打印第a行的第b列数字
        }
    }
    printf("\r\n");
    for(unsigned char a=0; a<3;a++) //打印整个二维数组内所有内容的地址
    {
        printf("第%d行:\r\n",a);
        for(unsigned char b=0;b<5;b++) //打印行
        {
            printf("&arr2[%d][%d] = %p\r\n",a,b,&arr2[a][b]); //打印第a行的第b列的地址
        }
    }    

    printf("\r\n\r\n");
    printf("一维数组\r\n");
    printf("数组大小:%d\r\n",sizeof(arr1)); //输出数组大小
    printf("数组第二项大小:%d\r\n",sizeof(arr1[1]));  //输出数组第二项大小
    unsigned int num; //数组的元素数量
    num = (sizeof(arr1)/sizeof(arr1[1]));
    printf("数组的元素数量:%d\r\n\r\n",num);
    
    printf("二维数组\r\n");
    printf("数组大小:%d\r\n",sizeof(arr2)); //输出数组大小
    printf("数组第一行第二项大小:%d\r\n",sizeof(arr2[0][1]));  //输出数组第一行第二项大小
    unsigned int ber; //数组的元素数量
    ber = (sizeof(arr2)/sizeof(arr2[0][1]));
    printf("数组的元素数量:%d\r\n",ber);    
    
}