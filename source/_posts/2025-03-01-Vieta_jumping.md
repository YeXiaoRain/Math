---
title: 韦达跳跃Vieta jumping
date: 2025-03-01
categories:
  - 数论
tags:
  - 数论
description: 1988imop6
---

# 题目

$a,b \in\mathbb{Z}^+, ab+1|a^2+b^2$

证明$\frac{a^2+b^2}{ab+1}$是平方数

<!--more-->

## vieta_jumping

韦达跳跃：韦达定理+无穷递降

若 a=b,  $\frac{2a^2}{a^2+1}=\frac{2}{1+\frac{1}{a^2}}=\frac{2}{1+(0,1]}=\frac{2}{(1,2]}=[1,2)$ 只有a=1

a,b对称，不妨$1\le a < b$

$a^2+b^2=k(ab+1)$, 且k不是平方数

$b^2-(ka)b+(a^2-k)=0$

即对于任意 解 $(a,b)$

$b_0+b=ka,b_0b=a^2-k\neq 0$ (因为k不是平方数)

---

$b > a,b_0b=a^2-k$ 所以$b_0 < a$

$b_0+b=ka$所以$b_0$是整数

$\frac{a^2+b_0^2}{b_0a+1} = k >0$,所以$b_0 > 0$

所以$(b_0,a)$ 是通过$(a,b)$得到的$a+b$指标更小的解

这样的结构无法无穷递降，所以不存在解

---

不过我拿到题目的感觉是，就是要证明大的值是不存在，因为如果真的存在还是平方数，那这个结论也太数论了

## 练习

$a,b \in \mathbb{Z}^+, ab|a^2+b^2+1$

证明 $3ab=a^2+b^2+1$

### 证明

$a^2+b^2+1=kab$

$a^2-(kb)a+(b^2+1)=0$

若 a=b, $2a^2+1=ka^2$ 即$1=(k-2)a^2$, 只有$k=3,a=1$

若$a \neq b$设$a>b$

$a_0a=b^2+1$所以$a_0 < b$ 且为正

$a_0+a=kb$ 所以$a_0$是整数

$(a,b) \to (b,a_0)$ 能构造出$a+b$更小的结果，无法无穷递降


## 类似思想 但不一定不存在 的结构性

勾股定理, project euler 笔记里有 多分支的构造
- pe223 224 https://yexiaorain.github.io/Blog/pe/223/

pell方程













