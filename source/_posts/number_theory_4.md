---
title: 数论基础 四 同余
date: 2023-03-23
categories: [数论,数论基础]
tags: [数论基础,欧拉定理,费马小定理]
description: 1.概念及基本性质, 2.剩余类及剩余系 3. 同余方程的一般概念，一次同余方程 4. 孙子定理 5. 多项式的恒等同余 6. 模p的高次同余方程
---

ISBN 9787040364729

<!--more-->

# 1.概念及基本性质

定义1: 正整数$m$称为模,$a,b$为任意两个整数, 若它们被$m$除后所得余数相同,则称作同余,记作$a\equiv b\pmod m$,否则$a\not \equiv b\pmod p$

定理1: 上式等价于$m|(a-b)$, 根据第一章除法性质唯一余数

基本性质:

- $a\equiv a\pmod m$
- $a\equiv b\pmod m \Leftrightarrow b\equiv a\pmod m$
- $a\equiv b\pmod m,b\equiv c\pmod m\Rightarrow a\equiv c\pmod m$
- $a_i\equiv b_i\pmod m \Rightarrow \sum {a_i}\equiv \sum b_i\pmod m$
- $a_i\equiv b_i\pmod m \Rightarrow \prod {a_i}\equiv \prod b_i\pmod m$
- $ab\equiv bd\pmod m,c\equiv d\pmod m,\gcd(c,m)=1 \Rightarrow a\equiv b\pmod m$

定理2: $A_{\alpha_1,\alpha_2,\cdots,\alpha_k}\equiv B_{\alpha_1,\alpha_2,\cdots,\alpha_k}\pmod m,x_i\equiv y_i\pmod m\Rightarrow \sum A_{\alpha_1,\alpha_2,\cdots,\alpha_k}\prod x_i^{\alpha_i}\equiv B_{\alpha_1,\alpha_2,\cdots,\alpha_k}\prod y_i^{\alpha_i}\pmod m$
例1: $K$为正整数, 试着求为9的整除判别法

$K=\sum_{i\in[0,l]}10^i a_i,10^i\equiv 1 \pmod 9$

由定理2: $K = \sum_{i\in [0,l]}a_i\pmod 9$

定理3: $K\ne 0$, $a\equiv b\pmod m \Leftrightarrow aK\equiv bK \pmod {Km}$

定理4: 社$aC\equiv bC \pmod m, d=\gcd(m,C)$则 $a\equiv b \pmod{\frac{m}{d}}$ 

$m|C(a-b) \Rightarrow \frac{m}{d} | \frac{C}{d}(a-b) \Rightarrow \frac{m}{d}|(a-b)$

定理5: $d\ne 0, d|m , a\equiv b\pmod m \Rightarrow a\equiv b \pmod d$

定理6: $a\equiv b\pmod {m_1},a\equiv b\pmod {m_2} \Leftrightarrow a\equiv b \pmod{\mathrm{lcm}(m_1,m_2)}$

定理7: $a\equiv b\pmod m \Rightarrow \gcd(a,m)=\gcd(b,m)$

# 2.剩余类及剩余系

定义2: 对$m$同余的整数的集合 剩余类（同余类）,（如果和$m$互素,则互素剩余类）, 可以分成$m$个剩余类

定义3: 每个剩余类中任取一个数,组成的叫做模$m$的完全剩余系, (在每个和$m$互素的剩余类中任取一个,叫做简化(互素)剩余系)

$0,1,\cdots,m-1$称作模$m$的最小非负完全剩余系

把大于$\frac{m}{2}$的变成负的，则称作模$m$的绝对最小完全系

素数的常用简化系$1,2,\cdots,p-1$

定理8: $m$个整数组成模$m$的一个完全系的充要条件是这$m$个数两两对模$m$不同余

定理9: $\phi(m)$个整数组成模$m$的一个简化系的充要条件是,这些数与$m$互素,且它们对模$m$两两不同余

定理10: $m$自然数,$K,l$为任意整数,$\gcd(K,m)=1$,则当$x$通过$m$的完全系时,$Kx+l$也通过$m$的完全系, (通过$x$不同余得到$Kx+l$不同余可证明

定理11: $m$为自然数,$K,l$为任意整数,$\gcd(K,m)=1$,则当$x$通过$m$的简化系时,$Kx+lm$也通过$m$的简化系,(同样，多证明一个和$m$的$\gcd$即可)

定理12: $m_1,m_2$为自然数$(m_1,m_2)=1$,当$x,y$分别通过模$m_1,m_2$的完全(简化)系时,$m_2x+m_1y$通过模$m=m_1m_2$的完全(简化)系

定理13(Euler): 设$m > 1,\gcd(a,m)=1$则$a^{\phi(m)}\equiv 1\pmod m$

证明:

$x_1,x_2,\cdots,x_{\phi(m)}$为一个简化系, 

$ax_1,ax_2,\cdots,ax_{\phi(m)}$为一个简化系, 定理11

$\prod x_i\equiv \prod ax_i \pmod m$

$\prod x_i\equiv a^{\phi(m)}\prod x_i \pmod m$

$1 \equiv a^{\phi(m)} \pmod m$

定理14(Fermat): 若$m=p$为素数,则$a^{p-1}\equiv 1 \pmod p$

重要应用, $f(n)$为模$m$为周期的数论函数

$\displaystyle F(m)=\sum_{x\pmod m} f(x)$ 表示对模$m$的一个完全系求和

$\displaystyle G(m)=\sum_{x\pmod m}' f(x)$ 表示对模$m$的一个简化系求和

定理15: $\displaystyle \sum_{x\pmod m} f(x)=\sum_{x\pmod m} f(Kx+l),\gcd(K,m)=1$,$\displaystyle \sum_{x\pmod m}' f(x)=\sum_{x\pmod m}' f(Kx+l),\gcd(K,m)=1$

定理16: 设$f(n)=e^{2\pi i\frac{n}{m}}$,则$F(m),G(m)$均为可乘函数



# 3. 同余方程的一般概念，一次同余方程 

# 4. 孙子定理

# 5. 多项式的恒等同余

# 6. 模p的高次同余方程

# 习题

## 2. xxxx




