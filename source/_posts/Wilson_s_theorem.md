---
title: (p-1)!+1 = 0 (mod p) Wilson's theorem 威尔逊定理
date: 2021-05-21 01:01:01
categories: 数论
tags: [数论]
---


# 威尔逊定理

Wilson's theorem

# 显然

当然如果要

(x-1)!+1 是 x 的倍数,那么x一定是质数, 否则, 阶乘部分就是x的倍数

# 下证 如果是质数 则成立

<!--more-->

首先 1..p-1 是 模p的所有余项

集合$A = {1,2,\cdots,p-1}$

任意$ i \in A $ 存在唯一$j \in A, i \cdot j = 1 (\bmod p)$ ,j 是 i 的逆元 ( 通过 相同的i,不同的j的乘积不同,又乘积以后也是所有余项,可得存在唯一i的逆元)

令 $x = (p-1)! $

那么 $x^2 = 1(\bmod p)$


因为 对于任意i, 不论i的逆元是 i本身,还是与i不同,都是唯一存在的,且i不同则j不同,所以 i(1~p-1)与i的逆元两两配对

可得$x = 1(\bmod p)$或 $x=p-1 (\bmod p)$ , 可以假设 $x = p - a$ 然后 $(p-a-1)(p-a+1) = 0 (\bmod p)$ 得到

我们也能得到只有 $1^2 = 1 (\bmod p), (p-1)^2 = 1 (\bmod p)$

$(p-1)! = 1\cdot 1 \cdot (p-1) = p-1  = -1 (mod p) $, 因为除了p-1, 其它的两两配对

得证
