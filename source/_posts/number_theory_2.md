---
title: 数论基础 二 数论函数
date: 2023-03-16
categories: [数论,数论基础]
tags: [数论基础,Dirichlet乘积,Dirichlet逆,可乘函数,完全可乘函数,Mobius变换,Mobius反演]
description: 1. 数论函数举例 2. Dirichlet 乘积 3. 可乘函数 4. 阶的估计 5. 广义Dirichlet乘积
---

ISBN 9787040364729

<!--more-->

# 数论函数举例 

{% note no-icon success %}
定义1: 在全体正整数上定义的函数是数论函数
{% endnote %}

$u(n)=1 , n\ge 1$, $u\circ U = [x]$

$e(n)=n , n\ge 1$

$\displaystyle I(n)=\left\lbrace \begin{array}{lc} 1, n = 1\\\\ 0,n>1 \end{array}\right.$,$I=\mu * u$

$\displaystyle d(n)=\sum_{d|n} 1 =n$的质数因子的幂次+1的乘积(因子个数函数), $d=u * u$
$\Omega(n) =$质数因子幂次和(重复的统计质因子个数)

$\omega(n) =$不同质数因子个数

$\displaystyle \sigma_\lambda(n)=\sum_{d|n} d^\lambda$ 正除数的幂和函数$\sigma = e * u$

$\displaystyle \phi(n)=\sum_{1\le d \le n,\gcd(d,n)=1} 1$ 所有不超过$n$和$n$互素的正整数个数,Euler函数,$\phi=\mu * e=n\prod_{d|n}(1-\frac{1}{p})$

$\mathrm{M\ddot{o}bius}$函数 $\mu(n) =\left\lbrace \begin{array}{lc}1,& n=1 \\\\ (-1)^s, & n=p_1p_2\cdots p_s, p_i<p_{i+1} \\\\ 0,& \text{others}\end{array}\right.$

$\mathrm{Mangoldt}$函数$\Lambda(n)=\left\lbrace\begin{array}{lc} \log p,&n=p^k,k\ge 1 \\\\ 0, &others\end{array}\right.$

$\displaystyle \log n=\sum_{d|n}\Lambda(d)$, 这样得到另一种表达方式$\displaystyle \Lambda(n)=\sum_{d|n}\mu(d)\log{\frac{n}{d}}$

$\mathrm{Liouville}$函数$\lambda(n) = (-1)^{\Omega(n)}$

# Dirichlet 乘积 /卷积

{% note no-icon success %}

定义2: $f(n),g(n)$是两个数论函数,$h=f * g$称作Dirichlet 乘积/卷积

$\displaystyle h(n) = \sum_{d|n}f(d)g(\frac{n}{d})$, 从理解上就是f和g中x相乘为n的对应y的乘积的和, 所以也可以写成$(f * g)(n) =\sum_{ab = n}f(a)g(b)$
  
{% endnote %}

定理1: Dirichlet乘积满足 交换率$f * g = g * f$和结合率$(f * g)* h = f * (g * h)$

一个重要的公式(算法竞赛里拆$\gcd(a,b)=1$会使用) $I = \mu * u = \mu * 1 = \sum_{d|n} \mu(d) = \left\lbrace \begin{array}{lc} 1,&n=1\\\\ 0, & n>1 \end{array}\right.$
证明$\sum_{d|n} \mu(d) = \mu(1)+\mu(p_1)+\cdots+\mu(p_s)+\cdots+\mu(p_1p_2)+\cdots+\mu(p_1p_2\cdots p_s)$ 

$= 1\binom{s}{0}+(-1)^1\binom{s}{1}+\cdots+(-1)^s\binom{s}{s} = (1-1)^s$

{% note no-icon success %}

定义3: 若 $I = f * g$ 则$f$和$g$互为Dirichlet的逆

{% endnote %}

定理2: $f * I = I * f = f$

{% note no-icon success %}

定义4: $F=f*u$ 则$F$称作$f$的$\mathrm{M\ddot{o}bius}$变换, $F(n) = \sum_{d|n} f(d)$, 如$d=u * u, I = \mu * u$

{% endnote %}

定理3(这也就是算法里常见的Mobius反演): $F=f * u \Rightarrow f=F * \mu$, $F(n) = \sum_{d|n} f(d) \Rightarrow f(n)=\sum_{d|n} F(d)\mu(\frac{n}{d})$, 反向一样的推法

