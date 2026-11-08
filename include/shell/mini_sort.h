/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//各种排序函数

void mini_bubble_sort(int arr[],int sz)  //冒泡排序,参数接收数组元素个数
{
    int temp = 0;
    for(unsigned char i = 0;i < sz-1;i++)
    {
        for(unsigned char a = 0;a < sz-i-1;a++)
        {
            if(arr[a+1] < arr[a])  //如果后一项小于前一项,就调换前后项
            {
                temp = arr[a];
                arr[a] = arr[a+1];
                arr[a+1] = temp;
            }
        }    
    }
}

int sort()  //对输入数进行排序
{
    a:
    printf("你要输入几个数字(>1):");
    unsigned int num = 0;
    scanf("%d",&num);
    if(num < 2)
    {
        printf("请重新输入!\r\n");
        goto a;
    }
    int arr[num];
    printf("请输入数字(输入一次按一下回车):");
    for(unsigned char i = 0;i < num;i++)
    {
        scanf("%d",&arr[i]);
    }
    mini_bubble_sort(arr,num);
    for(unsigned char i = 0;i < num;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\r\n");
}