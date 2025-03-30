---
title: Walter Rudin 数学分析原理 5 微分法
date: 2025-02-17
categories:
  - 数学分析
tags:
  - 微积分
  - 数学分析
---

isbn
- 中文 9787111134176
- 英文 9787111619543


<!--more-->

## 微分法 differentiation

### 实函数中的导数 the derivative of a real function

5.1 Let f be defined (and real-valued) on `[a,b]`, For any x in `[a,b]` form the quotient
- $\phi(t)=\frac{f(t)-f(x)}{t-x}, a < t < b,t\neq x$
- define: $f'(x)=\lim_{t\to x} \phi(t)$ 需要右侧存在， called the derivative导函数 of f 
- 如果 $f'(x)$ 在点x定义, 称f is differentiable at x, 如果 逐点 differentiable, 则称E上 differentiable
- 类似的，可以在点讨论 导函数左右极限，可以引出左导数右导数

5.2 f定义在`[a,b]`上, 如果f在点$x\in[a,b]$可微, 那么f在x点连续
- f(t)-f(x)=f'(x) (t-x), 可微左边f'(x)对于给定x是常数，所以 趋于0

5.3 定理 f和g定义在$[a,b]$上，并且都在点$x\in[a,b]$可微，那么 加法，乘法，除法 也可微并且有
- (f+g)'=f'+g'
- (fg)'=f'g+fg'
- (f/g)'=f'/g-fg'/g^2

5.5 链式
- (f(g(x)))'=f'(g(x)) g'(x)
- 这里前面是 f的导函数，在点g(x)处的导数值

### 中值定理 mean value theorems

5.7 f是定义在度量空间X上的实值函数，称f在点$p\in X$取得局部极大值，如果存在着$\delta > 0$
- 当$d(p,q) < \delta$时,且$q\in X$时，有$f(q)\le f(p)$
- 类似的定义局部极小值

5.8 f定义在$[a,b]$上, $x\in [a,b]$如果f在x点取得局部极大值,$f'(x)$存在,$f'(x)=0$,
- proof 也就是左导数 <=0, 右导数>=0,要相等只能=0


这里中文原书第3版,2004.1(2024.4 重印 第一版)，有错误，漏掉了g（勘误），英文版是对的

5.9 f和g是`[a,b]`上连续实函数，在(a,b)中可微，那么便有一点$x\in(a,b)$ 使得
- $[f(b)-f(a)]g'(x)=[g(b)-g(a)]f'(x)$
- 并不要求在断电上可微
- $h(t)=[f(b)-f(a)]g(t)-[g(b)-g(a)]f(t)$,
- h在 闭区间上连续，在开区间上可微，且 $h(a)=h(b)$
	- 只需要证明存在一点 $h'(t)=0$, 若为常数则每点满足
	- 若有点 大于端点，4.16（紧度量空间上连续函数 存在点使f能取到最大值），所以最大值点能取到，且导数为0
	- 若有点 小于端点 类似的
	- 这叫 一般中值定理generalized mean value theorem
- 注意 在值域是复数域时会失效 稍后的 5.17

5.10 更常用的退化中值定理
- f(b)-f(a)=(b-a)f'(x), 也就是g(x)=x

5.11 f在(a,b)可微
- f'(x) >=0 单调递增
- f'(x) =0 常函数
- f'(x) <=0 单调递减

### 导数的连续性 the continuity of derivatives

$f(x)=x^2sin(1/x),f(0)=0$是 处处导数存在，但导函数不连续的函数

5.12 f是`[a,b]`上的实值可微函数，再设 $f'(a) < \lambda < f'(b)$, 那必有一点 $f'(x)=\lambda$
- $g(t)=f(t)-\lambda t$
- g'(a) < 0 , g'(b) > 0,所以 分别存在$g(t_1) < g(a),g(t_2) < g(b)$, 也就是存在点 小于左端点，存在点小于右端点
- 所以在极小值点x（4.16可达到）， g'(x)=0,从而可以取到
- 而这个性质，并没有要求导函数连续，只需要f处处可微
- 推论 f在`[a,b]`上可微，那么f'在`[a,b]`上便不能有`简单间断`, 
	- 但是 f'很可能有第二类间断

### L'Hospital 法则 rule

洛必达法则, 在求极限时时常用到

5.13 假设是函数f和g在(a,b)内可微，而且对于所有$x\in(a,b),g'(x)\neq 0$,这里 $-\infty \le a < b \le \infty$ 
- 已知 $x\to a$时, $\frac{f'(x)}{g'(x)}\to A$
- 如果$x\to a$时, $f(x)\to 0,g(x)\to 0$
- 那么 $x\to a$时, $\frac{f(x)}{g(x)}\to A$
- 也就是 在某点，函数导数之比有极限，且原函数均趋于0,那么原函数之比也趋于这个极限
	- 对于 原函数 均趋于无穷时，也有这个
- proof, 证明思路: 
	- 任意q_1满足 A < q_1，能找到c_1, 使得所有x满足  a < x < c_1 有 f(x)/g(x) < q_1, 这里通过5.9找存在点
	- 从另一侧 , q_2 < A,也能 a < x < c_2 使得 q_2 < f(x)/g(x)
	- 从而 可以控制 x与a的距离 来 控制 f(x)/g(x)与A的距离，也就是趋于A

### 高阶导数 Derivatives of higher order

5.14 导数本身是一种函数，直接导数定义为1阶导数，n阶导数是对于n-1阶导数的 求导函数，
- 需要注意 求的时候，需要 上一阶在那一点可微
- 记作 $f^{(n)}$

