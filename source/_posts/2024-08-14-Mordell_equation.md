---
title: 求手算出x^3+101=y^2的正整数解
date: 2024-08-14
categories:
  - 数论
tags:
  - Mordell_s_equation
  - 数论
description: 来自2009年初中数学竞赛的一道题
---

# 题目

$x^3+101=y^2$ 求手算一组正整数解

这道题目来自2009年初中数学竞赛的一道题

https://zhidao.baidu.com/question/123254978.html

https://zhidao.baidu.com/question/114242326.html

---

https://www.zhihu.com/question/664003966

https://math.stackexchange.com/questions/4957099

## 一些不算成功的尝试

在场上 有尝试做一些mod,但没有很多，然后以为不会太大，就开始了暴力计算，当然当场是没有做出这个题目

---

当时赛后 问了汀舅，汀舅给的方案是

做了更多的mod,进一步缩小枚举范围，但没有特别如意

---

最近在整理一些东西，突然又看到了这个，自己尝试了一下

通过 $x^3+1 = (x+1)(x^2-x+1)=(y-10)(y+10)$ 的变形，让我对于2相关的 幂次很感兴趣

比较容易的得到了 $x\equiv 3\pmod{16}, y\equiv 0 \pmod{4}$ 或 $x\equiv -1\pmod{16}, y\equiv 2 \pmod{4}$

这对于知道答案的来说，的确已经可以暴力手动计算了，但对于不知道答案的来说，其实不知道自己会需要枚举多少个

## 来自math.stackexchange的提速方案

$x^3+101=y^2\pmod 9$

容易得到 $x\equiv 2 \pmod{3}$,  计算量也不大，因为$x$侧只用关心 $\mod 3$, $y$侧考虑$0\to8$

---

然后 考察

$x^3+101=y^2\pmod 8$

可以得到 $x\equiv 3\pmod{8}, y\equiv 0 \pmod{4}$ 或 $x\equiv -1\pmod{8}, y\equiv 2 \pmod{4}$

---

两者结合可以得到 

$x\equiv -1 \pmod{24}, y \equiv 2 \pmod{4}$

$x\equiv 11 \pmod{24}, y \equiv 0 \pmod{4}$

---

$x=24a-1,y=4b+2$ 通过测试$\pmod{16}$可以得到$a$是偶数,$x=48c-1$, 再尝试$\pmod{32}$可以得到$x=96d-1$

$x=24a+11,y=4b$ 通过测试$\pmod{16}$可以得到$a$是奇数$x=48c+35$ ??TODO

## 相关

[知乎 椭圆曲线的一些基础性质 陆zz](https://zhuanlan.zhihu.com/p/27159180)

[知乎 ](https://www.zhihu.com/question/491035924)

https://hr.userweb.mwn.de/numb/mordell.html

[Travis Willse](https://math.stackexchange.com/a/4957401/728591) 大佬说  The following routine in Sage 的结果 看来只有 x=-1,和x=95两个解

[Sayan Dutta](https://math.stackexchange.com/a/4958295/728591)  大佬说 这是 Mordell's equation

http://alpha.math.uga.edu/%7Epete/4400MordellEquation.pdf

https://kconrad.math.uconn.edu/blurbs/gradnumthy/mordelleqn1.pdf

https://www.math.leidenuniv.nl/%7Eevertsejh//dio2011-diophantine.pdf
