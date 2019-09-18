---
title: Mathematical_analysis
date: 2019-08-23 01:01:01
updated: 2019-08-23 01:01:01
categories: 数学分析
tags: [使用的方法]
mathjax: true
---

# Book

[<数学分析解题指南>](https://book.douban.com/subject/1239173/)

ISBN:9787301065501

# 分析基础 1

## 序列极限 1.3

### 题目 1.3.4

设 $$A>0,x_1>0,x_{n+1}=\frac12(x_n+\frac A{x_n}) (n=1,2,\dots)$$

(1) 求证: $$x_n$$单调下降且有下界

(2) 求$$lim_{n->\infty}x_n$$

<!-- more -->

### 题解

(1) 显然 $$x_n \geq \sqrt A (n\geq2)$$

有 $$x_{n+1}-x_n = \frac12(\frac A{x_n}-x_n) = \frac12 \cdot \frac {(\sqrt A - x_n)(\sqrt A + x_n)}{x_n} \leq 0 (n\geq2)$$

(2) 设极限为`a`,带入原式子,则 推出$$a=\sqrt A$$

### 题目 1.3.9

求证 $$a_n = lim_{n->\infty}[\frac{(2n-1)!!}{(2n)!!}]^2\cdot\frac1{2n+1}$$极限存在

### 题解

$$a_n = lim_{n->\infty}[\frac{(2n-1)!!}{(2n)!!}]^2\cdot\frac1{2n+1}  > 0$$

$$ \frac{a_{n+1}}{a_n} = \frac{(2n+1)^3}{(2n+2)^2\cdot (2n+3)} < 1$$

单调递减 有下界限

从 $$ln a_{n+1} - ln a_n$$ 上看 说明 $$ln a_{n}$$ 趋于 $$-\infty$$ , $$a_n$$极限为$$0$$

总感觉有地方没有说清楚

## 函数极限与连续概念 1.4

### 题目 1.4.3

设 $$ 0<x_n<+\infty $$,且满足 $$ x_n+\frac 4 {x_{n+1}^2} < 3 $$, 求出此极限值。

### 题解 ????

由题目显然有 $$\frac{2\sqrt3}3 < x_n  < 3$$

$$x_{n+1}-x_n > \frac {x_{n+1}^3-3_{n+1}^2+4}{x_{n+1}^2} = \frac {(x_{n+1}+1)(x_{n+1}-2)^2}{x_{n+1}^2} > 0 $$ 

单调递增 有上界

如果 $x_n > 2$ 令 $x_n = 2+y_n,1 > y_n > 0$ , $y_n$单调递增

如果 $$x_n = 2$$ 有 $x_{n+1} > 2$ 取 $ n = n+1$

$$x_{n+1}-x_n > \frac {(x_{n+1}+1)(x_{n+1}-2)^2}{x_{n+1}^2} > \frac {(2+1)y_{n+1}^2}{3^2} $$

$m-n > \frac{3}{y_{n+1}^2}$时, 存在 $y_m > 3$

$$\therefore \frac{2\sqrt3}3 < x_n  < 2$$

如果 $x_n < 2$ 令 $x_n = 2-y_n,2-\frac{2\sqrt3}3 > y_n > 0$ , $y_n$也单调递减

$$(-y_{n+1}) - (-y_{n}) > x_{n+1}-x_n > \frac {(x_{n+1}+1)(x_{n+1}-2)^2}{x_{n+1}^2} > \frac {2 y_{n+1}^2}{2^2} $$

$$ y_n > y_{n+1} + \frac{y_{n+1}^2}{2} $$

$$ y_{n+1} < \sqrt{2y_n+1} -1 = \frac {2y_n}{\sqrt{2y_n+1}+1} <  $$

然后呢????

还是说 简单说 所有 小于2 都不是定点都会增大,但所有增大的结果都小于2 ?,或者说 假设一个小于2的为 极致 用反证 唯一？

### 题目 1.4.12

设序列$${x_n}$$由如下迭代产生:

$$x_1=\frac12,x_{n+1} = x_n^2 + x_n (n=1,2,\dots)$$

求证 $$lim_{n->\infty}(\frac1{1+x_1}+\frac1{1+x_2}+\cdot+\frac1{1+x_n})=2$$

### 题解 ???

## 比区间上连续函数的性质 1.5

### 题目 1.5.3

设 $$f_n(x)=x^n+x$$

求证

(1) 对任意自然数 $$n>1$$,方程 $$f_n(x) = 1$$在$$(\frac12,1)$$内有且仅有一个根

(2) 若$$c_n \in (\frac12,1)$$是$$f_n(x)=1$$的根,则$$lim_{n->infty}c_n$$存在，并求此极限

### 题解 ???

(1)

求导$$nx^{n-1}+1>0$$,严格单调

所以 $$ (f_n(\frac12)-1) \cdot (f_n(1)-1) < 0, x \in (\frac12,1)$$ 有根,得证

(2) ???

### 题目 1.5.4

设置$$f(x)$$在 $[a,b]$ 上无界,求证: $$\exists c \in [a,b]$$,使得 $$\forall \delta > 0$$ 函数 $$f(x)$$在 $$[c-\delta,c+\delta]\bigcap [a,b]$$上无界

### 题解 ???

### 题目 1.5.5

设 $$\{x_n\}$$ 为有界序列。求证: $x_n$ 以 $a$为极限的充分必要条件是: $\{x_n\}$的任一收敛子序列都有相同的极限值$a$.

### 题解 ???

### 题目 1.5.7

设 $f(x) \in \mathbb{C}[a,b]$ 且有唯一的取到$f(x)$最大值的点$x^*$ 又设 $x_n \in [a,b] (n=1,2,\dots)$

使得$$ lim_{n->\infty} f(x_n) = f(x^*), 求证 lim_{n->\infty} x_n = x^*$$

### 题解 ???

### 题目 1.5.8

设$$ f(x) \in \mathbb{C}[0,+\infty) $$又设对 $$\forall l \in \mathbb{R}$$ 方程 $$f(x) = l$$在 $$[0,+\infty)$$ 上只有有限个解或无解,求证:

(1) 如果 $f(x)$ 在 $$[0,+\infty)$$ 上有界,则极限 $$lim_{x->+\infty}f(x)$$存在;

(2) 如果 $f(x)$ 在 $$[0,+\infty)$$ 上无上界,则 $$lim_{x->+\infty}f(x) = + \infty$$

### 题解 ???

### 题目 1.5.10

设$f(x)$在$[a,b]$上定义,$x_0\in [a,b]$如果对 $\forall \epsilon > 0,\exists \delta > 0$ 当 $|x-x_0|<\delta$时, 有 $f(x) < f(x_0)+\epsilon$, 那么称$f(x)$在点$x_0$处**上半连续**,如果$f(x)$在$[a,b]$上的没一点都上半连续,则称$f(x)$为$[a,b]$上的一个**上半连续函数**.求证: $[a,b]$上的**上半连续函数**一定有上界.

### 题解 ???

# 一元函数微分学 2

## 导数与微分 2.1

### 题目 2.1.3

### 题目 2.1.7

### 题目 2.1.8

### 题目 2.1.13

### 题目 2.1.14

## 微分种植定理 2.2

### 题目 2.2.5

### 题目 2.2.9

### 题目 2.2.10

### 例17

## 函数的升降、极值、最值问题 2.3

### 题目 2.3.3

### 题目 2.3.6

### 题目 2.3.9

## 函数的嗷图形、拐点及函数作图 2.4

## 洛必达法则与泰勒公式 2.5

## 一元函数微分学的综合应用 2.6

# 一元函数积分学 3

## 不定积分和可积函数类 3.1

## 顶积分概念、可积条件与定积分性质 3.2

## 变限顶积分、微积分基本定理、定积分的换元法 3.3

## 定积分的应用 3.4

## 广义积分 3.5

# 级数 4

# 多元函数微分学 5

# 多元函数积分学 6

# 典型综合题分析 7

# 定理

## 康托定理

若函数f(x)在闭区间[a,b]上连续，则它在[a,b]上一致连续。换言之，在闭区间上连续的函数在该闭区间一致连续。

采用反证法。

假设$f(x)$在$[a,b]$上非一致连续，由非一致连续定义可知存在$\epsilon_0 > 0$及两点列$$\{x'_n\}$$和$$\{x''_n\}$$，$$x'_n,x''_n\in[a,b]$$，满足

$$$$

，且 。

因为有界，由Bolzano-Weierstrass定理(波尔查诺-维尔斯特拉斯定理是指有界数列必有收敛子列。从极限点的角度来叙述致密性定理，就是：有界数列必有极限点。)，存在收敛子列：



在点列中取子列，其下标与下标相同，则由，又得到



由于函数在点连续，因而有



于是得到：



但这与假设产生矛盾，从而推翻假设，得到在上的一致连续的结论。


## 和差化积

# 参考 辅助

[latex math symbols cheat sheet](https://kapeli.com/cheat_sheets/LaTeX_Math_Symbols.docset/Contents/Resources/Documents/index)