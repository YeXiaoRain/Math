---
title: 数论基础 三 素数分布的一些初等结果
date: 2023-03-17
categories: [数论,数论基础]
tags: [数论基础,$\pi(x)$,Chebyshev定理,$\Omega(n)$,$\omega(n)$,Bertrand 假设,M(x),L(x)]
description: 1.函数$\pi(x)$ 2.Chebyshev定理 3.函数$\omega(n)$与$\Omega(n)$ 4.Bertrand 假设 5.函数M(x) 6.函数L(x)
---

ISBN 9787040364729

<!--more-->

# 函数$\pi(x)$ 

$\pi(x) =$ 不超过$x$的素数的个数

引理1: $x > 0$,$p_1,p_2,\cdots,p_s$为前$s$个素数,$\phi(x,s)$表示不超过$x$,且不被$p_i(i\in[1,s])$整除的自然数个数,则$\displaystyle \phi(x,s)=\sum_{d|\prod_{i=1}^s p_i} \mu(d)[\frac{x}{d}]$, 其实就是容斥原理,可以拆$I(\gcd)$来做

引理2: $x > s$则$\displaystyle \pi(x) < x\prod_{i=1}^s(1-\frac{1}{p_i})+2^{s+1}$

显然$\pi(x) \le s+\phi(x,s)$

所以$\displaystyle \pi(x) \le s+\sum_{d|\prod_{i=1}^s p_i} \mu(d)[\frac{x}{d}]$

$\displaystyle = s+\sum_{d|\prod_{i=1}^s p_i} \mu(d)\frac{x}{d}+\sum_{d|\prod_{i=1}^s p_i} \mu(d)\lbrace\frac{x}{d}\rbrace$

$\displaystyle < s+\sum_{d|\prod_{i=1}^s p_i} \mu(d)\frac{x}{d}+\sum_{d|\prod_{i=1}^s p_i} 1$

$\displaystyle = s+x\prod_{i=1}^{s} (1-\frac{1}{p_i}) + (1+1)^s$

$\displaystyle \le x\prod_{i=1}^{s} (1-\frac{1}{p_i}) + 2^{s+1}$

引理3: $\prod_{p} (1-\frac{1}{p})=0$, 正如第二章里的证明一样，拆成等比数列和的形式再展开乘法，就显然了

定理1: $\lim_{x\to \infty} \frac{\pi(x)}{x}=0$

取$s+1=[\frac{\log_2 x}{2}]$

$\displaystyle 0 < \lim_{x\to \infty} \frac{\pi(x)}{x} < \lim_{x\to \infty} \prod_{i=1}^{[\frac{\log_2 x}{2}]-1} (1-\frac{1}{p_i}) + \frac{2^{[\frac{\log_2 x}{2}]}}{x}$

得证， 即$\pi(x) = o(x), x\to \infty$

# Chebyshev定理 

大量的尝试,Legendre和Gauss都猜测(素数定理)$\pi(x)\sim \frac{x}{\log x}$ (第三章没有证明到系数在极限下是1，只证明了下面这个更弱的形式)

