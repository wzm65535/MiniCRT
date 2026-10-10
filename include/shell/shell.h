/*
 * MiniCRT —— 一个以 DOS/CMD 风格 Shell 为交互入口、通过持续迭代学习 C 语言的工程实践项目
 * Copyright (C) 2026 wzm65535 <https://github.com/wzm65535>
 *
 * 本项目采用 WTFPL变体协议 开源。
 * 允许随意使用、修改、商用,但必须保留此版权声明及署名。
 * 详细条款见项目根目录 LICENSE 文件。
 */
//包装指令文件,防止主函数中调用一堆文件
#include "type.h"     //打印各种类型所占大小
#include "calc.h"     //对操作数ab进行五则运算
#include "stats.h"    //对输入的正数进行均值,求和,最大值,最小值
#include "matrix.h"   //输出一个矩阵,并对其进行行列处理,求和,转置操作