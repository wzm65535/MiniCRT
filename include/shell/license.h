/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 MIT协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//打印许可证
#include <stdio.h>

int license()
{
   printf("MIT License\r\n\
\r\n\
Copyright (c) 2026 wzm65535 <https://github.com/wzm65535>\r\n\
\r\n\
Permission is hereby granted, free of charge, to any person obtaining a copy\r\n\
of this software and associated documentation files (the \"Software\"), to deal\r\n\
in the Software without restriction, including without limitation the rights\r\n\
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\r\n\
copies of the Software, and to permit persons to whom the Software is\r\n\
furnished to do so, subject to the following conditions:\r\n\
\r\n\
The above copyright notice and this permission notice shall be included in all\r\n\
copies or substantial portions of the Software.\r\n\
\r\n\
THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\r\n\
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\r\n\
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\r\n\
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\r\n\
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\r\n\
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\r\n\
SOFTWARE.\r\n");
}