> 1896年，[阿达马](https://baike.baidu.com/item/%E9%98%BF%E8%BE%BE%E9%A9%AC/400373?fromModule=lemma_inlink)（即雅克·所罗门·阿达马，Jacques Solomon Hadamard，1865年－1963年）和德·拉·瓦莱布桑（Charles-Jean de la Vallée Poussin）按照[波恩哈德·黎曼](https://baike.baidu.com/item/%E6%B3%A2%E6%81%A9%E5%93%88%E5%BE%B7%C2%B7%E9%BB%8E%E6%9B%BC/1693983?fromModule=lemma_inlink)（B. Riemann）的思路，各自独立地利用高深的整函数理论证明了素数定理。

> 1949年，塞尔伯格（即[阿特勒·塞尔伯格](https://baike.baidu.com/item/%E9%98%BF%E7%89%B9%E5%8B%92%C2%B7%E5%A1%9E%E5%B0%94%E4%BC%AF%E6%A0%BC/9243382?fromModule=lemma_inlink)，Atle Selberg）和埃尔德什（即[保罗·埃尔德什](https://baike.baidu.com/item/%E4%BF%9D%E7%BD%97%C2%B7%E5%9F%83%E5%B0%94%E5%BE%B7%E4%BB%80/6265074?fromModule=lemma_inlink)，Paul Erdős）分别独立地证明了素数定理。塞尔伯格由于这项成就及其他工作而获得了[菲尔兹奖](https://baike.baidu.com/item/%E8%8F%B2%E5%B0%94%E5%85%B9%E5%A5%96/186887?fromModule=lemma_inlink)，埃尔德什则与陈省身一起获得了[沃尔夫数学奖](https://baike.baidu.com/item/%E6%B2%83%E5%B0%94%E5%A4%AB%E6%95%B0%E5%AD%A6%E5%A5%96?fromModule=lemma_inlink)。

Chebyshev 1850证明了存在两个正常数使得$C_1\frac{x}{\log x}< \pi(x) < C_2\frac{x}{\log x}$ 

引理4(重要,这个公式用于$C_n$去转换做阶的估计很有用): 设$x > 1$,$f(t)\in C'[1,x],S(x)=\sum_{n\le x}C_n$ 则

$\sum_{n\le x}C_nf(n)=S(x)f(x)-\int_1^xS(t)f'(t)dt$

> 这里是$f$在$[1,x]$的积分连续

证明: $S(x)f(x)-\sum_{n\le x}C_nf(n)=\sum_{n\le x}C_n(f(x)-f(n))$

$=\sum_{n\le x}C_n \int_{n}^x f'(t) dt$

$=\sum_{n\le x}C_n \int_{1}^x [t\ge n]f'(t) dt$

$=\int_{1}^x \sum_{n\le x}C_n [t\ge n]f'(t) dt$

$=\int_{1}^x (\sum_{n\le x}C_n [t\ge n])f'(t) dt$

$=\int_{1}^x (\sum_{n\le t}C_n)f'(t) dt$

$=\int_{1}^x S(t)f'(t) dt$

定理2(欧拉求和公式): $a>0,f(x)\in C'[a,b]$则

$\sum_{a<n\le b}f(n)=\int_{a}^b f(t)dt+\int_{a}^b \psi_1(t)f'(t)dt+\psi_1(a)f(a)-\psi_1(b)f(b)$ 其中$\psi_1(x)=x-[x]-\frac{1}{2}, |\psi_1(x)|\le \frac{1}{2}$($\frac{1}{2}$到小数部分的有向距离)

证明: 由引理4,取$C_n=1$,则

$\sum_{n\le a}f(n)=[a]f(a)-\int_{1}^a [t]f'(t)dt$

$\sum_{n\le b}f(n)=[b]f(b)-\int_{1}^b [t]f'(t)dt$

相减

$\sum_{a < n\le b}f(n)=[b]f(b)-[a]f(a)-\int_{a}^b [t]f'(t)dt$

$=[b]f(b)-[a]f(a)-\int_{a}^b [t]f'(t)dt-(\int_a^b(t-\frac{1}{2})f'(t)dt-(b-\frac{1}{2})f(b)+(a-\frac{1}{2})f(a)+\int_a^bf(t)dt)$

得证

引理5: $x>1$则$\sum_{n\le x}\log n=x \log x - x + O(\log x)$

证明: $\sum_{n\le x} \log n=\int_{1}^x \log t dt+\int_{1}^x \psi_1(t)\frac{1}{t} dt -\psi_1(x)\log x \le (x\log x - x)+\frac{1}{2}O(\log x)+\frac{1}{2}O(\log x)$

---

Chebyshev在研究素数定理时,引入了两个新函数

first Chebyshev function $\theta(x)=\sum_{p\le x} \log p\le x\log x$

second Chebyshev function $\displaystyle \psi(x) = \Lambda \circ U=\sum_{n\le x} \Lambda (n)$, (单调递增)

$=\sum_{m=1}^{\infty} \sum_{p,{p^m}\le x} \Lambda(p^m)$

$=\sum_{m\le \log_2 x}\sum_{p\le x^{\frac{1}{m}}}\log p$

$=\sum_{m\le \log_2 x}\theta(x^{\frac{1}{m}})$

$=\theta(x)+\sum_{m\in[2,\log_2 x]}\theta(x^{\frac{1}{m}})$

$=\theta(x) +O(x^{\frac{1}{2}}\log^2 x)$

定理3: 几个式子等价

$\pi(x) \sim \frac{x}{\log x} ,x \to \infty$

$\psi(x) \sim x,x \to \infty$

$\theta(x) \sim x,x \to \infty$

根据上面的结果,只需要证明 第1和第3个式子等价(即相互可以推，但是具体等不等还不知道)

在引理4中,取 $C_n=\left\lbrace\begin{array}{lc}1,& n \text{ is prime}\\\\ 0,& \text{others} \end{array}\right.$,$f(n)=\log n$

则$\pi(x)=\sum_{n\le x} C_n$,$\theta(x)=\sum_{n\le x} C_n\log n$

即$\theta(n)=\pi(x)0\log x-\int_{1}^x\frac{\pi(t)}{t}dt$

因为$\frac{\pi(t)}{t}=o(1),t\ge \sqrt{x}$

$\theta(n)=\pi(x)\log x-\int_{1}^{\sqrt{x}}\frac{\pi(t)}{t}dt-\int_{\sqrt{x}}^x\frac{\pi(t)}{t}dt$

$\theta(n)=\pi(x)\log x+O(\sqrt{x})+o(x-\sqrt{x})$

$\theta(n)=\pi(x)\log x+o(x)$

$\frac{\theta(n)}{x}=\frac{\pi(x)}{\frac{x}{\log x}}+o(1)$

等价性证明了

定理4: $x > 1$则有$\sum_{n\le x}\psi(\frac{x}{n}) = \sum_{n\le x}\Lambda(n)[\frac{x}{n}]=x\log x-x+O(\log x)$

证: 由于$\log n =\sum_{d|n} \Lambda(d)$

所以$\sum_{n\le x}\log n = (\Lambda * u)\circ U = \Lambda \circ ( u\circ U)= \sum_{n\le x}\Lambda(n)[\frac{x}{n}] = u\circ (\Lambda \circ U) = \sum_{n\le x}\psi(\frac{x}{n})$ 由 引理5 得证

---

$x \log 2+O(\log x)$

$=\sum_{n\le x}\log n - 2\sum_{n\le \frac{x}{2}}\log n$,引理5

$=\sum_{n\le x}\psi(\frac{x}{n}) - 2\sum_{n\le \frac{x}{2}} \psi(\frac{x}{2n})$,定理4

$=\sum_{n\le x}(-1)^{n-1}\psi(\frac{x}{n}) < \psi(x)$, 这里用到了$\psi$单调递增

即存在$A_1 x < \psi(x)$

引理6: $x\ge 1$,则有 $|\sum_{n\le x}\frac{\mu(n)}{n}|\le 1$

证明: 因为(第二章例7) $1=\sum_{n\le x}\mu(n)[\frac{x}{n}]=\sum_{n\le x}\mu(n)\frac{x}{n}-\sum_{n\le x}\mu(n)\lbrace\frac{x}{n}\rbrace$

$|\sum_{n\le x}\frac{\mu(n)}{n}|=\frac{1}{x}|1+\lbrace x\rbrace+\sum_{2\le n\le x}\mu(n)\lbrace\frac{x}{n}\rbrace| \le \frac{1}{x}(1+\lbrace x\rbrace+([x]-1)) = 1$

引理7: $x>1$则 $\sum_{n\le x}\frac{\mu(n)}{n}\log \frac{x}{n}=O(1)$

证明: $\sum_{k\le \frac{x}{n}}\frac{1}{k}=\log \frac{x}{n}+\gamma+O(\frac{n}{x})$

$\sum_{n\le x}\frac{\mu(n)}{n}\log \frac{x}{n}=\sum_{n\le x}\frac{\mu(n)}{n}(\sum_{k\le \frac{x}{n}}\frac{1}{k}-\gamma+O(\frac{n}{x}))$

$=\sum_{n\le x}\frac{\mu(n)}{n} \sum_{k\le \frac{x}{n}}\frac{1}{k} - \gamma \sum_{n\le x}\frac{\mu(n)}{n}+ O(\frac{1}{x})\sum_{n\le x}\mu(n)$

$=\sum_{d\le x}\frac{1}{d} \sum_{n|d} \mu(n) + O(1)+O(1)$, 通过令$d=kn$

$=\sum_{d\le x}\frac{1}{d} I(d) + O(1)=1+O(1)=O(1)$

---

$\displaystyle \Lambda(n)=\sum_{d|n}\mu(d)\log \frac{n}{d}$

$\displaystyle \psi(x)=\Lambda\circ U=(\mu * \log)\circ U=\mu \circ (\log \circ U)=\sum_{n\le x}\mu(n)\sum_{m\le \frac{x}{n}}\log m=\sum_{n\le [x]-1}\mu(n)\sum_{m\le \frac{x}{n}}\log m$

$\displaystyle=\sum_{n\le [x]-1}\mu(n)(\frac{x}{n}\log \frac{x}{n}-\frac{x}{n}+O(\log \frac{x}{n}))$,根据引理4

$\displaystyle=x\sum_{n\le [x]-1}\frac{\mu(n)}{n}\log \frac{x}{n}-x\sum_{n\le [x]-1}\frac{\mu(n)}{n}+\sum_{n\le [x]-1}\mu(n)O(\log \frac{x}{n})$
$=xO(1)+xO(1)+O(\sum_{n\le x}\log \frac{x}{n}) = O(x)$

即存在$A_2 x > \psi(x)$

定理5(Chebyshev定理):  根据定理3和 $A_1x < \psi(x) < A_2x$最初的猜想$C_1\frac{x}{\log x}< \pi(x) < C_2\frac{x}{\log x}$得证

> 教材的顺序并不是“正常的研究顺序”，正常的研究顺序这些之间也应该是由表达式知道需要再去求那些引理的估计，引理先行在这里不少是有点先知的感觉

Chebyshev不等式的应用

定理6: 设$x>1$则$\displaystyle \sum_{n\le x}\frac{\Lambda(n)}{n}=\log x+O(1)$,$\displaystyle \sum_{p\le x}\frac{\log p}{p}=\log x+O(1)$

$\displaystyle x\sum_{n\le x}\frac{\Lambda(n)}{n}-\sum_{n\le x}\Lambda(n)\lbrace\frac{x}{n}\rbrace=\sum_{n\le x}\Lambda(n)[\frac{x}{n}]=x\log x+O(x)$

即$\displaystyle \sum_{n\le x}\frac{\Lambda(n)}{n}=\frac{1}{x}\sum_{n\le x}\Lambda(n)\lbrace\frac{x}{n}\rbrace + \log x+O(1)\le \frac{1}{x}\sum_{n\le x}\Lambda(n) + \log x+O(1)=\log x+O(1)$

$\displaystyle \sum_{n\le x}\frac{\Lambda(n)}{n}=\sum_{p\le x}\frac{\log p}{p}+\sum_{p^m\le x,m\ge 2}\frac{\log p}{p^m}$

$\displaystyle \sum_{p^m\le x,m\ge 2}\frac{\log p}{p^m}\le \sum_{p\le x}\log p\sum_{m\ge 2}\frac{1}{p^m}=O(\sum_{p\le x}\frac{\log p}{p^2})=O(1)$ 得证

定理7: 设$x\ge 2$则存在常数$C_3$使得$\displaystyle \sum_{p\le x}\frac{1}{p}=\log \log x+C_3+O(\frac{1}{\log x})$

使用引理4，令: $C_n=\frac{[n \text{ is prime}]\log n}{n},f(n)=\frac{1}{\log n}$, 因此$\displaystyle S(x)=\sum_{n\le x}C_n=\sum_{p\le x}\frac{\log p}{p}$

$\displaystyle \sum_{p\le x}\frac{1}{p}=\sum_{p\le x}\frac{\log p}{p}\frac{1}{\log p}=\frac{S(x)}{\log x}+\int_{2}^x\frac{S(t)}{t\log^2 t}dt$

$=\frac{\log x+ O(1)}{\log x}+\int_{2}^x\frac{\log t+ O(1)}{t\log^2 t}dt$

$=1+O(\frac{1}{\log x})+\int_{2}^x\frac{1}{t\log  t}dt+\int_{2}^x\frac{ O(1)}{t\log^2 t}dt$

$=1+O(\frac{1}{\log x})+(\log \log x - \log \log 2)+(\int_{2}^{\infty} \frac{ O(1)}{t\log^2 t}dt-\int_{x}^{\infty}\frac{ O(1)}{t\log^2 t}dt)$

$=1+O(\frac{1}{\log x})+(\log \log x - \log \log 2)+(O(1)+O(\frac{1}{log x}))$

得证

定理8: $x \ge 2$ 则存在常数$C_4$使得$\prod_{p\le x}(1-\frac{1}{p})=\frac{C_4}{\log x}+O(\frac{1}{\log ^2 x})$

令$y=\prod_{p\le x}(1-\frac{1}{p})$

$\log y=\log \prod_{p\le x}(1-\frac{1}{p})=\sum_{p\le x}\log(1-\frac{1}{p})$

$=\sum_{p\le x}(-\frac{1}{p})+\sum_{p\le x}(\log(1-\frac{1}{p})+\frac{1}{p})$

$=-\sum_{p\le x} \frac{1}{p}+\sum_{p}(\log(1-\frac{1}{p})+\frac{1}{p})-\sum_{p > x}(\log(1-\frac{1}{p})+\frac{1}{p})$

$=-(\log \log x+C_3+O(\frac{1}{\log x}))+C_5+\sum_{p>x}O(\frac{1}{p^2})$,这里用了$\log x = x-\frac{1}{2}x^2+o(x^3)$

$y=e^{-\log \log x+C_6+O(\frac{1}{\log x})}=\frac{C_4}{\log x}e^{O(\frac{1}{\log x})}=\frac{C_4}{\log x}(1+O(\frac{1}{\log x}))=\frac{C_4}{\log x}+O(\frac{1}{\log^2 x})$

# 函数$\omega(n)$与$\Omega(n)$

定理9: $\displaystyle \sum_{n\le x}\omega(n)=x\log \log x+C_7 x+O(\frac{x}{\log x})$,$\sum_{n\le x}\Omega(n)=x\log \log x+C_8 x+O(\frac{x}{\log x})$

$\displaystyle \sum_{n\le x}\omega(n)=\sum_{n\le x}\sum_{p|n}1 =\sum_{p\le x}[\frac{x}{p}]=x\sum_{p\le x}\frac{1}{p}+O(\pi(x))$

$=x(\log \log x+C_3+O(\frac{1}{\log x}))+O(\frac{x}{log x})$

$=x\log \log x+C_3x+O(\frac{x}{log x})$

$\displaystyle \sum_{n\le x}\Omega(n) = \sum_{n\le x}\sum_{p^k | n}1=\sum_{p^k\le x}=\sum_{p\le x}[\frac{x}{p}]+\sum_{p^k\le x,k\ge 2}[\frac{x}{p^k}]=\sum_{n\le x}\omega(n)+(\sum_{p^k\le x,k\ge 2}\frac{x}{p^k}-\sum_{p^k\le x,k\ge 2}\lbrace\frac{x}{p^k}\rbrace)$

$\displaystyle \sum_{p^k\le x,k\ge 2}\frac{x}{p^k} = x\sum_{k=2}^{\infty}\sum_{p}\frac{1}{p^k}+O(x\sum_{p>\sqrt{x}}\frac{1}{p^2})=C_9x+O(\sqrt{x})$

$\displaystyle \sum_{p^k\le x,k\ge 2}\lbrace\frac{x}{p^k}\rbrace\le  \sum_{p^k\le x,k\ge 2}1 \le \log x \sum_{p < \sqrt{x}}1=O(\frac{x}{\log x})$

得证

定理10: $\sum_{n\le x}\omega^2(n)=x(\log \log x)^2+O(x\log \log x)$

$\sum_{n\le x}\omega^2(n)$=$\sum_{n\le x}\omega(n)+\sum_{n\le x}\omega(n)(\omega(n)-1)$

$=O(x\log \log x)+\sum_{n\le x}\sum_{p_1p_2|n,p_1\ne p_2}1$

$=O(x\log \log x)+\sum_{n\le x}(\sum_{p_1p_2|n}1-\sum_{p^2|n}1)$

$=O(x\log \log x)+\sum_{p_1p_2\le x}[\frac{x}{p_1p_2}]-\sum_{p^2\le x}[\frac{x}{p^2}]$

$=O(x\log \log x)+(x\sum_{p_1p_2\le x}\frac{1}{p_1p_2}+O(\sum_{p_1p_2\le x}1))+O(x)$, $(\sum_{p\le \sqrt{x}}\frac{1}{p})^2 \le \sum_{p_1p_2\le x} \le (\sum_{p\le x}\frac{1}{p})^2$

$=O(x\log \log x)+x(\log \log x + O(1))^2+O(\sum_{p\le x}\pi(\frac{x}{p}))+O(x)$

$=O(x\log \log x)+x((\log \log x)^2 + O(\log \log x))+O(x\log \log x)+O(x)$

$=x(\log \log x)^2 + O(x\log \log x)$

定理11(TODO): 任给$\epsilon > 0$,则在区间$[1,x]$中使得$|\omega(n)-\log \log n|> (\log \log n)^{\frac{1}{2}+\epsilon}$ 的个数为$o(x)$

$[1,x]=[1,x^{\frac{1}{e}}]+(x^{\frac{1}{e}},x]$, 左侧显然是$o(x)$

$n\in(x^{\frac{1}{e}},x]$时有$\log \log x - 1 < \log \log n \le \log \log x$

注意到$\omega(n)$是整数,所以只用证明$|\omega(n)-\log \log x| \ge (\log \log x)^{\frac{1}{2}+\epsilon}$ 的$n\le x$个数为$o(x)$即可(????$w(n)$不会有覆盖不到边界整数的情况导致n增长质数间距个吗?,但是因为$\sum_{p_i,i\le s}1 \sim \sum_{p_i,i+1\le s}1$所以不担心多一个少一个在均值下量级不变?)

$\sum_{n\le x}(\omega(n)-\log \log x)^2 = \sum_{n\le x}\omega^2(n)-2\log \log x\sum_{n\le x}\omega(n)+[x](\log \log x)^2=O(x\log \log x)$

若$[1,x]$有$M$个$n$让不等式成立,$M(\log \log x)^{1+2\epsilon} < M(\omega(n)-\log \log x)^2 = MO(x\log \log x)=O(x\log \log x)$

$M=O(\frac{x}{(\log \log x)^{2\epsilon}})$, 得证(??? 大小O 靠epsilon?)

换句话说，在区间$[1,x]$内, 对几乎所有($o(x)$)的$n$恒有$\omega/\Omega(n)\sim \log \log n$, 因为上面公式描述的是远离的情况, 而远离的个数是$o(x)$的

# Bertrand 假设 (1845提出)

主要内容是$[x,2x]$之间必有素数,被Chebyshev首先证明(1850),[最简单的证明是由Erdős在1932年发表的](http://math.stanford.edu/~ksound/Math155Spr12/Bertrand.pdf)

引理8: 设$x\ge 2$则$\prod_{p\le x}p < 4^x$

只需要证明$x\text{ is prime}$时成立

归纳法,$x=2,3$时成立,若$x < n$的所有奇数都成立

$K=\frac{n\pm 1}{2}$(让$K$为奇数), 则$n-K$为偶数,且$n-K =2K\pm 1-K \le K+1$

对于$p\in (K,n]$有$p|n!,p\nmid K!,p\nmid (n-K)!$即$p|\frac{n!}{K!(n-K)!}$即$\prod_{K<p\le n}p\le \binom{n}{K} = \frac{\binom{n}{K}+\binom{n}{n-K}}{2} < \frac{(1+1)^n}{2} = 2^{n-1}$

$\prod_{p\le x}p =\prod_{p\le K} p\prod_{K<p\le n}p < 4^K2^{n-1}=2^{n+2K-1} \le 4^n$

定理12: $n > 1$则在$[n,2n]$中必有素数

对于$n\le 128$可以枚举证明,对于$n\ge 128$用反证法

若存在$n\ge 128$不成立,因为(Legendre’s formula)

$\displaystyle \binom{2n}{n}=\frac{2n!}{n!n!}=\prod_{p\le 2n}p^{\alpha_p=\sum_{j\ge 1}([\frac{2n}{p^j}]-2[\frac{n}{p^j}])}=\prod_{p\le n}p^{\alpha_p}=\prod_{p\le \sqrt{2n}}p^{\alpha_p}\prod_{p\in (\sqrt{2n},\frac{2}{3}p]}p^{\alpha_p}\prod_{p\in (\frac{2}{3}n,n]}p^{\alpha_p}$

对于第一个因为$\sum_{j\ge 1}([\frac{2n}{p^j}]-2[\frac{n}{p^j}])$ 中对于每个$j$,括号内为0或1, 且$p^j\le 2n$,所以$\alpha_p\le \log_p 2n$即$\prod_{p\le \sqrt{2n}}p^{\alpha_p} \le \prod_{p\le \sqrt{2n}}2n$

对于第二个,$p^2\ge 2n$同理$\alpha_p \le 1$,$\prod_{p\in (\sqrt{2n},\frac{2}{3}p]}p^{\alpha_p}\le \prod_{p\in (\sqrt{2n},\frac{2}{3}p]}p$

对于第三部分$p^2>2n,1\ < \frac{n}{p} < \frac{3}{2}, 2\le \frac{2n}{p} < 3$同理$\alpha_p=[\frac{2n}{p}]-2[\frac{n}{p}]=0$

$n\ge 128$时$\sqrt{2n} \ge 16$, 所以有$\pi(\sqrt{2n}) <$ 奇数个数-(9和15) $=\frac{\sqrt{2n}+2}{2}-2$

由上$\displaystyle \binom{2n}{n}\le\prod_{p\le \sqrt{2n}}2n\prod_{\sqrt{2n} < p\le\frac{2}{3}n} p < \prod_{p\le \sqrt{2n}}2n\prod_{ < p\le\frac{2}{3}n} p < (2n)^{\sqrt{\frac{n}{2}}-1}4^{\frac{2n}{3}}$
又$\binom{2n}{n}$是$(1+1)^{2n}$展开的$2n+1$系数中最大的(注意首尾都是1),因此$2n\binom{2n}{n} > (1+1)^{2n}$

由此有$\frac{2^{2n}}{2n} < \binom{2n}{n} < (2n)^{\sqrt{\frac{n}{2}}-1}4^{\frac{2n}{3}}$, 感觉顺序上是前面的导致了后面的拆分的想法,比如这里的`-1`什么的

即$2^{\frac{2}{3}n} < (2n)^{\sqrt{\frac{n}{2}}}$

直接取对数建立函数 求导 可证矛盾,得证

# 函数$M(x)=\mu \circ U$ 

$M(x)=\sum_{n\le x}\mu(n)$, Mertens function

本节主要证明的是$\lim_{x\to\infty}\frac{M(x)}{x}=0$ 与$\lim_{x\to \infty}\frac{\pi(x)}{\frac{x}{\log x}}=1$ 等价

定理13: $\lim_{x\to\infty}\frac{M(x)}{x}=0$ 与$\lim_{x\to \infty}\frac{\sum_{n\le x}\mu(n)\log n}{x\log x}=0$ 等价

根据引理4,令$C_n=\mu(n),f(n)=\log n$, 有

$\displaystyle \sum_{n\le x}\mu(n)\log n = M(x)\log x-\int_{1}^x\frac{M(t)}{t}dt=M(x)\log x + O(x)$

同时除以$x\log x$即$\frac{M(x)}{x} -\frac{\sum_{n\le x}\mu(n)\log n}{x\log x}=O(\frac{1}{\log x})$得证

定理14: 若$\psi(x)\sim x,x\to \infty$则$M(x) = o(x),x \to \infty$

因为 $\Lambda(n)=-\sum_{d|n}\mu(d)\log d$所以 $-\mu(n)\log n=\sum_{d|n}\mu(d)\Lambda(\frac{n}{d})=\mu * \Lambda$

根据 二章的 定理17: $-\sum_{n\le x}\mu(n)\log n=\sum_{n\le a}\mu(n)\psi(\frac{x}{n})+\sum_{n\le b}\Lambda(n)M(\frac{x}{n})-M(a)\psi(b)$

取$a=xe^{-\sqrt{\log x}},b=e^{\sqrt{\log x}}$

$n\le a,x\to \infty$时有$\psi(\frac{x}{n})=\frac{x}{n}+o(\frac{x}{n})$

$\sum_{n\le a}\mu(n)\psi(\frac{x}{n})=x\sum_{x\le a}\frac{\mu(n)}{n}+o(x\sum_{n\le x}\frac{1}{n})=O(x)+o(x\log x)=o(x\log x)$

$\sum_{n\le b}\Lambda(n)M(\frac{x}{n})=O(x\sum_{n\le b}\frac{\Lambda(n)}{n})=O(x\log b)+O(x)$ =$O(x\sqrt{\log x})+O(x)=o(x\log x)$

$M(a)\psi(b)=O(a)O(b)=O(ab)=O(x)=o(x\log x)$

即$\psi \sim x\Rightarrow \sum_{n\le x}\mu(n)\log n = o(x\log x)\Rightarrow M(x)=o(x)$

得证

定理15: $M(x)=o(x),x\to \infty$ 包含$\psi(x)\sim x,x\to \infty$, 

> 这里后面的是上面我们和素数定理等价的定理，上面并没有证明其正确性（上面只有等价关系），这里要证明的是$M(x)=o(x)$和素数定理之间的等价关系，所以就要证明互相可以推

先证明 $\psi(x)=x-\sum_{lk\le x}\mu(l)f(k)+O(1)$, 其中$f(n)=d(n)-\log n-2\gamma$

首先 $[x]=u\circ U,\psi=\Lambda \circ U,1=I\circ U$,$d(n)=\sum_{l|n}1=1 * u$,$1=\mu * d$,$\Lambda = \mu * \log$,$I=\mu * u$

$[x]-\psi(x)-2\gamma=\sum_{n\le x}(1-\Lambda(n)-2\gamma I(n))$

$=\sum_{n\le x} \sum_{l|n} \mu(l)(d(\frac{n}{l})-\log \frac{n}{l}-2\gamma)$

$=\sum_{lk\le x}\mu(l)(d(k)-\log k - 2\gamma)$

第一部分得证, 那么剩下的就是要证明$\sum_{lk \le x}\mu(l)f(k) = o(x),x\to \infty$

再用第二章定理17:$\sum_{lk \le x}\mu(l)f(k)=\sum_{n\le a}\mu(n)F(\frac{x}{n})+\sum_{n\le b}f(n)M(\frac{x}{n})-M(a)F(b)$,其中$F=f\circ U,ab=x,a>0$

$\forall \epsilon > 0$存在$x_0=x_0(\epsilon)$,使$x>x_0$时$|\sum_{lk\le x}\mu(l)f(k)|<\epsilon x$

$F(x)=\sum_{n\le x}d(n)-\sum_{n\le x}\log n-2\gamma\sum_{n\le x}1$

$=(x\log x+(2\gamma -1)x + O(\sqrt{x}))-(x \log x - x + O(\log x))-2\gamma x=O(\sqrt{x})$, (二章定理18+本章引理5)

$\sum_{n\le a}\mu(n)F(\frac{x}{n})\le \sum_{n\le a} 1\cdot (A\sqrt{\frac{x}{n}})\le 2A\sqrt{xa}=\frac{2Ax}{\sqrt{b}}$

因为存在常数$B$,$|f(n)|\le B \sqrt{n}$,$M(x)=o(x)$存在$x_1=x_1(\epsilon)$,当$x>x_1$时$|M(x)|\le \frac{1}{36AB}\epsilon^2 x$

取$a=\frac{x}{b},b=\frac{36A^2}{\epsilon^2},x_0=x_1b$,$x>x_0$时

$|\sum_{n\le b}f(n)M(\frac{x}{n})|\le \sum_{n\le b} |f(n)||M(\frac{x}{n})|$

$\le \frac{\epsilon^2}{36AB}x\sum_{n\le b}\frac{|f(n)|}{n}$

$\le \frac{\epsilon^2}{36A}x\sum_{n\le b}\frac{1}{\sqrt{n}}$

$\le \frac{\epsilon^2}{36A}x\cdot 2\sqrt{b}=\frac{\epsilon }{3}x$

综上$|\sum_{lk\le x}\mu(l)f(k)|< \frac{2Ax}{\sqrt{b}} + \frac{\epsilon}{3} x+aA\sqrt{b}=\frac{\epsilon}{3} x+\frac{\epsilon}{3} x+\frac{\epsilon}{6} x$得证


# 函数$L(x)=\lambda \circ U$

定理16: $L(x)=\sum_{n\le x}\lambda(n)=o(x)$ 与$\sum_{n\le x}\mu(n)=o(x)$等价

$\Leftarrow :$

继续第二章定理17:因为$\lambda = \mu *[n\text{ is square}]$,令$g(n)=n\text{ is square},G=g\circ U$

$\displaystyle \sum_{n\le x}\lambda(n)=\sum_{n\le x^{\frac{2}{3}}}g(n)M(\frac{x}{n})+\sum_{n\le x^{\frac{1}{3}}}\mu(n)G(\frac{x}{n})-G(x^{\frac{2}{3}})M(x^{\frac{1}{3}})$

$\displaystyle =o(x\sum_{n\le x^{\frac{2}{3}}}\frac{g(n)}{n})+O(\sum_{n\le x^{\frac{1}{3}}}G(\frac{x}{n}))+o(x)$

$\displaystyle =o(x\sum_{n=1}^{\infty} \frac{1}{n^2})+O(\sqrt{x}\sum_{n\le x^{\frac{1}{3}}}\frac{1}{\sqrt{n}})+o(x) = o(x)$

$\Rightarrow :$

(二章习题6:) 因为$\mu(n)=\sum_{d^2|n}\mu(d)\lambda(\frac{n}{d^2})=\sum_{n=d^2k}\mu(d)\lambda(k)$

$\displaystyle \sum_{n\le x}\mu(n)=\sum_{n\le x}\sum_{n=d^2k}\mu(d)\lambda(k)=\sum_{d^2k\le x}\mu(d)\lambda(k)=\sum_{d\le \sqrt{x}}\mu(d)\sum_{k\le\frac{x}{d^2}}\lambda(k)$

$\displaystyle =\sum_{d\le x^{\frac{1}{3}}}\mu(d)\sum_{k\le \frac{x}{d^2}}\lambda(k)+O(\sum_{k\le x^{\frac{1}{3}}}\sum_{d\le \sqrt{\frac{x}{k}}}1)=o(x)+o(x)=o(x)$


# 习题

## 2. $\sum_{p} \frac{1}{p}$发散

{% note info no-icon Proof %}

我想的通过足够大$x$,$C_1\frac{x}{\log x}<\pi(x)<C_2\frac{x}{\log x}$

去考虑足够大$M$对应$\displaystyle \sum_{t=1}^{\infty} \sum_{x\in[M(\frac{4C_2}{C_1})^t,M(\frac{4C_2}{C_1})^{t+1}],x\text{ is prime}} \frac{1}{x} \ge$ 分母等差数列求和

---

另一个方法: Cauchy准则 尾段和$s=\sum_{p_i,i\ge t}\le \frac{1}{2}$

与前面互质的等差和$\displaystyle \sum_{t=1}^{\infty} \frac{1}{1+\prod_{p_i,i<t}} \le$乘法表示$\sum_{t=1}^{\infty}s^t\le\sum_{t=1}^{\infty} (\frac{1}{2})^t=1$ 矛盾

{% endnote %}

## 4. $f(x)$为整系数多项式,$\lbrace f(n)\rbrace$有无限个素因子


{% note info no-icon Proof %}

若$a_0=0,p|f(p)$

若$a_0\ne 0$,反证法,若有限$f(a_0\prod_{p_i})=a_0(k\prod_{p_i}+1)$, 右侧会出现新质因子

{% endnote %}

## 8. $x\ge 2$证$\sum_{d\le x} d^2(n)=O(x\log^3 x)$

{% note info no-icon Proof %}

因为$\alpha_1+\alpha_2+1 \le (\alpha_1+1)(\alpha_2+1)$,所以$d(a)d(b) \ge d(ab)$

$\displaystyle \sum_{d\le x}d^2(n)=\sum_{d\le x}d(n)\sum_{u|d}1$

$\displaystyle =\sum_{u\le x}\sum_{l\le\frac{x}{u}}d(ul)$

$\displaystyle \le \sum_{u\le x}\sum_{l\le\frac{x}{u}}d(u)d(l)$

$\displaystyle = \sum_{u\le x}d(u)\sum_{l\le\frac{x}{u}}d(l)$

$\displaystyle = O(\sum_{u\le x}d(u)\frac{x}{u}\log \frac{x}{u})$

$\displaystyle = O(x\log x)O(\sum_{u\le x}\frac{d(u)}{u})$,习题7证明了后面一半是$O(\frac{1}{2}\log^2 x)$

{% endnote %}

## 9. $x\ge 1$则$\sum_{n\le x}\frac{\phi(n)}{n}=\frac{6}{\pi^2}x+O(\log x)$

{% note info no-icon Proof %}

直接上引理4,但是得到的是$\frac{6}{\pi^2}x+O((\log x)^2)$,大了 也就是$\phi(n)$的估计到这里还不够紧凑

$\sum_{n\le x}\frac{\phi(n)}{n}=\sum_{n\le x}\frac{1}{n}\sum_{d|n}\mu(d)\frac{n}{d}$, 因为$\phi =\mu * e$

$=\sum_{n\le x}\sum_{d|n}\frac{\mu(d)}{d}$

$=\sum_{d\le x}\frac{\mu(d)}{d} [\frac{x}{d}]$

$=\sum_{d\le x}\frac{\mu(d)}{d} \frac{x}{d}-\sum_{d\le x}\frac{\mu(d)}{d}\lbrace \frac{x}{d}\rbrace$

$=x\sum_{d\le x}\frac{\mu(d)}{d^2}+O(\sum_{d\le x}\frac{1}{d})$

$=\frac{6}{\pi^2}x+O(\log x)$

{% endnote %}

## 10. 使用$\frac{n}{\phi(n)}=\prod_{p|n}(1-\frac{1}{p})^{-1}=(\sum_{d|n}\frac{\mu^2(d)}{\phi(d)})^{-1}$,证明$\sum_{n\le x} \frac{n}{\phi(n)}=O(x)$,$\sum_{n\le x}\frac{1}{\phi(n)}=O(\log x)$

{% note info no-icon Proof %}

$\displaystyle \frac{n}{\phi(n)}=\prod_{p|n}(1-\frac{1}{p})^{-1}=\prod_{p|n}(\frac{p}{p-1})=\prod_{p|n}(\frac{p^{\alpha_p+1}-1}{p-1}\frac{p^{\alpha_p+1}}{p^{\alpha_p+1}-1}\frac{1}{p^{\alpha_p}})$

$\displaystyle =\sigma(n) (\prod_{p|n}\frac{1}{1-\frac{1}{p^{\alpha_p+1}}}) \frac{1}{n}$

$\displaystyle \le \frac{\sigma(n)}{n} (\prod_{p|n}\sum_{i=0}^{\infty} \frac{1}{p^{2i}})$

$\displaystyle \le \frac{\sigma(n)}{n} (\sum_{j=1}^{\infty}  \frac{1}{p^{2j}}) = \frac{\pi^2}{6}\frac{\sigma(n)}{n}$

$\displaystyle \sum_{n\le x}\frac{n}{\phi(n)}\le \frac{\pi^2}{6} \sum_{n\le x}\frac{\sigma(n)}{n}$

$\displaystyle \sum_{n\le x}\frac{\sigma(n)}{n}=\frac{1}{x}(\frac{\pi^2}{12} x^2 + O(x\log x))+\int_{1}^{x}\frac{\frac{\pi^2}{12} t^2 + O(t\log t)}{t^2}dt$, (第二章定理19)

$=O(x)$

后面直接同样 引理4就好了

{% endnote %}

## 15. $\sum_{p|x}\frac{\log p}{p}=O(\log \log x)$

> 教材这里写错了,同时用了n和x

{% note info no-icon Proof %}

$\sum_{p|x}\frac{\log p}{p} = \sum_{p|x,p \le \log x}\frac{\log p}{p} + \sum_{p|x,p > \log x}\frac{\log p}{p}$

$\le \sum_{p \le \log x}\frac{\log p}{p} + \sum_{p|x,p > \log x}\frac{\log \log x}{\log x}$, 用到$\frac{\log x}{x}$的增减区间,上面也是根据增减区间切割的

$\le (\log \log x+O(1))+\log_{\log x} x\cdot \frac{\log \log x}{\log x}$,定理6

$=O(\log \log x)$

{% endnote %}

## 16. $n\ge 3$,$\sum_{d|n}\frac{\mu(d)\log d}{d}=O(\log \log n)$

{% note info no-icon Proof %}

$\displaystyle \sum_{d|n}\frac{\mu(d)\log d}{d}=\sum_{d|n}\frac{\mu(d)}{d}\sum_{p|d}\log p$

$\displaystyle =\sum_{p|n} \log p \sum_{p|d,d|n}\frac{\mu(d)}{d}$

$\displaystyle =\sum_{p|n} \frac{\log p}{p} (-\sum_{t|\frac{n}{p^{\alpha_p}}}\frac{\mu(t)}{t})$

$\displaystyle =O(\sum_{p|n} \frac{\log p}{p})$, 因为$\displaystyle \sum_{t|n}\frac{\mu(t)}{t} = \frac{1}{n}\sum_{t|n}\mu(t)\frac{n}{t}=\frac{(\mu * e)(n)}{n}=\frac{\phi(n)}{n} \le 1$

由题目15可证

> 还是觉得好怪啊, 这样看的话，当给定了$p$的集合以后 左边因为$\mu(d)$ 只有一次方以内的组合才不是$0$,就是一个定值了,而$\log \log n$是无限增长的,不过一个无限增长的当然是可以框住有限的,但实际上是从n的增长来看的,那么左侧就会忽大忽小

{% endnote %}

## 17. 试证存在常数$C$,$n\ge 3$时$\phi(n)>C\frac{n}{\log \log n}$

{% note info no-icon Proof %}

取$q=A\omega(n)\log(3\omega(n))$
$\pi(q)\ge C_1\frac{q}{\log q}=C_1\frac{A\omega(n)\log(3\omega(n))}{\log (A\omega(n)\log(3\omega(n)))}=\omega(n) \frac{AC_1}{\frac{\log (A\omega(n))}{\log(3\omega(n))}+\frac{\log\log(3\omega(n))}{\log(3\omega(n))}}$
分母大于 1+0, 所以A取足够大时, 右边有正的下界

$\pi(q) \ge \omega(n)$

$q=A\omega(n)\log 3\omega(n)\le A\log_2n\log(3\log_2n)\le C_2\log n\log \log n$

$\frac{\phi(n)}{n}=\prod_{p|n}(1-\frac{1}{p})\ge\prod_{p\le q}(1-\frac{1}{p})$

$=\frac{C_4}{\log q}+O(\frac{1}{\log^2 q})$, 根据定理8

$\ge \frac{C_5}{\log q}$

$\ge \frac{C_6}{\log(C_2\log n\log \log n)}$

$\ge \frac{C_7}{\log\log n}$

{% endnote %}

## 18.  $\displaystyle \sum_{n=1}^{\infty}\frac{\mu(n)}{n^s}=\frac{1}{\zeta(s)}$ ,$\displaystyle \sum_{n=1}^{\infty}\frac{d(n)}{n^s}=\zeta^2(s)$, $\displaystyle \sum_{n=1}^{\infty}\frac{\Lambda(n)}{n^s}=-\frac{\zeta' (s)}{\zeta(s)}$

$\zeta(s)=\sum_{n=1}^{\infty} \frac{1}{x^s}$ Riemann函数

{% note info no-icon Proof %}

(1) $\displaystyle =\frac{1}{\prod_{p}\sum_{j=0}^{\infty} \frac{1}{p^{sj}}}=$

(2) $\displaystyle =\prod_{p}\sum_{i=0}^{\infty}\frac{i+1}{(p^s)^i}=$

(3) $\displaystyle =\sum_{p}\log p\sum_{i=1}^{\infty}\frac{1}{(p^s)^i}=\sum_{p}\log p\frac{\frac{1}{p^s}}{1-\frac{1}{p^s}}$

$=(\int_{0}^s \sum_{p}\log p\frac{\frac{1}{p^t}}{1-\frac{1}{p^t}} dt)'$

$=(\sum_{p} \int_{0}^s \frac{d(1-\frac{1}{p^t})}{1-\frac{1}{p^t}})'$

$=(\sum_{p} \log (1-\frac{1}{p^s}))'$

$=(-\sum_{p} \log \frac{1}{1-\frac{1}{p^s}})'$

$=(-\zeta(s))'$

得证

{% endnote %}

## 19. $\sum_{n=1}^{\infty} \frac{\mu(n)}{n}=0$ 与$M(x)=o(x)$等价 

{% note info no-icon Proof %}

$\Rightarrow$:

$M(x)=\sum_{n\le x}\mu(n)$

$=\sum_{n\le x}\frac{\mu(n)}{n}n$

$=x o(1)-\int_{1}^{x} o(1) dt =o(x)$

$\Leftarrow$ :

> $\sum_{n=1}^{\infty}\mu(n)\frac{1}{n}=\frac{1}{x} o(x)+\int_{1}^{x}\frac{o(t)}{t^2}dt$ 太大不行

TODO

{% endnote %}

## 20. $\sum_{n\le x}\frac{1-\Lambda(n)}{n}=2\gamma +o(1)$和素数定理等价

{% note info no-icon Proof %}

$\Rightarrow$: $\sum_{n\le x}\frac{1}{n}=\log x+\gamma+O(\frac{1}{x})$ 和 定理4 有$\psi(x)=x+o(x)$

$\Leftarrow$:

TODO

{% endnote %}

# 总结

本章的核心是 Cheybyshev定理 存在两个正常数使得$C_1\frac{x}{\log x}< \pi(x) < C_2\frac{x}{\log x}$  , 以及围绕着 素数定理 $\pi(x) \sim \frac{x}{\log x} ,x \to \infty$ 有关的几个等价的定理 

first Chebyshev function: $\theta(x) =\sum_{p\le x} \log p\sim x,x \to \infty$ 

second Chebyshev function: $\displaystyle \psi(x) = \Lambda \circ U \sim x,x\to \infty$,

Mertens function:$M(x)= \mu \circ U=o(x),x\to \infty$ 

$L(x)=\lambda \circ U=o(x),x\to \infty$

以及

定理9: $\displaystyle \sum_{n\le x}\omega(n)=x\log \log x+C_7 x+O(\frac{x}{\log x})$,$\sum_{n\le x}\Omega(n)=x\log \log x+C_8 x+O(\frac{x}{\log x})$

Bertrand假设: 主要内容是$[x,2x]$之间必有素数