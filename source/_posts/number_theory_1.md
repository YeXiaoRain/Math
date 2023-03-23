---
title: 数论基础 一 整数的可除性
date: 2023-03-15
categories: [数论,数论基础]
tags: [数论基础,辗转相除,gcd,lcm,归纳法,exgcd,Beatty’s theorem,Legendre’s formula]
description: 1. 整除，带余数除法 2. 最大公约数,最小公倍数 3. 辗转相除法 4.一次不定方程 5. 函数[x], {x}
---

ISBN 9787040364729

<!--more-->

# 整除，带余数除法 

{% note no-icon success %}
定义1: $a,b$是整数,$b\ne 0$, 若存在整数$c$使得$a=bc$,则$b|a$,否则$b \nmid a$
{% endnote %}

性质:

- $b\ne 0$,$c$唯一
- $b|a,a|e \Rightarrow b|e$
- $b\ne 0$,所有的倍数为$0,\pm b,\pm 2b,\pm 3b,\cdots$
- $a\ne 0,b|a \Rightarrow |b| \le |a|$
- $b|a_1,b|a_2 \Rightarrow b|m_1a_1+m_2a_2, (\forall m_1,m_2)$

{% note no-icon success %}
定义2: $p > 1$且仅有$1|p,p|p$,则$p$为素数，自然数分为$1$,素数,合数
{% endnote %}

定理1: $p | d \Rightarrow p\le \sqrt{|d|}$

定理2: 素数无穷多个(反正法假设有最大,构造$\prod p_i +1$)

定理3: $a>1$则$a$可以被表示成多个素数之积 每次最小因子必定素数，递降法

定理4(带余数除法): $a,b >0$存在唯一一对$(q,r),r\in[0,b)$使得$a=qb+r$, 通过对数轴$[kb,(k+1)b)$的切割

定理5(算术基本定理): $p|ab,p \nmid a \Rightarrow p | b$,其中$p$是质数

定理5.1(算术基本定理): $p|a_1a_2\cdots$其中$p$是质数,则存在某个$i$让$p | a_i$

定理6(算术基本定理): $n>1$ $n$有素数的唯一分解(同定理3), 推论$n$的因子的对应质数的幂次不大于$n$中对应质数的幂次

# 最大公约数,最小公倍数 

{% note no-icon success %}
定义3: 对于$a_1,a_2,\cdots a_k$最大的$d$,满足$\forall i, d|a_i$, $d$称作为最大公约数,记作$\gcd(a_1,a_2,\cdots,a_k) = d$,当$d=1$时称作互素
{% endnote %}

{% note no-icon success %}
定义4: 对于$a_1,a_2,\cdots a_k$最小的$l$,满足$\forall i, a_i|l$, $l$称作为最小公倍数,记作$\mathrm{lcm}(a_1,a_2,\cdots,a_k) = l$
{% endnote %}