证明$F * \mu = (f * u) * \mu = f * (u * \mu) = f * I = f$

例1: 证明$e = \phi * u$, 即要证明$n=\sum_{d|n}\phi(d)$, 因为根据定义$\phi(n)=\sum_{d|n} \mu(d)\frac{n}{d}$即$\phi = \mu * e$

例2: 证明$\log n = \Lambda * u$, 即要证明$\log n=\sum_{d|n}\Lambda(d)$, 展开$d$即可,这样得到另一种表达方式$\Lambda(n)=\sum_{d|n}\mu(d)\log{\frac{n}{d}}$


# 可乘函数 

> 可乘的一个好处是只需要计算$f(p^\alpha)$,以后再乘起来,证明时对于可乘函数也只需要证明质数幂次的情况
> 完全可乘的一个好处是能快速得到Dirichlet逆$f^{-1}(n)=\mu(n)f(n)$

{% note no-icon success %}

定义5: 定义在全体自然数上，且不恒等于零的数论函数,若$f(mn)=f(m)f(n), \gcd(m,n)=1$,则称它为可乘/积性函数,若没有$\gcd$的限制，全部满足$f(mn)=f(m)f(n)$则称作完全/绝对 可乘函数

{% endnote %}

例3: $\mu(n),d(n)$为可乘函数与,$\mathrm{Liouville}$函数,$e^\lambda(n)=n^{\lambda},I(n)$ 为完全可乘函数

定理4: 可乘函数$f(n)$有如下性质

- $f(1)=1$
- $f(n)=f(p_1^{\alpha_1})f(p_2^{\alpha_2})\cdots f(p_s^{\alpha_s})$
- $f(n)$完全可乘充要条件$\forall p,k\ge 1, f(p^k)=f^k(p)$, 相当于解除了gcd限制
- $f * u$($f$的Mobius变换)依然是可乘函数

推论1: $f(n)$可乘, $F(n)=\sum_{d|n} f(d) = \prod_{p_i|n} (1+f(p_i)+\cdots+f(p_i^{\alpha_i}))$

又此$\sum_{d|n}\mu(d)f(d) = \prod_{p_i|n} (1+\mu(p_i)f(p_i)+\cdots+\mu(p_i^{\alpha_i})f(p_i^{\alpha_i})) = \prod_{p_i|n} (1-f(p_i))$

因此$\phi$另一个表达$\displaystyle \phi(n)=\sum_{d|n}\mu(d)\frac{n}{d}=n\prod_{d|n}(1-\frac{1}{p})$

类似的 $f(n)$完全可乘, $F(n)=\sum_{d|n} f(d) = \prod_{p_i|n} (1+f(p_i)+\cdots+f^{\alpha_i}(p_i))$

例4: $\sigma(n)=\sum_{d|n} d=\frac{p_1^{a_1+1}-1}{p_1-1}\frac{p_2^{a_2+1}-1}{p_2-1}\cdots \frac{p_s^{a_s+1}-1}{p_s-1}$, 也就是$\sigma = e * u$

定理5: $f(n)$为可乘函数,则$f(\gcd(m,n))f(\mathrm{lcm}(m,n))=f(m)f(n)$, 也就是不同p之间互不影响，相同p相当于min和max了

定理6: 若$f,g$可乘,则$f * g$可乘,若$f,f * g$可乘,则$g$可乘

正向的，相当于上面Mobius保持可乘性只是$g = u$的特例， 即证明$(f * g)(mn)=(f * g)(m)(f * g)(n), \gcd(m,n) = 1$, 同样拆$d=d_1d_2$即可

对于后面的,用反证法, 若$f$不可乘 => 存在$f(mn)\ne f(n)f(m),\gcd(m,n)=1$, 选最小mn, 即$<mn$时还是可乘，这样同样做拆解，会唯一多出$f(mn)-f(n)f(m)$导致而不等

推论2: $F=f * \mu$, 根据上面$F$可乘,则$f$也可乘

定理7: $f$为$f(1)\ne 0$的数论函数, 一定存在唯一的DIrichlet逆$f^{-1}$

并且由$f^{-1}(1) = \frac{1}{f(1)},f^{-1}(n) = \frac{-1}{f(1)}\sum_{d|n,d<n} f(\frac{n}{d})f^{-1}(d),n > 1$得出

