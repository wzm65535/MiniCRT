//测试C运算符
#include <stdio.h>

unsigned int A = 10;   //操作数A
unsigned int B = 20;   //操作数B
int C = 0;    //结果C

int main()
{
    printf("A=%d B=%d\r\n",A,B);
    /*====================算数运算符====================*/
    printf("\r\n");
    printf("以下为算数运算符部分:\r\n");
    C = A + B;   //+ 加法
    printf("A+B = %d\r\n",C);
    C = A - B;   //- 减法
    printf("A-B = %d\r\n",C);
    C = A * B;   //* 乘法
    printf("A*B = %d\r\n",C);
    C = B / A;   /// 除法
    printf("B/A = %d\r\n",C); 
    C = B % A;   //% 求余数
    printf("B%%A = %d\r\n",C);
    C = A;       
    C++;         //++ 自增
    printf("A++ = %d\r\n",C);
    C = B;
    C--;         //-- 自减
    printf("B-- = %d\r\n",C);
    /*====================关系运算符====================*/
    printf("\r\n");
    printf("以下为关系运算符部分:\r\n");
    if(A == B)   //A==B 判断AB是否相同,如相同为真
    {
        printf("A == B 为真\r\n");
    }
    else printf("A == B 为假\r\n");
    if(A != B) //A!=B 判断AB是否不同,如不同为真
    {
        printf("A != B 为真\r\n");
    }
    else printf("A != B 为假\r\n");
    if(A < B)  //A<B 判断A是否小于B,如小于为真
    {
        printf("A < B 为真\r\n");
    }
    else printf("A < B 为假\r\n");
    if(A > B)  //A>B 判断A是否大于B,如大于为真
    {
        printf("A > B 为真\r\n");
    }
    else printf("A > B 为假\r\n");    
    if(A < B)  //A<=B 判断A是否小于等于B,如小于等于为真
    {
        printf("A <= B 为真\r\n");
    }
    else printf("A <= B 为假\r\n");
    if(A > B)  //A>=B 判断A是否大于等于B,如大于等于为真
    {
        printf("A >= B 为真\r\n");
    }
    else printf("A >= B 为假\r\n");  
    /*====================逻辑运算符====================*/
    printf("\r\n");
    printf("以下为逻辑运算符部分:\r\n");
    if(A && B)  //A&&B 判断A和B是否都不为0,如都不为0为真,与门
    {
        printf("A && B 为真\r\n");
    }
    else printf("A && B 为假\r\n");  
    if(A || B)  //A||B 判断A和B中有没有非0数字,有就为真,或门
    {
        printf("A || B 为真\r\n");
    }
    else printf("A || B 为假\r\n");
    if(!(A && B))  //!(A && B) 对(A && B)的值取反
    {
        printf("!(A && B)为真\r\n");
    }  
    else printf("!(A && B)为假\r\n");  
    /*====================位运算符====================*/
    printf("\r\n");
    printf("以下为位运算符部分:\r\n");  
    /*操作数A与B的二进制表示       
    A = 10 BIN = 0000 1010
    B = 20 BIN = 0001 0100
    */
    /*10与20的逻辑与运算示例
      0000 1010
    & 0001 0100
    = 0000 0000
    */
    C = (A & B);  //对A和B的每个二进制位执行逻辑与操作
    printf("A & B = %d\r\n",C); 

    /*10与20的逻辑或运算示例
      0000 1010
    | 0001 0100
    = 0001 1110
    */
    C = (A | B);  //对A和B的每个二进制位执行逻辑或操作
    printf("A | B = %d\r\n",C); 
         
    /*10与20的逻辑异或运算示例
      0000 1010
    ^ 0001 0100
    = 0001 1110
    */
    C = (A ^ B);  //对A和B的每个二进制位执行逻辑异或操作
    printf("A ^ B = %d\r\n",C); 
 
    /*10与20的逻辑非运算示例
    ~ 0000 1010
    = 1111 0101
    */
    C = ~A;  //对A的每个二进制位执行逻辑非操作
    printf("~A = %d\r\n",C); 
         
    /*10与20的右移2位运算示例
    >>2 0000 1010
    =   0000 0010
    */
    C = A >> 2;  //对A的每个二进制位执行右移2位操作
    printf("A >> 2 = %d\r\n",C); 
    
    /*10与20的左移2位运算示例
    <<2 0000 1010
    =   0010 1000
    */
    C = A << 2;  //对A的每个二进制位执行右移2位操作
    printf("A << 2 = %d\r\n",C); 
    /*====================赋值运算符====================*/
    printf("\r\n");
    printf("以下为赋值运算符部分:\r\n");    
    printf("C += A 相当于 C = C + A\r\n"); 
    printf("C -= A 相当于 C = C - A\r\n");
    printf("C *= A 相当于 C = C * A\r\n");
    printf("C /= A 相当于 C = C / A\r\n");
    printf("C %%=A  相当于 C = C %% A\r\n");
    printf("C =<<2 相当于 C = C << 2\r\n");    //左移二位
    printf("C =>>2 相当于 C = C >> 2\r\n");    //右移二位
    printf("C &= 2 相当于 C = C & 2\r\n");     //按位与
    printf("C |= 2 相当于 C = C | 2\r\n");     //按位或
    printf("C ^= 2 相当于 C = C ^ 2\r\n");     //按位异或
   
    /*====================杂项运算符====================*/
    printf("\r\n");
    printf("以下为杂项运算符部分:\r\n");  
    C = sizeof(int);   //int的大小
    printf("sizeof(int) = %d\r\n",C);   
    //&和*
    printf("&A = %p\r\n",&A);   //变量A的地址 
    int *D;
    D = &A;
    printf("*A = %d\r\n",*D);   //指向变量A
    //三元操作符 X = (A?B:C) 当表达式A为真时,将X赋值为B,否则赋值为C
    int X = 0;
    X = (A == 10) ? 1 : 0;    //当表达式A为10时,将X赋值为55,否则赋值为44
    printf("X = (A == 10)?55:44 = %d\r\n",X);
}