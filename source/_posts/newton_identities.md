---
title: 牛顿恒等式
date: 2024-10-21
categories:
  - 代数
tags:
  - 线性代数
  - newton_identities
---

# 问题

## 问题1

$x=1$

$x^2=?$

$x^m=?, m \ge 1, m \in \mathbb{Z}$

## 问题2

$x+y=1$

$x^2+y^2=2$

$x^3+y^3=?$

$x^m+y^m=?, m \ge 2, m \in \mathbb{Z}$

## 问题3

$x+y+z=1$

$x^2+y^2+z^2=2$

$x^3+y^3+z^3=3$

$x^4+y^4+z^4=?$

$x^m+y^m+z^m=?, m \ge 3, m \in \mathbb{Z}$

## 问题n

$\sum_{i=0}^n x_i=1$

$\sum_{i=0}^n x_i^2=2$

$\cdots$

$\sum_{i=0}^n x_i^n=n$

$\sum_{i=0}^n x_i^{n+1}=?$

$\sum_{i=0}^n x_i^{m}=?, m \ge n, m \in \mathbb{Z}$

---

TLDR

例如3阶 已知

$S_i=x^i+y^i+z^i$

$c_0=n$

$\displaystyle c_k=-\frac{\sum_{i=1}^k S_i c_{k-i}}{k}, k\le n$

例如 3阶 $X=[-\frac{c_1}{c_0},-\frac{c_2}{c_0},-\frac{c_3}{c_0};1,0,0;0,1,0]$

```
[V,D]=eig(X) % D是对角特征值矩阵，V是特征向量对应位置组成的矩阵
```

$x^k+y^k+z^k = S_k  = [1;0;0] * V * D^{k-3} * V^{-1} * [3;2;1]$

<!--more-->

## TLDR

https://baike.baidu.com/item/%E7%89%9B%E9%A1%BF%E6%81%92%E7%AD%89%E5%BC%8F/1285642

$F(x)=0$的$n$个根$x_1,\cdots,x_n$

$S_k=\sum_{i=1}^n x_i^k$

对于 $k > n$, $\sum_{i=0}^n C_iS_{k-n}=0$ 也就是 按照幂次逐步上升的系数 是常系数

对于 $k\in[1,n], (\sum_{i=0}^{k-1}C_iS_{k-i})+kC_k=0$ 表明和上面系数对应，且如果知道所有$C_{<i}$可以这样求得$C_i$

## 例子

以上面的问题为例, 我们可以求得 $x+y+z,xy+yz+zx,xyz$的值

也就意味着$0=(x-a)(x-b)(x-c)=x^3-(a+b+c)x^2+(ab+bc+ca)x-abc$ 这样对应到3次方程的3个根

不妨写作 $C_0x^3+C_1x^2+C_2x+C_3=0$

那么同时乘上$x^k$ 有 $C_0x^{3+k}+C_1x^{2+k}+C_2x^{1+k}+C_3x^k=0$

$S_k=x_0^k+x_1^k+x_2^k$ 是加和关系，所以 $S$也满足这个式子

---

$f(x)=\prod_{i}^n (x-a_i)=\sum_{i=0}^n c_ix^{n-i}$

$f'(x)=\sum_i^n \frac{f(x)}{x-a_i}$ 不展开求导

分解 $x^{k+1}f'(x)=(\sum_{i=0}^k s_ix^{k-i})f(x)+g(x)$ , 这里是按 多项式除法，左边是被除，`f(x)`是除，f左边是商(系数), g(x)是余数,所以g(x)的最高幂次小于n

$x^{k+1}f'(x)=x^{k+1}\sum_{i=0}^n \frac{f(x)}{x-a_i}$

$\displaystyle =\sum_{i=0}^n \frac{x^{k+1}f(x)}{x-a_i}$

$\displaystyle =\sum_{i=0}^n \frac{x^{k+1}-a_i^{k+1}+a_i^{k+1}}{x-a_i}f(x)$

$\displaystyle =\sum_{i=0}^n \frac{x^{k+1}-a_i^{k+1}}{x-a_i}f(x)+\sum_{i=0}^n \frac{a_i^{k+1}}{x-a_i}f(x)$  这里对应了上面的多项式除法表达式

对于商 $\displaystyle \sum_{i=0}^n \frac{x^{k+1}-a_i^{k+1}}{x-a_i} = \sum_{i=0}^n \sum_{j=0}^k a_i^jx^{k-j}$

 $\displaystyle = \sum_{j=0}^k \sum_{i=0}^n  a_i^jx^{k-j}$ 交换积分顺序
 
 $\displaystyle = \sum_{j=0}^k S_j x^{k-j}$ 

