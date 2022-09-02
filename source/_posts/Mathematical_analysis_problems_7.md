---
title: 数学分析 七 典型例题 及 参考资料 速查表
date: 2019-08-27
categories: 数学分析
tags: [题目, 数学分析]
---

# 典型综合题分析 7

# 定理

## 康托定理

若函数f(x)在闭区间[a,b]上连续，则它在[a,b]上一致连续。换言之，在闭区间上连续的函数在该闭区间一致连续。

采用反证法。

假设$f(x)$在$[a,b]$上非一致连续，由非一致连续定义可知存在$\epsilon_0 > 0$及两点列$$\{x'_n\}$$和$$\{x''_n\}$$，$$x'_n,x''_n\in[a,b]$$，满足

$$$$

<!-- more -->

，且 。

因为有界，由Bolzano-Weierstrass定理(波尔查诺-维尔斯特拉斯定理是指有界数列必有收敛子列。从极限点的角度来叙述致密性定理，就是：有界数列必有极限点。)，存在收敛子列：



在点列中取子列，其下标与下标相同，则由，又得到



由于函数在点连续，因而有



于是得到：



但这与假设产生矛盾，从而推翻假设，得到在上的一致连续的结论。


## 和差化积

# 问题

积分表/等价无穷小 背不全

重要公式

int sin(x)^n dx x=0..pi/2 = int cos(x)^n dx x=0..pi/2 = (n-1)!!/n!! * 1 (n奇数时) * pi/2(偶数)

# 参考 辅助

[latex math symbols cheat sheet](https://kapeli.com/cheat_sheets/LaTeX_Math_Symbols.docset/Contents/Resources/Documents/index)

# Book

[<数学分析解题指南>](https://book.douban.com/subject/1239173/)

ISBN:9787301065501

# TODO

matlab学习

一个或多个 公式cheatsheet

瓦里斯公式

贝塞尔函数相关

幂级数展开
