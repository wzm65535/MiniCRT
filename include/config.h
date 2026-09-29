/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用，但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//版本号
#define version "v0.2.4"
//指令集
#define commands "\r\n\
指令集:\r\n\
help   查看帮助\r\n\
ver    输出版本号\r\n\
cls    清屏\r\n\
echo   输出字符串\r\n\
exit   退出程序\r\n\
type   显示各种变量类型大小\r\n\
calc   求操作数的五则运算值\r\n\
guess  猜数字游戏\r\n\
start  显示启动界面\r\n\
stats  对输入5个数字进行均值,求和,最大值,最小值\r\n\
"