综上 $\displaystyle x^{k+1}f'(x) = (\sum_{j=0}^k S_j x^{k-j})f(x) + g(x)$ 

---

根据  $\displaystyle x^{k+1}f'(x) = (\sum_{j=0}^k S_j x^{k-j})f(x) + g(x)$ 

研究$x^n$的系数

对于 $k\le n-1$, 

左边 $x^{k+1}(c_{k}x^{n-k})' = (n-k)c_kx^{n}$

右侧 $\displaystyle = \sum_{i=0}^k S_i x^{k-i} c_{k-i}x^{n-(k-i)}$, $g(x)$中不含$x^n$的项

 $\displaystyle =\sum_{i=0}^k S_i c_{k-i}x^{n}$

 $\displaystyle (n-k)c_k=\sum_{i=0}^k S_i c_{k-i}$

注意到 $S_0=\sum x_i^0 = \sum 1=n$,所以右侧$\displaystyle = (\sum_{i=1}^k S_i c_{k-i}) + nc_k$

综上 $\displaystyle -kc_k=\sum_{i=1}^k S_i c_{k-i}$

综上 $\displaystyle c_k=-\frac{\sum_{i=1}^k S_i c_{k-i}}{k}, k\le n-1$

---

类似的$k\ge n$ 同样研究$x^n$的系数

左边=0

右侧 $\displaystyle = \sum_{i=k-n}^k S_i x^{k-i} c_{k-i}x^{n-(k-i)}$, $g(x)$中不含$x^n$的项

 $\displaystyle =\sum_{i=k-n}^k S_i c_{k-i}x^{n}$, 也就是上面的不变的结论

取$k=n$有

 $\displaystyle \sum_{i=0}^n S_i c_{n-i}=0$, 
 
注意到$S_0=n$,同样满足上面的公式，综上 $\displaystyle c_k=-\frac{\sum_{i=1}^k S_i c_{k-i}}{k}, k\le n$ 可以算出所有$c_{0\to n}$, (注$(c_{n-0}x^0)'=0$ 所以也很自然)

---

回到题目

$c_0=n=3$

$\displaystyle c_1=-\frac{\sum_{i=1}^1S_1c_{1-i}}{1}=-\frac{1*3}{1}=-3$

$\displaystyle c_2=-\frac{\sum_{i=1}^2S_1c_{2-i}}{2}=-\frac{1*(-3)+2*3}{2}=-\frac{3}{2}$

$\displaystyle c_3=-\frac{\sum_{i=1}^3S_1c_{3-i}}{3}=-\frac{1*(-3/2)+2*(-3)+3*3}{3}=-\frac{1}{2}$


$c_0S_k+c_1S_{k-1}+c_2S_{k-2}+c_3S_{k-3}=0$

$S_k=S_{k-1}+\frac{1}{2}S_{k-2}+\frac{1}{6}S_{k-3}$

$x^4+y^4+z^4=1 * 3+ \frac{1}{2} * 2 +\frac{1}{6} * 1 = \frac{25}{6}$

$x^5+y^5+z^5=1 * \frac{25}{6}+ \frac{1}{2} * 3 +\frac{1}{6} * 2 = 6$

$[S_k;S_{k-1};S_{k-2}] = [1,1/2,1/6;1,0,0;0,1,0] * [S_{k-1};S_{k-2};S_{k-3}]$


```
X=[1,1/2,1/6;1,0,0;0,1,0];
[V,D] = eig(X)


D =

   1.4308 + 0.0000i   0.0000 + 0.0000i   0.0000 + 0.0000i
   0.0000 + 0.0000i  -0.2154 + 0.2647i   0.0000 + 0.0000i
   0.0000 + 0.0000i   0.0000 + 0.0000i  -0.2154 - 0.2647i


V = 这里V不是正交矩阵，但是 是特征向量矩阵

   0.7609 + 0.0000i   0.0223 + 0.1073i   0.0223 - 0.1073i
   0.5318 + 0.0000i   0.2027 - 0.2490i   0.2027 + 0.2490i
   0.3717 + 0.0000i  -0.9407 + 0.0000i  -0.9407 + 0.0000i

[S_k;S_{k-1};S_{k-2}]  = V * D^{k-3} * V^{-1} * [3;2;1]
```


$x^k+y^k+z^k = S_k  = [1;0;0] * V * D^{k-3} * V^{-1} * [3;2;1]$