定理7: $b_1,\cdots,b_k$的任意公倍数,都是最小公倍数的倍数,(反证法 $l'=kl+r,r\in[1,l)$ 则$r$小于$l$也是公倍数 矛盾)

推论3: $\mathrm{lcm}(a_1,\cdots,a_n,b_1,\cdots,b_m) = \mathrm{lcm}(\mathrm{lcm}(a_1,\cdots,a_n),\mathrm{lcm}(b_1,\cdots,b_m))$, (通过左右互为倍数证明)

定理8: $a_1,\cdots,a_k$的任意公共因数一定是它们最大公因数的因数,(反证$d < \mathrm{lcm}(d_1,d) | a_i$)

推论4: $\mathrm{gcd}(a_1,\cdots,a_n,b_1,\cdots,b_m) = \mathrm{gcd}(\mathrm{gcd}(a_1,\cdots,a_n),\mathrm{gcd}(b_1,\cdots,b_m))$, (通过左右互为倍数证明)

定理9: $m > 0, \mathrm{lcm}(mb_1,mb_2)= m \cdot \mathrm{lcm}(b_1,b_2)$, 同样是左右互为倍数来证明

推论5: $d|b_1,d|b_2,\mathrm{lcm}(\frac{b_1}{d},\frac{b_2}{d})=\frac{1}{d}\mathrm{lcm}(b_1,b_2)$

定理10: $m>0,\mathrm{gcd}(mb_1,mb_2)= m \cdot \mathrm{gcd}(b_1,b_2)$

推论6: $d|b_1,d|b_2,\mathrm{gcd}(\frac{b_1}{d},\frac{b_2}{d})=\frac{1}{d}\mathrm{gcd}(b_1,b_2)$

定理11: $\mathrm{gcd}(a,b)\mathrm{lcm}(a,b)=ab$, 直接拆成质数表示最好证明

定理12(辗转相除法的基础): $a,b,r$不全为$0$,则$a=qb+r,r\in[0,b)$则$\mathrm{gcd}(a,b)=\mathrm{gcd}(b,r)$, (通过任取因数左右互推证明), 推论$\mathrm{gcd}(a,b) | (ax+by)$

定理13: $a,b$不全为$0$, $(x_0,y_0)$让$ax+by$取到最小正整数, 则$\mathrm{gcd}(a,b) = ax_0+by_0$, 又是两侧互为倍数的证明, 

推论7: 上面证明了总存在$x_0,y_0$让$ax+by$取到$\mathrm{gcd}(a,b)$

定理14: $\mathrm{gcd}(a,c)=1$则$\mathrm{gcd}(ab,c)=\mathrm{gcd}(b,c)$ 把右侧最大公约数拆出来证明

推论8: $\mathrm{gcd}(a,b)=1 \Rightarrow \mathrm{gcd}(ab,d)=\mathrm{gcd}(a,d)\mathrm{gcd}(b,d)$，把右侧最大公约数拆出来证明

定理15: $\mathrm{gcd}(a,c)=1,c|ab \Rightarrow c|b$, 用定理14

# 辗转相除法, Euclid 算法

就是基于定理12不断下降

$(P_1,Q_1)=(1,q_1), P_1a-Q_1b=(-1)^{1-1}r_1$, 已知$r_i = q_{i+2}r_{i+1}+r_{i+2}$

希望有 $P_ia-Q_ib=(-1)^{i-1}r_i$

直接展开

$P_ia-Q_ib=(-1)^{i-1}r_i = (-1)^{i-1} (q_{i+2}r_{i+1}+r_{i+2})$

$= (-1)^{i-1} (q_{i+2}(P_{i+1}a-Q_{i+1}b)(-1)^i+(P_{i+2}a-Q_{i+2}b)(-1)^{i+1})$

$= (P_{i+2}-q_{i+2}P_{i+1})a-(Q_{i+2}-q_{i+1}Q_{i+1})b$

所以对应相等

$P_i = q_iP_{i-1}+P_{i-2}$

$Q_i = q_iQ_{i-1}+Q_{i-2}$

```cpp
#include <bits/stdc++.h>
using namespace std;

// 返回的 [x,y,z] 满足 a*x+b*y=z=gcd(a,b)
template<class T>
array<T,3> exgcd(T a,T b){
  if(b==0) return {1,0,a};
  auto [x,y,z] = exgcd(b,a%b);
  return {y,x-(a/b)*y,z};
}

int main(){
  int a=31,b=7;
  auto [x,y,z] = exgcd(a,b);
  printf("%d*%d+%d*%d=%d\n",a,x,b,y,z);
  return 0;
}
```

注: 这里的$(x,y)$不是唯一的,因为每当$x$增加$\frac{b}{\mathrm{gcd}(a,b)}$,对应$y$同时减少$\frac{a}{\mathrm{gcd}(a,b)}$即可,等式依然成立

# 一次不定方程 $ax+by=c$

定理17 $\gcd(a,b) = c$则有解,$(x_0,y_0)$是一组解则$(x_0+\frac{b}{\mathrm{gcd}(a,b)}t,y_0-\frac{a}{\mathrm{gcd}(a,b)}t)$是所有解

推论9: 和$\frac{a}{\mathrm{gcd}(a,b)}x+\frac{b}{\mathrm{gcd}(a,b)}y=\frac{c}{\mathrm{gcd}(a,b)}$ 同解

# 函数`[x]`,`{x}`

设$x$为任意实数, $[x] \le x$表示不超过$x$的最大整数,$\lbrace x\rbrace = x-[x]$

性质

 - $x\ge y \Rightarrow [x]\ge [y]$
 - $x-1<[x]\le x, 0\le \lbrace x \rbrace < 1$
 - $n$为整数,$[n+x]=n+[x],\lbrace n+x \rbrace = \lbrace x \rbrace$

引理1: 实数$x > 0$,$a$正整数,$[\frac{x}{a}]$个不超过$x$且是$a$的倍数的整数, (找a的最大整数倍)

定理18: 在$n!$的标准分解式中,素数$p\le n$的指数$\displaystyle  = [\frac{n}{p}]+[\frac{n}{p^2}]+\cdots=\sum_{r=1}^{\infty} [\frac{n}{p^r}]$

推论10(Legendre’s formula): $\displaystyle n!=\prod_{p\le n} p^{\sum_{r=1}^{\infty} [\frac{n}{p^r}]}$

定理19: $\prod_{i=1}^{k} \frac{a+i}{i}$ 必定是整数, (一个是这就是$\binom{a+k}{k}$,用上面相关的就是直接讨论$\le k$质因子的幂次,$[\frac{a+k}{p^r}]\ge [\frac{a}{p^r}]+[\frac{k}{p^r}]$)

推论11: $n=s_1+s_2+\cdots+s_k, \frac{n!}{s_1!s_2!\cdots s_k!}$是整数, (一样)

定理20: $p$为素数,则任意$x$有$p|x^p-x$, (归纳$x$,$x=0$时成立,$(x+1)^p-(x+1) = x^p-x + \binom{p}{\cdots}(\cdots)$

# 习题

## 8. 有无穷多形如4m+3的素数，有无穷多形如6m+5的素数

{% note info no-icon Proof %}

和证明素数无限多一样的想法，如果有限个则全部乘起来，

4m+3,讨论末尾是+3还是+1,如果是+3,则再+4,如果是+1,则再+2, 注意到得到的数是4k+3形式的,又和已知的都互质，但是如果分解不可能全分解成4k+1的，因子它会分解出一个4k+3形式的质数

6m+5,讨论末尾是+5还是+1,如果是+5,则再+6,如果是+1,则再+4, 一样的(6m+1)形式的乘积也得不到6m+5,

{% endnote %}

## 19. $2 \nmid m \Rightarrow \gcd(2^m-1,2^n+1)=1$

{% note info no-icon Proof %}

令$d = gcd(2^m-1,2^n+1)$, 若$d \ne 1$,则$d = 2k+1$

$2^m\equiv 1 \pmod d$

$2^n \equiv -1 \pmod d$

$2^{\mathrm{gcd}(m,n)} = 2^{\mathrm{gcd}(m,2n)} = 2^{xm+2ny} = (2^{m})^{x}(2^{2n})^y \equiv 1^x1^y \equiv 1 \pmod d$

$2^n = (2^{\mathrm{gcd}(m,n)})^{\frac{n}{\mathrm{gcd}(m,n)}} \equiv 1^{\frac{n}{\mathrm{gcd}(m,n)}}\equiv 1 \pmod d$

对于$d=2k+1$矛盾

{% endnote %}

## 27. 证明$\frac{(2m)!(2n)!}{m!n!(m+n)!}$是整数

{% note info no-icon Proof %}

还是要用到Legendre’s formula, 也就是要证明$v_p((2m)!(2n)!)-v_p(m!n!(m+n)!)\ge 0$ for any prime $p$, 

也就是要证明 $[2x]+[2y] \ge [x]+[y]+[x+y]$

$[2([x]+\lbrace x\rbrace)]+[2([y]+\lbrace y\rbrace)] \ge [[x]+\lbrace x\rbrace]+[[y]+\lbrace y\rbrace]+[[x]+\lbrace x\rbrace+[y]+\lbrace y\rbrace]$

$[2\lbrace x\rbrace]+[2\lbrace y\rbrace] \ge [\lbrace x\rbrace]+[\lbrace y\rbrace]+[\lbrace x\rbrace+\lbrace y\rbrace]$

$[2\lbrace x\rbrace]+[2\lbrace y\rbrace] \ge [\lbrace x\rbrace+\lbrace y\rbrace]$, 右侧取$0$则左侧始终成立,右侧取$1$,至少一个$\ge \frac{1}{2}$, 同样成立

{% endnote %}

## 28. $k$为正整数,$n$可以唯一表示成$n=lm^k$,其中$l$没有任何$k$次方因子

$p$的幂次$w$唯一表示 $w = qk+r$

28.2 实数$A > 0$则$\displaystyle \sum_{1\le z \le A}' [ \sqrt[k]{\frac{A}{z}}] = [A]$, 其中$\sum'$表示无$k$次方因子的$z$求和

{% note info no-icon Proof %}

首先$A=zm^k$ 才会让左侧内部 $\displaystyle \sqrt[k]{\frac{A}{z}}$为正整数, 因此$\displaystyle [\sqrt[k]{\frac{A}{z}}]=[\sqrt[k]{\frac{[A]}{z}}]$ (A与它的整部之间不会有其它的值让整个为正整数, 或者说对于给定$k$, 它的整部不变时对应的A的区间的端点都是整数,且除了最初的$z$,后续的都是)

$A=0$时显然, 所以只需要证明对于 任意正整数$A$, 有$\displaystyle \sum_{1\le z \le A}' [ \sqrt[k]{\frac{A}{z}}] = A$

对$A$进行归纳,

当$A = 1$时, 左侧$=1=$右侧, 成立

若$A+1$ 的质数最高幂次 $< k$, 对于$z \le A$时有$\displaystyle [\sqrt[k]{\frac{A}{z}}]=[\sqrt[k]{\frac{A+1}{z}}]$, (和上面把有理数变整数一样的原理)

$\displaystyle A+1 = \sum_{1\le z \le A}' [ \sqrt[k]{\frac{A}{z}}] + [ \sqrt[k]{\frac{A+1}{A+1}}] = \sum_{1\le z \le A}' [ \sqrt[k]{\frac{A+1}{z}}] + [ \sqrt[k]{\frac{A+1}{A+1}}] = \sum_{1\le z \le A+1}' [ \sqrt[k]{\frac{A+1}{z}}]$

若$A+1$ 的质数最高幂次 $\ge k$, 则$A+1 = z_0m^k$(唯一表示),且$z_0 < A$

对于$z_0$有 $\displaystyle [\sqrt[k]{\frac{A}{z_0}}]+1=[\sqrt[k]{\frac{A+1}{z_0}}]$
对于其它$z \ne z_0, z \le A$,有 $\displaystyle [\sqrt[k]{\frac{A}{z_0}}]=[\sqrt[k]{\frac{A+1}{z_0}}]$

$\displaystyle A+1 = \sum_{1\le z \le A, z\ne z_0}' [ \sqrt[k]{\frac{A}{z}}] + [ \sqrt[k]{\frac{A}{z_0}}]+1 = \sum_{1\le z \le A, z\ne z_0}' [ \sqrt[k]{\frac{A+1}{z}}] + [ \sqrt[k]{\frac{A+1}{z_0}}] = \sum_{1\le z \le A+1}' [ \sqrt[k]{\frac{A+1}{z}}]$

{% endnote %}

## 30(Beatty定理，1926). $\alpha,\beta > 0$ 数列$[\alpha x],[\alpha y]$ 没有公共正整数 且组成全体自然数的充要条件$\alpha,\beta$无理数且$\frac{1}{\alpha}+\frac{1}{\beta}=1$

{% note info no-icon Proof %}

https://proofwiki.org/wiki/Beatty%27s_Theorem

$\Leftarrow :$

反正法: 若存在$k=[\alpha x]=[\beta y]$

即$k < \alpha x < k+1,k < \beta y < k+1$

$k=\frac{k}{\alpha} + \frac{k}{\beta} < x+y < \frac{k+1}{\alpha} + \frac{k+1}{\beta} = k+1$

矛盾.

若有$k$同时无法被表示, 找$[\alpha (x-1)] < k < [\alpha x]$

即 $\alpha x > k+1,\alpha (x-1) < k$

$\alpha (x-1) < k < \alpha x-1$

同理 $\beta (y-1) < k h< \beta y-1$

$x+y-2=x-1+y-1 < k < x-\frac{1}{\alpha} + y-\frac{1}{\beta} = x+y-1$

矛盾.

证必

$\Rightarrow :$

设$\alpha < \frac{p}{q}$则,$[\alpha] < [2\alpha] < \cdots < [q\alpha] < p$ 因为要两两不等所以$[1,p-1]$ 中至少(小于关系并没有描绘精确程度)出现$q$个

所以$[1,p-1]$中至多有$p-1-q$个在是$[\beta y]$中,$(p-q)\beta$ 一定在$[1,p-1]$外

那么$(p-q)\beta \ge [(p-q)\beta] \ge p$ 即$\beta \ge \frac{p}{p-q}$

那么极限保号$\displaystyle \beta \ge \lim_{\frac{p}{q}\to \alpha} \frac{p}{p-q}=\lim_{\frac{p}{q}\to \alpha} \frac{\frac{p}{q}}{\frac{p}{q}-1} = \frac{\alpha}{\alpha-1}$
从另一侧$\alpha > \frac{p}{q}$, 极限也会得到$\beta \le \frac{\alpha}{\alpha-1}$, 于是有$\frac{1}{\alpha}+\frac{1}{\beta}=1$

证无理数: $[q\frac{p}{q}]=p=[(p-q)\frac{p}{p-q}]$

{% endnote %}