也就是要证明$f * f^{-1} = I$只有唯一解, 直接归纳从n=1向上($1=I(1)=f(1)f^{-1}(1)=1,0=I(n)=\sum_{d|n}f(\frac{n}{d})f^{-1}(d),n>1$)

推论3: 可乘函数必定有Dirichlet逆存在,且也是可乘函数

定理8: $f(1) \ne 0,g(1)\ne 0$, $(f * g)^{-1} = f^{-1} * g^{-1}$

$h = f*g$可乘

$h * h^{-1} = I$

$g^{-1} * f^{-1} = h^{-1} * h * f^{-1} * g^{-1} = h^{-1} * (g * f) * f^{-1} * g^{-1} = h^{-1}$

定理9: $f$可乘, 若$f$完全可乘的充要条件是$f^{-1}(n)=\mu(n)f(n)$

因为$f$可乘$f(1)=1$

必要性: 若$f$完全可乘,令$g(n)=\mu(n)f(n)$,有$(g * f)(n)=\sum_{d|n}\mu(d)f(d)f(\frac{n}{d})=f(n) \sum_{d|n}\mu(d)=f(n)I(n)=I(n)$, 即$g=f^{-1}$ 

充分性:若$f^{-1}(n)=\mu(n)f(n)$, 那么要证明的就是$\forall p,\alpha, f(p^\alpha)=f^\alpha(p)$

$I=\sum_{d|n}\mu(d)f(d)f(\frac{n}{d})$

任取$n=p^\alpha, \alpha > 0$

$0=\mu(1)f(1)f(p^\alpha)+\mu(p)f(p)f(p^{\alpha-1})$

即 $f(p^\alpha)=f(p)f(p^{\alpha-1})$

例5: $\sigma_\lambda^{-1} = (e^{\lambda})^{-1} * u^{-1} = \mu e^{\lambda} * \mu$, 

$\phi^{-1}=\mu^{-1} * e^{-1}=u * \mu e$

$d^{-1} = u^{-1} * u^{-1} = \mu * \mu$

例6: $g=\lambda * u =\left\lbrace \begin{array}{lc}1,&n=k^2\\\\ 0,& others\end{array}\right.$
$g^{-1}=\sum_{d|n}\mu(d)\lambda(d)\mu(\frac{n}{d})$

可乘函数对于每个质数因子处理后再乘起来, 可以证明1

# 阶的估计 

$f$任意函数,$g$正值函数,若存在与$x$无关的常数$A$,使$|f(x)|\le Ag(x)$对于充分大$x$都成立,则$f(x)=O(g(x))$或$f(x) \ll g(x)$

如$\sin(x)\ll 1,x\cos x\ll x^2,\sqrt{3x^2+7}\ll x$

定理, 对任意正整数$n$有$x^n = O(e^x)$, 因为$x^n \le n! e^x$

若$\lim_{x\to +\infty} \frac{f(x)}{g(x)} = 1$, 则称作当$x\to +\infty$时$f(x)\sim g(x)$

定理11: 对于任何正数$\alpha$不可能有$d(n) = O(\log ^\alpha n)$

核心思想就是构建 $A\log^\alpha n > d(n) > c_{\alpha}\log^{>\alpha} n$, 因为构建出来的话意味着右边幂次更大，随着n无限增长总会超过左边, 所以就是考虑如何造出 $d(n) > c_{\alpha}\log^{>\alpha} n$， 取$n=(p_1p_2\cdots p_l)^m$

定理12: 对于任意$\epsilon > 0$一定有$d(n) = O(n^\epsilon)$

