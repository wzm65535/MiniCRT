/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
/*=============配置文件=============*/
//版本号
#define version "v0.3.0"
#define gcc_ver "gcc v16.2.0"
#define git_ver "git version 2.56.0.windows.4"
//指令集
#define commands "\r\n\
指令集:\r\n\
help        查看帮助\r\n\
ver         输出版本号\r\n\
cls         清屏\r\n\
echo a      输出字符串a\r\n\
exit        退出程序\r\n\
type        显示各种变量类型大小\r\n\
calc a b    求操作数ab的五则运算值\r\n\
game        游戏\r\n\
start       显示启动界面\r\n\
matrix      输出一个矩阵,并对其进行行列处理,求和,转置操作\r\n\
license     打印许可证\r\n\
gcc-ver     输出此程序编译时使用的gcc版本\r\n\
git-ver     输出此程序上传时使用的git版本\r\n\
bit         输入十进制整数,输出其二进制位\r\n\
bit-set     设置一个十进制整数的二进制形式的某个位\r\n\
bit-count   数一个十进制整数的二进制形式里有几个1\r\n\
bit-toggle  对一个十进制整数的二进制形式进行按位取反\r\n\
"