### Taylor定理 Taylor's theorem

5.15 suppose f is a real function on `[a,b]`, n是正整数, $f^{(n-1)}$在$[a,b]$上连续， $f^{(n)}$在$(a,b)$出处存在,$\alpha,\beta$在$[a,b]$是不同的点
- $P(t)=\sum_{k=0}^{n-1} \frac{f^{(k)}(\alpha)}{k!}(t-\alpha)^k$ 
- 那么存在处于$\alpha,\beta$之间的点x, $f(\beta)=P(\beta)+\frac{f^{(n)}(x)}{n!}(\beta-\alpha)^n$ <---要证明
- n=1时是中值定理
- 说明f能被 n-1次多项式逼近
- 如果知道 $|f^{(n)}(x)|$上界，还能做误差估计
- 
- 令$M=\frac{f(\beta)-P(\beta)}{(\beta-\alpha)^n}$
- 令$g(t)=f(t)-P(t)-M(t-\alpha)^n$
	- $g^{(n)}(t)=f^{(n)}(t)-n!M$
	- 这里 如果有x $g^{(n)}(x)=0$,那么 $M=\frac{f^{(n)}(x)}{n!}$, 再根据M的令，可以证明 上面要证明的存在性
	- 根据M定义，带入显然$g(\beta)=0$
	- 根据P的定义，$g^{(m=0\cdots n-1)}(\alpha)=(f^{(m)}-P^{(m)})(x) - M((x-\alpha)^n)^{(m)} |_{x=\alpha}$
		- $=0-0=0$
	- 这里之间 ，因为不知道$\alpha,\beta$大小
	- $\alpha,\beta$之间存在点$x_1,g'(x_1)=0$
	- $\alpha,x_1$之间存在点$x_2,g^{(2)}(x_2)=0$
	- 如此
	- $\alpha,x_{n-1}$之间存在点$x_n,g^{(n)}(x_n)=0$

###  向量值函数的微分法 Differentiation of vector-valued functions

5.16 考虑f是在`[a,b]`上的复值函数
- 5.1 导数定义一样
- 5.2 导数存在 则连续 也类似
- 5.3 导函数 四则运算的 也一样
- $f_1,f_2$分别是$f$的实部和虚部
	- $f(t)=f_1(t)+f_2(t)$
	- f在点x可微，当且仅当 $f_1,f_2$ 可微
	- 实值的极限是控制距离/半径，复数里也是控制 半径，或者范数norm
- 更一般的，$f$把$[a,b]$映入into $\mathbb{R}^k$
	- 5.1 同样定义$f'(x)$, 但注意$f'(x)$不是实数，而是$\mathbb{R}^k$中的一个点
		- $\lim_{t\to x} |\frac{f(t)-f(x)}{t-x}-f'(x)|=0$, 这里的绝对值符号 用的是norm 范数 
	- $f'=(f'_1,\cdots,f'_k)$那么f可微，当且仅当 所有$f_i$可微
	- 5.2 存在连续也类似
	- 5.3 四则运算，其中函数的乘积 用内积替换，再多个数乘
- 而者也有 不满足 的 例如 中值定理，L'Hospital 

5.17 中值定理失效例子 $f(x)=e^{ix}=\cos x+i\sin x$
- 作为复指数幂的定义
- $f(2\pi)-f(0)=1-1=0$
	- $f'(x)=ie^{ix}$
	- $|f'(x)|=1$ 范数
	- 所以中值定理失效
		- 回顾中值定理，的感觉是构造函数 两端=0，中间连续可取到，而极值点的导数=0,另外，极值点的导数=0是通过，点左右导数 一侧 >=0, 另一侧 <=0
		- 而这里，值在复数上连续，首先没有所谓的极值点。
		- 这种甚至在3维中可以画图，正好输入是实数轴，复平面垂直实轴，看起来像弹簧的形状，而变换的感觉就是物理中绳子挂着小球转圈，绳子给小球的向心拉力，让小球做圆周运动，所以等大向心
		- $(f(a)-f(b))/(a-b)$ 如果要看到空间中,向一条直直向量

5.18 L'Hospital失效例子
- $(0,1)$, $f(x)=x,g(x)=x+x^2e^{i/x^2}$
- $\lim_{x\to 0} \frac{f(x)}{g(x)}=1$
- $\lim_{x\to 0} \frac{f'(x)}{g'(x)}=0$ , $g'(x)_{x\to 0}\neq 0$

5.19 $f: [a,b] \mapsto\mathbb{R}^k$ 连续映射, $(a,b)$内可微
- 存在$x \in (a,b)$ , $|f(b)-f(a)|\le (b-a)|f'(x)|$
- proof $z=f(b)-f(a)$
	- 令$\phi(t)=z \cdot f(t), a\le t\le b$, 这里 定义时用的 向量z 与 向量f(t)的点积
	- 这样$\phi(t)$是$[a,b]$上 连续的实值函数
	- 根据中值定理 存在 $\phi(b)-\phi(a)=(b-a)\phi'(x)=(b-a) z \cdot f'(x)$
		- 另一方面$\phi(b)-\phi(a)=z\cdot f(b)-z\cdot f(a)=z \cdot(f(b)-f(a))=z\cdot z=|z|^2$
		- $|z|^2=(b-a)z\cdot f'(x)\le (b-a) |z| |f'(x)|$, 使用 Schwarz不等式
		- 证毕

## Riemann-Stieltjes 积分integral

先讨论区间上实值函数的积分，
- 后面推广到区间上的复值和向量值函数的积分
- 10～11章 再讨论在不是区间上的积分