$\displaystyle \frac{d(n)}{n^{\epsilon}}=\prod \frac{\alpha_i+1}{p^{\alpha_i\epsilon}} \le (\frac{2}{\epsilon \log 2})^{2^{\frac{1}{\epsilon}}}$, (讨论$p^\alpha$与2的关系，和个数，

由于数论函数数值的不规则性，我们经常去研究它的算术平均值$\displaystyle \bar{f}(n)=\frac{\sum_{m\le n}f(m)}{n}$

$\bar{d}(n) =\frac{1}{n}\sum_{m\le n} d(m) \sim \log n$, 称作$d$的平均阶为$\log n$ (稍后证明)

引理1: 当$x$充分大时 $\sum_{n\le x}\frac{1}{n} = \log x + \gamma + O(\frac{1}{x})$, 其中$\gamma$是Euler常数

$\displaystyle \sum_{n\le x}\frac{1}{n}=\sum_{n\le x}\frac{\int_{n}^{n+1}dt}{n}$

$=(\sum_{n\le x}\int_{n}^{n+1}(\frac{1}{n}-\frac{1}{t})dt)+\int_{1}^{[x]+1}(\frac{1}{t})dt$

$=(\sum_{n\le x}\int_{n}^{n+1}(\frac{1}{n}-\frac{1}{t})dt)+\log([x]+1)$

$=\gamma+O(\frac{1}{x})+\log([x]+1)$

当$x$充分大时

$\displaystyle \sum_{n\le x} d(n) = \sum_{n\le x}\sum_{d|n} 1$

$\displaystyle = \sum_{d \le x}\sum_{d|n,n\le x} 1$

$\displaystyle = \sum_{d \le x}[\frac{x}{d}]$

$\displaystyle = \sum_{d \le x}\frac{x}{d} - \lbrace\sum_{d \le x}\frac{x}{d}\rbrace$

$\displaystyle = x\sum_{d \le x}\frac{1}{d} +O(x)$

$\displaystyle = x(\log x+\gamma +O(\frac{1}{x}))+O(x)$

$\displaystyle = x\log x+\gamma x+O(1)+O(x)$

$\displaystyle = x\log x+O(x)$ (这里的估计还是很粗糙,见定理18)

因此$\bar{d}(n) \sim \log n$得证

# 广义Dirichlet乘积

> 看起来这里用例不少是为了简化阶的估计

研究$\sum f(n)H(\frac{x}{n})$, 有什么不同,一个例子是上面的$f(2)$不会对$(f * g)(3)$贡献,而这里会,并且非整数的地方也有值, 记作$f \circ H$

$f$为数论函数,$H$为定义在$(0,+\infty)$上的函数,$H(x)=0,x\in(0,1)$

$G(x) = (f\circ H)(x) = \sum_{n\le x} f(n)H(\frac{x}{n})$

若$H(x) = 0,x$不是整数时,则

$(f\circ H)(x) = \left\lbrace \begin{array}{lc}0,&x\not\in \mathbb{Z}\\\\ (f * H)(x),& x\in \mathbb{Z} \end{array}\right.$

$I\circ H = H$

定理14: $f \circ (g\circ H) = (f * g)\circ H$

取$f=g=u,H(x)=U(x)=\left\lbrace \begin{array}{lc}0,& 0<x<1\\\\ 1,&x\ge 1\end{array}\right.$

有$g \circ H = \sum_{n\le x}1 = [x]$

$f\circ(g \circ H) = \sum_{n\le x} [\frac{x}{n}]$

因为$d=u * u$, $d\circ H = \sum_{n\le x}d(n)$

即$\sum_{n\le x}d(n) = \sum_{n\le x} [\frac{x}{n}]$

定理15, 设f有Dirichlet逆$f^{-1}$， $G=f\circ H$, 则$H=f^{-1}\circ G$

推论4: 若$f$完全可乘,$G=f\circ H,H=(\mu(n)f(n))\circ G$

定理16: $h=f * g, H=h\circ U,F=f\circ U,G=g\circ U$, 则$H(x)=f \circ G = g \circ F$

推论5: $F=f\circ U$,则$\displaystyle \sum_{n\le x}\sum_{d|n} f(d) = \sum_{n\le x}F(\frac{x}{n})$, 就是$(u * f) \circ U=u \circ ( f \circ U)$
例7: $\sum_{n\le x}\mu(n)[\frac{x}{n}]=1$,即$\mu \circ(u\circ U) = I \circ U = U$

定理17: 设$h=f * g,F=f\circ U,G=g\circ U,H=h\circ U$, 对任意$ab=x$的正数$a,b$恒有

$H(x)=\sum_{n\le a}f(n)G(\frac{x}{n})+\sum_{n\le b}g(n)F(\frac{x}{n})-F(a)G(b)$

$\displaystyle H(x)=\sum_{n\le x}(\sum_{d_1d_2=n}f(d_1)g(d_2))$

$\displaystyle =\sum_{d_1d_2\le x} f(d_1)g(d_2)$

$\displaystyle =\sum_{d_1\le a} (\sum_{d_2\le\frac{x}{d_1}} f(d_1)g(d_2)) + \sum_{d_2\le b} (\sum_{d_1\le\frac{x}{d_2}} f(d_1)g(d_2)) -\sum_{d_1\le a,d_2\le b} f(d_1)g(d_2)$, 容斥原理

$=\sum_{n\le a}f(n)G(\frac{x}{n})+\sum_{n\le b}g(n)F(\frac{x}{n})-F(a)G(b)$

定理18: 我们可以用这个对$d(n)$重新估计

$f=g=u$因此$h=f * g =u * u=d$,取$a=b=\sqrt{x}$

$\sum_{n\le x}d(n) = H(x) = \sum_{n\le a}f(n)G(\frac{x}{n})+\sum_{n\le b}g(n)F(\frac{x}{n})-F(a)G(b)$

$=2\sum_{n\le \sqrt{x}}[\frac{x}{n}] - [\sqrt{x}]^2$

$=2\sum_{n\le \sqrt{x}}(\frac{x}{n} - \lbrace \frac{x}{n} \rbrace) - (\sqrt{x}-\lbrace\sqrt{x}\rbrace)^2$

$=x\log x+(2\gamma -1)x + O(\sqrt{x})$

定理19: $\sum_{n\le x} \sigma(n) = \frac{\pi^2}{12} x^2 + O(x\log x)$

$\sigma = e * u$

$\displaystyle \sigma \circ U = u\circ(e\circ U) =\sum_{n\le x}\sum_{m\le \frac{x}{n}} m=\sum_{n\le x} \frac{1}{2}\lbrack \frac{x}{n}\rbrack([\frac{x}{n}]+1)$

$\displaystyle =\frac{1}{2}\sum_{n\le x}(\frac{x}{n}+O(1))(\frac{x}{n}+O(1))$

$\displaystyle =\frac{1}{2}\sum_{n\le x}\frac{x^2}{n^2}+O(\sum_{n\le x}\frac{x}{n})+O(x)$

$\displaystyle =\frac{x^2}{2}\sum_{n}\frac{x^2}{n^2}-\frac{x^2}{2}\sum_{n > x}\frac{x^2}{n^2}+O(x\log x)$

$= \frac{\pi^2}{12} x^2+O(\frac{1}{[x]})+O(x\log x)$

$= \frac{\pi^2}{12} x^2+O(x\log x)$

定理20: $\sum_{n\le x}\phi(x)=\frac{3}{\pi^2}x^2+O(x\log x)$

$\phi = \mu * e$

$\displaystyle \sum_{n\le x}\phi(x)=\sum_{n\le x}\mu(n)\sum_{m\le \frac{x}{n}} m$

$\displaystyle =\sum_{n\le x}\mu(n)\frac{1}{2}\lbrack \frac{x}{n}\rbrack([\frac{x}{n}]+1)$


$\displaystyle=\frac{1}{2}\sum_{n\le x}\mu(n)(\frac{x}{n}+O(1))^2$

$\displaystyle=\frac{x^2}{2}\sum_{n\le x}\frac{\mu(n)}{n^2}+O(x\log x)$

$\displaystyle=\frac{x^2}{2}\sum_{n=1}^\infty \frac{\mu(n)}{n^2}+O(x\log x)$

$\frac{\pi^2}{6}\sum_{d=1}^\infty \frac{\mu(d)}{d^2}=\sum_{a=1}^\infty \frac{1}{a^2} \sum_{d=1}^\infty \frac{\mu(d)}{d^2}=\sum_{n=1}^{\infty} \frac{\sum_{d|n} \mu(d)}{n^2} =\sum_{n=1}^{\infty} \frac{I(n)}{n^2} = 1$, 考虑$n=ad$

原式 $\displaystyle=\frac{3}{\pi^2}x^2+O(x\log x)$

定理21: $Q(x)=$不超过$x$的无平方因子的正整数的个数, $\sum_{Q(x)}=\frac{6}{\pi^2}x+O(\sqrt x)$

不大于$x$且最大平方因子为$k^2$的数个数为$Q(\frac{x}{k^2})$,相当于$v = mk^2 \le x,m$中没有平方因子,所以和求$\le \frac{x}{k^2}$的无平方因子的正整数是一样的子问题

$\sum_{k\le \sqrt{x}}Q(\frac{x}{k^2}) = [x]$

$\displaystyle Q(x)=\sum_{n\le \sqrt{x}}Q(\frac{x}{d^2})I(d)=\sum_{n\le \sqrt{x}}Q(\frac{x}{d^2})\sum_{d|n}\mu(d)$

$\displaystyle =\sum_{d \le \sqrt{x}}\mu(d) \sum_{d|n,n\le \sqrt{x}} Q(\frac{x}{d^2})$

$\displaystyle =\sum_{d \le \sqrt{x}}\mu(d) \sum_{k\le \sqrt{\frac{x}{d^2}}} Q(\frac{x}{d^2k^2})$

$\displaystyle =\sum_{d \le \sqrt{x}}\mu(d) [\frac{x}{d^2}]$

$\displaystyle =\sum_{d \le \sqrt{x}}\mu(d) (\frac{x}{d^2}+O(1))$

$\displaystyle =\sum_{d \le \sqrt{x}}\frac{x\mu(d)}{d^2}+O(\sqrt{x})$

$\displaystyle =\frac{6}{\pi^2}x+O(\sqrt{x})$


# 习题

## 9. $\lambda(n)=(-1)^{\Omega(n)}$,求$\sum_{d|n}\lambda(d)d^s$的表达式,证明$\sum_{k=1}^{[x]}\lambda(k)[\frac{x}{k}]=[\sqrt{x}]$


{% note info no-icon Proof %}

$\sum_{d|n}\lambda(d)d^s = \sum_{d|n,d=\prod p_i^{\beta_i}} (-1)^{\sum \beta_i}(\prod {p_i}^{\beta_i})^s$

$= \sum_{n=\prod p_i^{\alpha_i},\beta_i\le \alpha_i} \prod (-p_i^s)^{\beta_i }$

$= \prod_{i,n=\prod p_i^{\alpha_i},\beta_i\le \alpha_i} \sum_{j=0}^{\alpha_i} (-p_i^s)^{j}$

$= \prod_{i,n=\prod p_i^{\alpha_i},\beta_i\le \alpha_i} \frac{1-(-p_i^s)^{\alpha_i+1}}{1+p_i^s}$

$\sum_{k=1}^{[x]}\lambda(k)[\frac{x}{k}]=\sum_{k=1}^{[x]}\lambda(k)[\frac{[x]}{k}] = (\lambda \circ (u\circ U))([x])$

$=((\lambda * u)\circ U)([x])$

$(\lambda * u)(n) = \left\lbrace\begin{array}{lc} 1,& n=k^2 \\\\ 0,& \text{others}\end{array}\right.$

{% endnote %}

## 14. 设$\displaystyle s(n)=\sum_{j\in[1,n],\gcd(j,n)=1} j^2$证明$\displaystyle \sum_{d|n}\frac{s(d)}{d^2}=\frac{1}{n^2}\sum_{j=1}^n j^2$,$s(n)=n^2(\frac{1}{3}\phi(n)+\frac{1}{2}\sum_{d|n}\mu(d)+\frac{1}{6n}\prod_{p|n}(1-p))$

{% note info no-icon Proof %}

通过和n的gcd来分类

$\frac{1}{n^2}\sum_{j=1}^nj^2$

$=\frac{1}{n^2}\sum_{d|n}\sum_{j\in[1,n],\gcd(j,n)=d} j^2$

$=\frac{1}{n^2}\sum_{d|n}\sum_{i \in[1,\frac{n}{d}],\gcd(i,\frac{n}{d})=1} (id)^2$

$=\sum_{d|n}\frac{d^2}{n^2}\sum_{i \in[1,\frac{n}{d}],\gcd(i,\frac{n}{d})=1} i^2$

$=\sum_{d|n}\frac{s(\frac{n}{d})}{(\frac{n}{d})^2}$

$=\sum_{d|n}\frac{s(d)}{d^2}$

$s * e_2 = \sum_{j=1}^n j^2 = \frac{n(n+1)(2n+1)}{6}=\frac{n^3}{3}+\frac{n^2}{2}+\frac{n}{6}$

$e_2$完全可乘

$e_2^{-1} = \mu e_2$

$s = s * e_2 * e_2^{-1} = (\frac{n^3}{3}+\frac{n^2}{2}+\frac{n}{6}) * (\mu e_2)$

$=\sum_{d|n} (\frac{n^3}{3d^3}\mu(d)d^2+\frac{n^2}{2d^2}\mu(d)d^2+\frac{n}{6d}\mu(d)d^2)$

$=\frac{n^2}{3} (\mu * e) +\frac{n^2}{2}(\sum_{d|n}\mu(d))+\frac{n}{6}\sum_{d|n}\mu(d)d$

{% endnote %}

## 16. 求所有使得$\phi(n)= 24$

{% note info no-icon Proof %}

$\phi(n)=n\prod_{p|n}\frac{p-1}{p}$

所以考察所有$24$的因数+1的质因子$2,3,5,7,13$的组合情况

又注意到$\phi$是可乘函数$24=2^33$

$\phi(2)=1,\phi(2^2)=2,\phi(2^3)=4,\phi(2^4)=8$

$\phi(3)=2,\phi(3^2)=6,\phi(3^3)=4$

$\phi(5)=4$

$\phi(7)=6$

$\phi(13)=12$

所以有$13\cdot 3,13\cdot 3\cdot 2,13\cdot 2^2\cdots$

{% endnote %}

## 17. 证明$n$为合数时$\phi(n)\le n-\sqrt{n}$ 

{% note info no-icon Proof %}

$\phi(n)=n\prod_{p|n}(1-\frac{1}{p}) \le n(1-\frac{1}{p}) \le n(1-\frac{1}{\sqrt{n}}) = n-\sqrt{n}$

{% endnote %}

## 25. $d$为自然数,$x\ge 1$,则$\displaystyle \sum_{m\le x,\gcd(m,d)=1} \frac{\mu^2(m)}{\phi(m)}\ge \frac{\phi(d)}{d} \log([x]+1)$


{% note info no-icon Proof %}

定义函数$f(n) = \prod_{p|n} p$相当于$n$中所有质因子的乘积

$\displaystyle \sum_{m\le x,\gcd(m,d)=1} \frac{\mu^2(m)}{\phi(m)}$

$\displaystyle =\sum_{m\le x,\gcd(m,d)=1,f(m)=m} \prod_{p|m} \frac{1}{p-1}$, $m$中所有质数幂次不大于1

$\displaystyle =\sum_{m\le x,\gcd(m,d)=1,f(m)=m} \prod_{p|m} \frac{\frac{1}{p}}{1-\frac{1}{p}}$, 变成等比数列和的形式

$\displaystyle =\sum_{m\le x,\gcd(m,d)=1,f(m)=m} \prod_{p|m} \sum_{k\ge 1}\frac{1}{p^k}$, 等比数列

$\displaystyle =\sum_{m\le x,\gcd(m,d)=1,f(m)=m} \sum_{f(n)=m}\frac{1}{n}$, 后面的乘法展开

$\displaystyle \ge \sum_{m\le x,\gcd(m,d)=1,f(m)=m} \sum_{f(n)=m,n\le y}\frac{1}{n}$, 控制范围, 暂时不知道$y$取多少合适

$\displaystyle = \sum_{n \le y,\gcd(n,d)=1} \frac{1}{n} \sum_{m=f(m)=f(n),m\le x} 1$, 交换顺序

$\displaystyle = \sum_{n \le y,\gcd(n,d)=1} \frac{1}{n}$, 右侧只有唯一$m$,这里看出需要保证$y\le x$才能保证右侧都是1

$\displaystyle = \frac{\phi(d)}{d}\prod_{p|d}\frac{1}{1-\frac{1}{p}}\sum_{n \le y,\gcd(n,d)=1} \frac{1}{n}$, 向要证明的靠拢,拆1

$\displaystyle = \frac{\phi(d)}{d}(\prod_{p|d}\sum_{k\ge 0} \frac{1}{p^k})\sum_{n \le y,\gcd(n,d)=1} \frac{1}{n}$, 同样等比数列求和

$\displaystyle = \frac{\phi(d)}{d}(\sum_{f(q) | f(d) } \frac{1}{q})\sum_{n \le y,\gcd(n,d)=1} \frac{1}{n}$, 同样等比数列求和

$\displaystyle = \frac{\phi(d)}{d} \sum_{f(q) | f(d) } \sum_{n \le y,\gcd(n,d)=1} \frac{1}{nq}$, 乘开

$\displaystyle \ge \frac{\phi(d)}{d} \sum_{t\le x}\frac{1}{t}$, 这里看出,任何一个$\le x$的有且只有唯一的拆解,拆解成是$d$的质因子的幂次的乘积(q贡献) 和 其余部分(n贡献), 而大于$x$的直接舍去, 所以取$y=x$, 而上面其实需要$y\le x$所以范围还算很紧

$\displaystyle \ge \frac{\phi(d)}{d} \log([x]+1)$

{% endnote %}