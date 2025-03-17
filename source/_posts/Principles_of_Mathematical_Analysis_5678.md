---
title: Walter Rudin 数学分析原理
date: 2025-01-31
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

### 积分的定义和存在性 definition and existence of the integral

6.1 let `[a,b]` be a given interval. by a partition P of [a,b] we mean a finite set of points $x_0,\cdots,x_n$ where
- $a = x_0 \le x_1 \le \cdots \le x_{n-1} \le x_n=b$
- 令 $\Delta x_i=x_i-x_{i-1}$
- 假设f is a bounded real function defined on [a,b]. Corresponding to each partition P of [a,b] we put
- $M_i=\sup f(x)$ $x_{i-1}\le x \le x_i$ 每个区间上确界
- $m_i=\inf f(x)$ $x_{i-1}\le x \le x_i$ 每个区间下确界
	- $U(P,f)=\sum_{i=1}^n M_i\Delta x_i$  这个和不小于原来的 面积, 上和 上积分
	- $L(P,f)=\sum_{i=1}^n m_i\Delta x_i$ 这个和不大于原来的 面积，下和 下积分
	- $\bar{\int_a^b} f dx = \inf U(P,f)$ 上和的下确界, 称作 upper Riemann integrals of f
	- $\underline{\int}_a^b f dx = \sup L(P,f)$ 下和的上确界 ,称作 lower Riemann integrals of f (这个tex怎么打啊??
	- over `[a,b]`
	- 如果 upper = lower ,那么 称f is Riemann-integrable on [a,b] ,  $f\in \mathscr{R}$ ,, (mathscr)
		- 记作$\int_a^b f(x) dx$
		- 因为假设 $f$ is a bounded real function, 所以存在$m,M$, 使得$m \le f([a,b])\le M$
		- $m(b-a)\le L(P,f)\le U(P,f) \le M(b-a)$ 注意的是，这个条件 并不要求 黎曼积分存在，这是描述f上下界与 下和 上和 的大小关系
			- 也就是有界函数f,上积分和下积分都有定义

6.2 设g是`[a,b]` 上一个单调递增函数，g(a),g(b)有限，所以g在[a,b]上有界, 对于a,b的每个分割法P
- $\Delta g_i=g(x_i)-g(x_{i-1}) \ge 0$
- $U(P,f,g)=\sum_{i=1}^n M_i \Delta g_i$
- $L(P,f,g)=\sum_{i=1}^n m_i \Delta g_i$
- 定义 $\bar{\int}_a^b f d g=\inf_{P} U(P,f,g)$
- 定义 $\underline{\int}_a^b f d g=\sup_P L(P,f,g)$
	- 如果相等记作 $\int_a^b f(x)dg(x)$ , 或 $\int_a^b fdg$， 注意结果和x无关，这里x只表示两个函数入参一致和从a到b, x换成y也相同的结果
	- 也就是[a,b]上f关于g的Riemann-Stieltjes 积分
	- f关于g在Riemann意义上可积，记作$f\in\mathscr{R}(g)$

6.3 partition $P^*$ is a refinement(加细，细分) of P, if $P^* \supset P$ (P的每个切割点都在$P^*$)中, 
- $P^*=P_1\cup P_2$, say $P^*$ is their common refinement 共同加细

6.4 
- $L(P,f,g)\le L(P^*,f,g)$
- $U(P^*,f,g)\le U(P,f,g)$
- 加细 让 上和 下和 有更靠近的趋势
- proof 每次多加一个点的角度考虑，另一方面，对于细分的一个具体 $[x_{i-1},x_i]$可以看成是未切分而有上下界（bounded f,6.1而加细，看成是切分，同样可以证明

6.5 $\underline{\int}_a^b fdg=\bar{\int}_a^b fdg$
- proof $P^{*}=P_1\cup P_2$
	- $L(P_1,f,g)\le L(P^*,f,g) \le U(P^*,f,g)\le U(P_2,f,g)$
	- 对于任意给定$P_1$遍历$P_2$
		- $L(P_1,f,g)\le \bar{\int}_a^bfdg$
		- 再遍历所有$P_1$得证

6.6  $f\in\mathscr{R}$ on $[a,b]$ if and only if for every $\epsilon > 0$ there exists a partition P such that
- $U(P,f,g)-L(P,f,a) < \epsilon$
- 也就是任意目标上下界距离，可以通过 给定具体分化来达成
- 这里注意到 虽然任意近了，但是分化之间的关联没有，而分化之间管理，通过上面的加细动作可以完成
- 距离 到 更小距离时， 记老分化$P_0$, 新分化$P_1$,而 我们取$P_1'=P_0\cup P_1$ 这样 同时满足了更小距离，也满足了值的不等式串联k
	- $L(P_0,f,g)\le L(P_1',f,g) \le U(P_1',f,g)\le U(P_0,f,g)$
- 不过这里证明的 还是按照 上面6.2的 存在的定义来证明
- 这个充要 之后证明会用到，也就是证明大和小和的差距可以任意小

6.7
- epsilon 在P成立
	- 那么对P加细后依然成立
	- $\sum_{i=1}^n |f(s_i)-f(t_i)|\Delta g_i < \epsilon$ 其中$s_i,t_i$是$[x_{i-1},x_i]$内任意点,  每段里面 差$\le M_i-m_i$ 
	- 如果 $f\in\mathscr{R}(g)$  那么 $|\sum_{i=1}^n f(t_i)\Delta g_i -\int_a^b f d g| < \epsilon$
		- $L(P,f,g) \le \sum f(t_i)\Delta g_i \le U(P,f,g)$
		- $L(P,f,g) \le \int fdg \le U(P,f,g)$

6.8 if f is continuous on [a,b] then $f\in \mathscr{R}(g) on [a,b]$
- 取$\eta [g(b)-g(a)] < \epsilon$
- 4.19 f 是 一致连续, 存在 $\delta$控制 x,t距离时 $|f(x)-f(t)|<\eta$, (这里用到了 “一致连续")
	- 所以 如果划分P的所有$\Delta x_i < \delta$，那么每个划分区间中 $M_i-m_i\le eta$
	- $U(P,f,g)-L(P,f,g)=\sum_{i=1}^n(M_i-m_i)\Delta g_i\le \eta \sum_{i=1}^n\Delta g_i=\eta[g(b)-g(a)] < \epsilon$
	- 也就有 $f\in \mathscr{R}(g)$

6.9 $[a,b]$上 f单调monotonic，g单调连续(本来g就要单调递增), $f\in \mathscr{R}(g)$
- 假设单增（单减类似）
- 切割 直接 (g(b)-g(a))/n的g的值来切割x,也就是 $\Delta g_i = g(x_i)-g(x_{i-1})=(g(b)-g(a))/n$
- 这样$U-L=\Delta \sum {M_i-m_i}=\Delta \sum f(x_i)-f(x_{i-1})=\Delta (f(b)-f(a)) < \epsilon$ 可通过控制n来控制

6.10 $[a,b]$上f有界， f有限多个点 不连续，这些点的对应位置g是连续的，那么$f\in \mathscr{R}(g)$
- M= sup |f|
- E=f的不连续点, n=|E|点个数
- 对于任意epsilon
- 每个点不连续点切割邻域，保证
	- 邻域内g连续
	- 任意两个邻域之间不覆盖
	- 邻域内g的增量 < epsilon / n
- 对于邻域外的点, `[a,b]`去掉所有邻域是 紧的，f在上面一致连续，存在 控制$x$范围$\delta$控制$f$变化范围$< \epsilon$，所以邻域外的点按照不超过$\delta$切割
- $U-L=\sum (M_i-m_i) \Delta g_i$
	- $=(\sum_\delta (M_i-m_i)\Delta g_i)+(\sum_{\epsilon/n} (M_i-m_i)\Delta g_i)$ 分别为邻域外的点和邻域内的点
	- 邻域外的点 $\le (\sum_\delta \epsilon \Delta g_i) \le (\sum \epsilon \Delta g_i) = \epsilon (g(b)-g(a))$
	- 邻域内的点 $\le (\sum_{\epsilon /n} 2M \Delta g_i) \le 2M \epsilon$
	- 这里 $M,g(b),g(a)$都是定值，因此可以任意小
- 那么 反例:
- f,g 在 $[-1,1]$上定义,$g(x) = \text{sign}(x)$, 也就是取符号，-1,0,1 满足单调性
- $f = 2g$
- 容易看出在非零点的 划分不影响，着重看零点的划分
	- $[x_1,0][0,x_2], x_1<0<x_2$
	- $U(P,f,g) - L(P,f,g)$ 在这两个划分里的贡献是 $\sum (M_i-m_i) \Delta g_i$
		- $= (0-(-2))\cdot (0-(-1)) + (2-0)\cdot (1-0)$ 
		- $= 4 > 0$ 也就是 与具体的$x_1,x_2$选取无关，这里的距离不会趋于无穷小
- 对于 高等数学中，一般来说 我们的 $g(x)=x$ 

6.11 $[a,b]$上 $f\in \mathscr{R}(g)$ , $m\le f\le M$,$\phi$在$[m,M]$上连续，并且在$[a,b]$上 $h(x)=\phi(f(x))$,那么在$[a,b]$上$h\in\mathscr{R}(g)$
- 也就是$[a,b]$上  复合函数： 连续(黎曼可积) 是 黎曼可积 的
- 和6.10类似的思路
- $U(P,\phi,g)-L(P,\phi,g)=(\sum_A (M_i-m_i)\Delta g_i)+(\sum_B (M_i-m_i)\Delta g_i)$
	- 这里 $M,m$是关于$\phi$的
	- 我们希望一边是通过控制 $M_i-m_i$的范围，另一边是通过控制$\sum \Delta g_i$的范围
		- 这样一边是 $范围 \cdot (g(b)-g(a))$另一边是 $2K \cdot 范围$, 其中$|\phi|\le K$
	- 按照这个思路 如何控制$M_i-m_i$的范围呢?
		- $\phi$ 一致连续，可以控制 f的距离$\delta$ 控制 $\phi$的距离
		- 所以如果 切割P能控制 f的距离$\delta$ 就可以 控制 $\phi$的距离
	- 对于没有控制的段，有 段内距离 $>\delta$
		- $\delta \sum_{没有控制到f的切割段} \Delta g_i < U(P,f,g)-L(P,f,g) =$任意值, 因为f是关于g黎曼可积
		- 所以这里任意值，可以取$\delta\epsilon$或者 $\frac{\delta \epsilon}{2K}$， 书上用的是$\delta^2$且$\delta < \epsilon$, 不过这都不影响，因为$\delta$的值是 控制f 能控制 phi 在delta内的，所以这里任何$h(\epsilon,\delta,K)$都是可以的, 最终向上针对目标尽量仅有$\epsilon$
		- 从而 控制了$\sum \Delta g_i$
			- 这部分 的控制相对难想一点
	- 所以又变成 $\epsilon(g(b)-g(a))+2K\epsilon$ 根据任意性可控
- 11.33(b)给出什么样的函数 恰好 黎曼可积

### 积分的性质 properties of the integral

6.12 定理
- 如果在$[a,b]$ 上$f_1\in \mathscr{R}(g)$且$f_2\in \mathscr{R}(g)$那么 $f_1,f_2\in \mathscr{R}(g)$, 对于任意常数$c$有$cf\in\mathscr{R}(g)$
	- $\int_{a}^b (f_1+f_2)dg=\int_{a}^bf_1dg+\int_a^bf_2dg$
		- $L(f_1)+L(f_2)\le L(f)\le U(f)\le U(f_1)+U(f_2)$
	- $c\int_{a}^b fdg=\int_{a}^b cfdg$
	- 也就是 四则运算中的 加（减）和 数乘，的保持
- $[a,b]$上$f_1(x)\le f_2(x)$那么 $\int_a^bf_1dg\le \int_a^b f_2dg$ 也就是有序性
- $a<c<b$ 那么在$[a,c],[c,b]$上$f\in\mathscr{R}(g)$且$\int_a^c fdg+\int_c^bfdg=\int_a^bfdg$ 拆分及分段
- $|f(x)|\le M$, 那么$|\int_a^b fdg|\le M[g(b)-g(a)]$
- $f\in \mathscr{R}(g_1),f\in \mathscr{R}(g_2)$那么$f\in \mathscr{R}(g_1+g_2)$, 并且 $\int_a^b f d(g_1+g_2)=\int_a^bfdg_1+\int_a^bfdg_2$ 拆解"积"的部分
	
6.13 
- $fg\in \mathscr{R}(g)$
	- 6.11 复合 的黎曼可积，因为$\phi(x)=x^2 \in\mathscr{R}(\alpha)$, 所以若 $f\in\mathscr{R}(\alpha)$则$f^2=\phi(f)\in\mathscr{R}(\alpha)$
	- $fg=1/4((f+g)^2-(f-g)^2)$得证
- 勘误 这里中文版又打错了
	- $|f|\in\mathscr{R}(g)$且$|\int_a^bfdg|\le \int_a^b |f|dg$
	- $\phi(x)=|x|\in\mathscr{R}(\alpha)$
	- 左侧=$\int f$或$-\int f$,也就是 $c\int f$,其中$c=1$或$c=-1$
	- 左侧$=c\int f=\int cf \le$右侧, （因为6.12中有序性的保持$cf \le |f|$)

6.14 单位阶跃函数I的定义是
- $I(x)=[x > 0]$

6.15 $a<s<b$, f在$[a,b]$上有界, f在s点连续,而$\alpha(x)=I(x-s)$ 那么
- $\int_a^bfd\alpha=f(s)$
- 这里$\alpha(x)=[x>s]$, f在s连续，根据 定义 大小和都是 $\sum m_i/M_i\Delta \alpha_i$ 的形式，那么这里$\Delta\alpha_i$要非零的部分只有含有s点及正向邻域的区间
	- 也就是任意切割如果没有在s切断，那么细分到s有了$[s,s+ds]$ 只有这个有贡献, f在s点连续, 可以控制ds来控制$m_i,M_i$到$f(s)$的距离，所以，这$m_i,M_i$的距离也可以任意被控制，
- 6.16 $c_n\ge 0,\sum c_n$ 收敛, {$s_n$}是$(a,b)$之内一串不同的点,且$\alpha(x)=\sum_{n=1}^{\infty} c_nI(x-s_n)$, $f在[a,b]$上连续
	- $\int_a^bfd\alpha=\sum_{n=1}^{\infty}c_n f(s_n)$
	- 比较收敛法，对于每个x收敛，$\alpha(x)$显然单调的$\alpha(a)=0,\alpha(b)=\sum c_n$
	- 任意$\epsilon >0$,可以控制$N$满足$\sum_{N+1}^{\infty} c_n < \epsilon$
		- 从而 拆成$\alpha_1=\sum_{n=1}^N,\alpha_2=\sum_{n=N+1}^{\infty}$
			- 前一半 有限的运算能得到$\sum_{n=1}^Nc_nf(s_n)$ 勘误这里写成i了
			- 后一半，利用f的有限M,和控制的epsilon，
			- 于是 $|\int_a^b fd\alpha -\sum_{n=1}^Nc_nf(s_n)|\le M\epsilon$ 其中N可以任意更大，可以趋于无穷，右边是任意目标


6.17 若$\alpha$单调递增在$[a,b]$上$\alpha'\in\mathscr{R}$，设$f$是$[a,b]$上的有界实函数,于是$f\in\mathscr{R}(\alpha)$当且仅当$f\alpha'\in\mathscr{R}$, 这时候
- $\int_a^b fd\alpha=\int_a^bf(x)\alpha'(x)dx$ 也就是建立变量dx和$d\alpha$的关系
- 6.6 $f\in \mathscr{R}(\alpha)$则任意$\epsilon > 0$存在分法$U(P,\alpha')-L(P,\alpha')<\epsilon$
	- 中值定理$t_i\in[x_{i-1},x_i]$使得$\Delta\alpha_i=\alpha'(t_i)\Delta x_i$
- 6.7(b) 若$s_i\in[x_i,x_i]$那么$\sum |\alpha'(s_i)-\alpha'(t_i)|\Delta x_i<\epsilon$
- 令$M=\sup |f(x)|$ 
- $\sum f(s_i)\Delta \alpha_i=\sum f(s_i)\alpha'(t_i)\Delta x_i$
- $|\sum f(s_i)\Delta \alpha_i - \sum f(s_i)\alpha'(s_i)\Delta x_i|$ 绝对值不等式
	- $=|\sum f(s_i)\alpha'(t_i)\Delta x_i- \sum f(s_i)\alpha'(s_i)\Delta x_i|$
	- $=|\sum f(s_i)(\alpha'(t_i)-\alpha'(s_i))\Delta x_i|$
	- $\le M\epsilon$
	- 对于$s_i$的一切选取法
	- $\sum f(s_i)\Delta \alpha_i\le U(P,f\alpha')+M\epsilon$ 根据绝对值不等式
	- 所以 $U(P,f,\alpha)\le U(P,f\alpha')+M\epsilon$,或者说右边的 $\alpha_{right}(x)=x$
	- 同样 根据绝对值不等式 $U(P,f\alpha')\le U(P,f,\alpha)+M\epsilon$, ？？？为啥要这样搞，上面绝对值不等式说明可以任意靠近不就好了吗？哦 意思是绝对值 里面是$\sum$ 不能直接换成$U$, 这里转出来说明两个U可以无限接近
	- 从而 证明 两个的上积分（大和）可以任意接近，所以相对。类似的可以证明下和

6.18 评注 Stieltjes积分方法所固有的普遍性和适应性
- 如果$\alpha$是纯跃阶函数，那么就变成6.16 形式本质是有限或无限的级数
- 如果$\alpha$有可积的导数，就变成普通的Riemann积分（大多数教材教的）
	- 例子 惯性矩 $\int x^2 dm$,质量函数$m$的导数是密度$\rho$, $x^2\rho dx$

6.19 换元
- $\varphi(x)$是严格递增的连续函数，它把闭区间$[A,B]$ onto $[a,b]$假设$\alpha$在$[a,b]$上单调递增，而且在$[a,b]$上$f\in\mathscr{R}(\alpha)$在$[a,b]$上
- $\beta(y)=\alpha(\varphi(y)),g(y)=f(\varphi(y))$,那么$g\in\mathscr{R}(\beta)$ 且
- $\int_A^B gd\beta =\int_a^bfd\alpha$ （要证明
- 证明:
	- $\varphi: [A,B]\mapsto [a,b]$且严格单调递增
	- $[a,b]$的分法P有$[A,B]$的分发Q对应，其中分割点通过$\varphi$ 保持对应$y_i=\varphi(x_i \in[A,B])\in [a,b]$
	- $U(Q,g,\beta)=\sum g(x_i)\Delta \beta_i = \sum f(y_i=\varphi(x_i))\Delta \alpha_i(\varphi(x_i))=U(P,f,\alpha)$, 这里 $f,g$都要取到区间最小值，所以选择$x_i$始终可以一样
	- 上界类似 $L(Q,g,\beta)=L(P,f,\alpha)$ 这里的感觉是，不同的 入参的 切割点，而不同的切割点下 $\sum$每一段的取值情况$g_i=f_i,\Delta \alpha_i =\Delta \beta_i$
	- 两边的划分 都可以足够靠近 它们分别的 积分定义，所以证明了两边相等
- 特殊的$\alpha(x)=x,\beta=\varphi$ 假设$[A,B]$上$\varphi'\in\mathscr{R}$,
	- $\int_a^b f(x)dx=\int_a^b f(x)\alpha'(x)dx$ 利用 特殊的$\alpha'(x)=1$
	- $=\int_a^b fd\alpha$ 根据6.17
	- $=\int_A^B f(\varphi(y)) d \varphi$ 根据6.19
	- $=\int_A^Bf(\varphi(y))\varphi'(y)dy$ 根据6.17

### 积分与微分 integration and differentiation

在实函数内，在某种意义上是互逆运算, we shall show that integration and differentiation are , in a certain sense, inverse operations

6.20 $[a,b]$上$f\in\mathscr{R}$ 对于$a\le x\le b$令$F(x)=\int_a^x f(t)dt$, 那么$F$在$[a,b]$上连续, 如果$f$又在$[a,b]$上$x_0$点连续,那么$F$在该点可微且$F'(x_0)=f(x_0)$
- 黎曼可积，有界，被M控制，$|F(y)-F(x)|\le M(y-x)$ 可以控制入参距离来控制结果的距离（实际上是一致连续）
- $|\frac{F(t)-F(s)}{t-s}-f(x_0)|=|\frac{1}{t-s}\int_s^t[f(u)-f(x_0)]du|$, 其中$s < x_0 < t$
	- 目标很明确，要能通过控制$x_0$邻域来控制上面表达式能任意小,f的连续 让 |f(u)-f(x_0)|可被控制，根据6.12d 上面的也可以被控制

6.21 微积分基本定理 the fundamental theorem of calculus
- $[a,b]$上f黎曼可积, $F$ on $[a,b]$可导,且F'=f那么
- $\int_a^b f(x) dx=F(b)-F(a)$
- 分析学里等号不是“等号，一样的意思，而更多是定义下的值相等“
	- 所以这里还是证明左右两边可以任意接近
- 这里和6.20不太一样的前提，上面是通过f和黎曼积分定义出的F,这样定义出的F的导数会等于原来对应点f的值
	- 而6.21是说，F‘=f和，也就是F不是通过f定义出来的，要证明的的是 黎曼积分的结果 = 端点的总变化量
	- 再或者说6.20的F是一个 特殊的积分结果 F(a)=0
	- 而这里F 是一个不定积分的某个具体F
- 6.7c: 对于给定距离指标$\epsilon >0$,对于分割P, 上下和的距离满足该指标$U-L < \epsilon$，那么每个区间任取$s_i,t_i$得到$\sum |f(s_i)-f(t_i)|\Delta\alpha_i <\epsilon$ 也满足这个指标，并且 $|\sum f(t_i)\Delta \alpha_i - \int_a^b fd\alpha|<\epsilon$ 也就是划分的和的结果，和黎曼积分的值的距离也满足这个指标
- 这里 根据中值定理，因为$t_i$可以任意选取，我们要最终得到$F(b)-F(a)$,我们希望中间是$F(x_i)-F(x_{i-1})=f(t_i)\Delta  x_i$ 而这个根据中值定理可以取到

6.22 分部积分integration by parts 假定F和G 都是$[a,b]$上的可微函数. $F'=f\in \mathscr{R}$且$G'=g\in\mathscr{R}$ Then
- $\int_a^b F(x)g(x)dx=F(b)G(b)-F(a)G(a)-\int_a^bf(x)G(x)dx$
- proof
	- put H(x)=F(x)G(x)
		- 注意到$H'\in\mathscr{R}$(根据6.13)
	- 然后把H带入6.21 就证明完毕 

### 向量值函数的积分 integration of vector-valued functions

6.23 $f: [a,b]\mapsto \mathbb{R}^k$
- 同样是Stieltjes的方法，如果$\alpha$在$[a,b]$上单调递增，那么$f\in \mathscr{R}(\alpha)$
- $\int_a^b fd\alpha=(\int_a^b f_1d\alpha,\cdots,\int_a^b f_k d\alpha)$ 也就是每个维度的$f_i$的stieltjes积分
- 性质，显然
	- 6.12 （向量中没有偏序关系，所以一些值不等式的先跳过
		- a 加法和数乘成立
		- c 积分的分段成立
		- e 关于$\alpha$的拆分成立
	- 6.17 关于$d\alpha$和$dx$的转化 成立
	- 6.20 变成了每个分量的 $F_i$ 成立
	- 6.21 向量分量的微积分基本定理
		- 6.24: $\int_a^b f(t)dt=F(b)-F(a)$ 写起来和6.21看着一样，不过不同的是，这里的f,F上面是$[a,b]\to\mathbb{R}$的，而这$[a,b]\to \mathbb{R}^k$

6.25 $f\in\mathscr{R}(\alpha)$那么$|f|\in\mathscr{R}(\alpha)$ 且$|\int_a^b fd\alpha|\le \int_a^b|f|d\alpha$
- $|f|=(\sum f_i^2)^{1/2}$ norm
	- $f_i\in\mathscr{R},x^2连续,f_i^2\in\mathscr{R},\sum f_i^2\in\mathscr{R},\sqrt{x}连续,f\in\mathscr{R}$
	- 勘误 书上这里f漏了一个加粗（表示向量）
	- 对于左边norm内的用y表示 $y=\int_a^bfd\alpha$, 其中$y_i=\int f_i d\alpha$
	- $|y|^2=\sum y_i^2=\sum y_i \int f_i d\alpha=\int (\sum y_if_i)d\alpha$
		- schwarz不等式 $\sum y_if_i(t) \le |y||f(t)| ,(a\le t \le b)$
		- $|y|^2\le \int |y||f(t)|d\alpha=|y|\int |f(t)|d\alpha$ 
			- y=0那么显然
			- 否则两边同时除以$|y|$ 得证
	

### 可求长曲线 rectifiable curves

k=2 也就是$\mathbb{R}^2$ 情况 研究复变量 解析函数

6.26 将闭区间$[a,b]$ 映入$\mathbb{R}^k$的映射$\gamma$叫做$\mathbb{R}^k$里的曲线.为了重视参数区间$[a,b]$，也可以说$\gamma$是$[a,b]$上的曲线
- 假如$\gamma$是一对一的，$\gamma$就称作弧
- 假如$\gamma(a)=\gamma(b)$就说$\gamma$是闭曲线
- 这里定义的“曲线”是 映射， 而不是点集。 结合着$\mathbb{R}^k$里每个曲线$\gamma$总有$\mathbb{R}^k$的一个子集，即$\gamma$的值域，不同的曲线 可能有 相同的值域
- 对于分法P配置一个数 $\Lambda(P,\gamma)=\sum_{i=1}^n |\gamma(x_i)-\gamma(x_{i-1})|$ ，也就是切割点的距离和，那么这里Lambda就是按照切割下的折线长
	- 这就好多了（之前 各种树上都是 $\sqrt{1+dx^2}$ 总感觉怪怪的
	- $\Lambda(\gamma)=\sup \Lambda(P,\gamma)$
		- 如果$\Lambda < \infty$ 那么$\gamma$就是可求长的

6.27 假如$\gamma'$在$[a,b]$上连续，$\gamma$便是可求长的，而且
- $\Lambda(\gamma)=\int_a^b |\gamma'(t)| dt$
- 证明：
	- 这里用 左右互相 大于等于来证明
	- 正向
		- 6.24 : $|\gamma(x_i)-\gamma(x_{i-1})|=|\int_{x_{i-1}}^{x_i}\gamma'(t)dt|$ , 这里是切割段 端点的 向量变化 的 norm = 导数的向量积分的norm
		- 6.25：$\le \int_{x_{i-1}}^{x_i} |\gamma'(t)|dt$
		- 对于每个分法P: $\Lambda(P,\gamma)\le \int_a^b |\gamma'(t)|dt$
		- $\Lambda(\gamma)=\sup \Lambda(P,\gamma)\le \int_a^b |\gamma'(t)|dt$
	- 反向
		- $\epsilon > 0$ 既然$\gamma'$在$[a,b]$上一致连续,便有$|s-t|<\delta$ 时$|\gamma'(s)-\gamma'(t)|<\epsilon$，也就是$\delta$控制距离能控制$\gamma'$的距离
		- 对于任意满足上面$\delta$控制切割力度的划分P $|\gamma'(t)|\le|\gamma'(x_i)|+\epsilon$ 绝对值不等式
		- $\int_{x_{i-1}}^{x_i}|\gamma'(t)|dt\le |\gamma'(x_i)|\Delta x_i+\epsilon\Delta x_i$
		- $=|\int_{x_{i-1}}^{x_i}[\gamma'(t)+\gamma'(x_i)-\gamma'(t)] dt|+\epsilon\Delta x_i$
		- $\le|\int_{x_{i-1}}^{x_i} \gamma'(t)dt|+|\int_{x_{i-1}}^{x_i}[\gamma'(x_i)-\gamma'(t)] dt|+\epsilon\Delta x_i$ 三角不等式
		- $\le|\gamma'(x_i)-\gamma'(x_{i-1})|+2\epsilon\Delta x_i$  
		- 即 $\int_a^b |\gamma'(t)|dt\le \Lambda(P,\gamma)+2\epsilon(b-a)$
		- $\le \Lambda(\gamma)+2\epsilon(b-a)$
		- 右侧epsilon是任意的

---

> 小总结

这积分 虽然是riemann引入，但是前面通过stieltjes的方法来研究，为后面特殊称Riemann也好，变量替换也好，分部积分也好，研究积分基本定理也好，提供了更好看的基础。

## 函数序列与函数项级数 sequences and series of functions

这一章里 只限于讨论复值函数。

注意力：调换两个极限过程时出现的若干问题（when limit processes are interchanged）

### 主要问题的讨论 discussion of main problem

7.1, n=1,2, {$f_n$}是一个定义在集E上的函数序列，再假设${f_n(x)}$对于每个$x\in E$收敛，可由
- $f(x)=\lim_{n\to\infty} f_n(x)$确定一个函数f
- 称$f_n$在$E$上收敛,f是{$f_n$}的极限limit 或 极限函数limit function
- {$f_n$} converges to f pointwise on E, 在E上逐点收敛到f
- 类似的 $f(x)=\sum_{n=1}^{\infty} f_n(x), x\in E$, 说f是 级数$\sum f_n$的和. f is called the sum of the series $\sum f_n$
- 那么研究什么呢，例如 连续性，可微性，可积 这些性质能否保持，导数的关系
	- 例如连续性: 
		- 点连续 $\lim_{t\to x}f(t)=f(x)$
		- 是否保持连续性 $\lim_{t\to x}\lim_{n\to \infty}f_n(t)=?=\lim_{n\to\infty} \lim_{t \to x}f_n(t)$  或者说这个次序是否影响结果

7.2 一些极限的次序是不能交换的，一些是与极限顺序无关的
- $s_{m,n}=\frac{m}{m+n}$
- 显然交换 极限顺序一个是0,一个是1,不等
- 我在想 这个从感觉上的

7.3 连续函数的收敛级数 可能不连续
- $f_n(x)=\frac{x^2}{(1+x^2)^n}$
- $f(x)=\sum_{n=0}^{\infty}f_n(x)$
	- 在x=0是f(x)=0
	- 在其它点，逐点收敛到$f(x)=1+x^2$

7.4 $f_m(x)=\lim_{n\to\infty} (\cos m! \pi x)^{2n}$
- 所以 $f_m(x)=[m!x \in \mathbb{Z}]$ 也就是判定m!x是否为整数
- $f(x)=\lim_{m\to \infty} f_m(x)$
- 对于每个 无理数x, f(x)=0
- 对于每个有理数x=p/q, 当m>=q时， m!x是整数，所以f(x)=1（逐点）
- 哦，这样也构造出了 Dirichlet函数 ，有点意思
- 处处间断，它不是黎曼可积的

7.5 导数不同样收敛的例子
- x是实数, n=1,2,3,...
- $f_n(x)=\frac{\sin nx}{\sqrt{n}}$
- $f(x)=\lim_{n\to \infty} f_n(x)=0$
- $f'(x)=0$
- $f'_n(x)=\sqrt{n}\cos nx$ 而这个 不收敛到f'(例如点x=0), 这个 $\sqrt{n}$ ，不为0

7.6 积分不能保持的例子 极限和积分交换后结果不同 $0\le x\le 1$令$f_n(x)=n^2x(1-x^2)^n$
- $\lim_{n\to \infty}f_n(x)=0$
- $\lim_{n\to \infty} \int_0^1 f_n(x)dx=\lim_{n\to \infty} \frac{n^2}{2n+1} \to +\infty$
- 类似的
	- $\lim_{n\to \infty} nx(1-x^2)^n=0$
	- $\lim_{n\to \infty} \int_0^1 nx(1-x^2)^n dx=\lim_{n\to \infty} \frac{n}{2n+1} \to 1/2$

### 一致收敛性 uniform convergence

上面这个例子的问题导致了 交换运算顺序受到了限制，我觉得从计算机的视角函数就是函数名和参数虽然上面写作$f_n(x)$在计算机的习惯上可以写成$f(n,x)$, 而这样变成二元函数以后，其实这种 顺序会导致不同，感觉上是更不容易相同的，$f(n,x)=sign(\lfloor x\rfloor-n)$ 这样甚至可以对角线上是0,一种顺序是1,一种顺序是-1

7.7 对于$\epsilon > 0$有整数N,使得$n\ge N$时，对于一切$x\in E$ 有 $|f_n(x)-f(x)|\le \epsilon$
- 这里 和 逐点的区别是，这里的N与点的选取是无关的，要所有点满足 结果的距离限制。
- 而前面的逐点收敛，是先选点，关于点有$N(x,\epsilon)$ 来控制$f_n$和$f$的距离
- 而显然 $N(x,\epsilon)$可以用$N(\epsilon)$表示，也就是说 一致收敛 一定 逐点收敛，
- 哦  我写完这段，才看到书上也写了区别的讲解

7.8 类似的，上面的定义是 半径形式，那么自然有直径形式也就是Cauchy准则
- 当且仅当 任意$\epsilon >0$存在$N$使得任意$n,m \ge N$，任意$x$有$|f_n(x)-f_m(x)| \le \epsilon$ 
- 有的时候 我好想用r和2r,是我的问题吗，这样的“感受会更舒服”，虽然不是更简洁
- 证明
	- 7.7 -> 7.8 取epsilon/2就好
	- 7.8 -> 7.7 相对复杂，要用紧度量空间 cauchy列的性质 3.11 这里逐点收敛于一个具体值，那么这些逐点收敛的具体值串起来就是它逐点收敛于某个函数，记作$f(x)$, 再证明一致性就好

7.9 假设 $\lim_{n\to\infty} f_n(x)=f(x),x\in E$
- 令 $M_n=\sup_{x\in E} |f_n(x)-f(x)|$
- 当且仅当$n\to \infty$时$M_n\to 0$
- 就是7.7换了个写法，还是能通过控制n来控制所有点 到 逐点收敛函数的距离最大值

7.10 weierstrass
- {$f_n$}是定义在$E$上的函数序列, $f_n(x)\le M_n$, 如果$\sum M_n$收敛，那么$\sum f_n$便在$E$上一致收敛
- 看起来的感觉像比较判别法，但比较判别法直接只能控制界限，而如果配合cauchy列（也就是直径），那么能控制直径的界限，也就能一致收敛了

### 一致收敛性与连续性 uniform convergence and continuity

7.3的例子 给到了连续函数 的逐点极限 可能不连续， 

7.11 定理 假设在度量空间内的集E上$f_n$一致收敛于f,
- 设x是E的极限点， 
- 在假设$\lim_{t\to x}f_n(t)=A_n$ (是$f_n$在x的极限)
- 那么{$A_n$}收敛,并且 $\lim_{t\to x}f(t)=\lim_{n\to \infty} A_n$ (上述极限随着n也收敛，且与逐点收敛函数f 在x点极限相同)
- 也就是 在x点 保持点极限 $\lim_{t\to x}\lim_{n\to \infty} f_n(t)=\lim_{n\to \infty}\lim_{t\to x} f_n(t)$
	- 因为研究点连续 就是 极限=点值，但点值容易研究，上面先抛开点研究点极限
	- 在此基础上，再有$f_n$点x连续,那就是$f_n(x)=A_n$，那么就有  点连续
- emmm 这里书上 $|f_n(t)-f_m(t)|<\epsilon$到$|A_n-A_m|<\epsilon$ 直接$t\to x$取到极限了?
	- 感觉 给定epsilon, 控制N任意 $|f_n(t)-f_m(t)|<\epsilon/3$, 对于取得n,m ,可以控制t与x距离 $|A_n-A_m|\le |A_n-f_n|+|f_n-f_m|+|f_m-A_m| < 3\epsilon/3$ 
	- 总之可以控制$A_i$的距离,从而{$A_i$}是Cauchy列 有极限 A
	- $|f(t)-A| \le |f(t)-f_n(t)|+|f_n(t)-A_n|+|A_n-A|$， 这个表达式对任意n成立
		- 一致连续 对于一切t 可以用N控制 第一段 $\epsilon/3$
		- $A_n$收敛 存在N 控制 第三段 $\epsilon/3$
		- 在上述n选定后 得到 $|f(t)-A| \le 2\epsilon/3 + |f_n(t)-A_n|$, 注意的是这里 右侧的里面的 函数和常数是被n固定了的
		- 最后 目标是证明 控制t和x距离能控制 $f(t)$和A的距离，那么 最后这个就是 控制t和x距离控制 中间段的 距离 ，从而控制了3段的距离
	- 也就是 一致收敛 则 $\lim_{t\to x}f(t)=\lim_{n\to \infty} A_n$
		-  $\lim_{t\to x}(\lim_{n\to\infty}f_n(t))=\lim_{t\to x}f(t)=\lim_{n\to \infty} A_n=\lim_{n\to \infty} (\lim_{t\to x}f_n(t))$
- 7.3 的例子$f(x)=\sum \frac{x^2}{(1+x^2)^n}$ 在点0邻域没有一致收敛，因为右边的值要逐点趋于1,但是如果先给定了n, x越趋于0,右侧值可以趋于0

7.12 {$f_n$}在E上连续函数的序列，在E上$f_n$一致收敛到f,那么f在E上连续
- 是7.11 的直接推论，

7.13 K紧
- {$f_n$}是K上连续函数序列
- {$f_n$}是K上逐点收敛于连续函数f
- $f_n(x)\ge f_{n+1}(x)$， 单调性
- 那么 $f_n\to f$是一致的
- 证明:
	- $g_n=f_n-f$连续的,
	- $g_n\to 0$逐点收敛到0函数
	- 要证明一致收敛到0函数，
	- $\epsilon > 0$, 设$K_n \subset E$是使得$g_n(K_n)\ge \epsilon$ 的一切$x\in E$的集，$g_n(K_n)$连续，根据4.8(紧 的闭的 原像闭)，所以$K_n$闭
	- $g_n$单调递减，所以$K_n \supset K_{n+1}$ 嵌套闭集，存在点或为空，对于任意x, 存在充分大的n使得 $x\not\in \cap K_n$ 所以 $\cap K_n$是空的，
	- 所以 存在 N使得 $\cap K_n$是空的 （因为对于紧集 嵌套闭集 任意有限交非空 会导致 可数交非空）
- 这里的 紧性 必不可少，$f_n(x)=\frac{1}{nx+1}, x\in(0,1)$ 趋于0,但不是一致收敛
	- 没有紧性，上面的$K_n$ 不一定是嵌套闭集，虽然$\cap K_n$无限交是空的，但是无法得到存在有限交是空的

7.14 X 是度量空间, $\mathscr{C}(X)$  就表示 以X为定义域的复值complex-valued连续continuous 有界bounded 函数的集 (mathscr{C})
- 4.15 $f(X紧) \mapsto \mathbb{R}^k$, f连续则 $f(X)$ 闭+有界. 所以 如果X紧 上面 值域中有界性是多余的
- 定义范数 $||f||=\sup_{x\in X} |f(x)|$ 范数norm上确
- f有界,那么 $||f|| < \infty$
- $f(x)=0$时才有 $||f||=0$
- 若$h=f+g$, $|h(x)|\le|f(x)|+|g(x)|\le ||f||+||g||$
	- $||f+g|| \le ||f||+||g||$
- 定义$d(f,g)=||f-g||$, 为距离函数， 那么上面范数不等式 满足 度量空间3条件（只有自己到自己=0，对称，任意c(X)都有 d(a,b) <= d(a,c)+f(c,b), 通过 f= a-c, g=c-b, 带入即可
- 这样$\mathscr{C}(X)$是度量空间
- $\mathscr{C}(X)$的度量来说，序列{$f_n$} 收敛于f,当且仅当$f_n$在X上一致收敛于f
- $\mathscr{C}$的闭子集有时叫作 一致闭 的
- 集$\mathscr{A}\subset \mathscr{C}(X)$的闭包叫作它的 一致闭包 等等

7.15 上边说的 度量 使得$\mathscr{C}(X)$变成了完备度量空间complete metric space
- 证明 设 {$f_n$} 是$\mathscr{C}(X)$里的Cauchy序列,
	- 也就是 可以通过 N来控制 $||f_n-f_m||$的直径，根据7.8 它存在具体的f, 一致收敛于它。（一致收敛是因为|| ||的定义是 sup ||
	- 7.12 (连序函数列+一致收敛) ，收敛于连续的f
	- 一致收敛 存在n 使得$|f(x)-f_n(x)|<1$ 对于所有x成立，$f_n$有界,从而 $f$有界
	- 所以$f\in\mathscr{C}(X)$
	- 因为一致收敛于f, $n\to \infty$时$||f-f_n||\to 0$
- 这里 就是要证明 complete ，什么是complete, 也就是 cauchy 收敛，且收敛于 空间中的元素
	- 那么就是要证明 1. 元素在空间中，2收敛到该元素
	- 那么首先找到f,然后有 f的定义域+连续+有界，从而证明f在空间中，
	- 最后再（一致收敛 是 函数的定义）到 ($\mathscr{C}(X)$中的距离的收敛)

### 一致收敛性与积分 uniform convergence and integration

7.16 $[a,b]$上$f_n\in\mathscr{R}(\alpha)$,一致收敛到f 那么
- $f\in\mathscr{R}(\alpha)$ 同样黎曼可积
- $\int_a^b f d\alpha = \lim_{n\to\infty} \int_a^b f_n d\alpha$ 保持积分结果
- 证明
	- 令 $\epsilon_n=\sup |f_n(x)-f(x)|$ 通过一致收敛保证
	- 有 $f_n-\epsilon_n \le f\le f_n+\epsilon_n$
	- $\int_a^b (f_n-\epsilon_n)d\alpha \le L(f) \le U(f) \le \int_a^b (f_n+\epsilon_n)d\alpha$
		- 因为任意划分P，$f_n-\epsilon_n$的下积分 小于等于 f的下积分，两边都取sup，左边是可积所以左边=积分结果，右边则是f的下积分
		- 上积分类似
	- $0\le U(f)-L(f)\le 2\epsilon_n [\alpha(b)-\alpha(a)]$ 可以任意小，从而f上下积分相等，所以关于$\alpha$黎曼可积
	- $|\int_a^b f d\alpha -\int_a^b f_nd\alpha|\le \epsilon_n[\alpha(b)-\alpha(a)]$ 证明积分距离任意小即相等
- 推论: $[a,b]$上
	- $f(x)=\sum_{n=1}^{\infty} f_n(x)$ 在$[a,b]$上一致收敛
	- $\int_a^b fd\alpha=\sum_{n=1}^{\infty}\int_a^b f_n d\alpha$
	- 也就是 这个级数可以逐项积分, 上面的 积分和求和顺序在 有限项时可以交换的，而上面的性质是 $\sum_n \int f_i = \int \sum_n f_i \to \int f$

### 一致收敛性与微分 uniform convergence and differentiation

前面7.5 说明{f_n}一致收敛到f，并不能$f'_n\to f'$ 需要更强假设

7.17 {$f_n$}是$[a,b]$上的可微函数序列，$[a,b]$上有某点$x_0$使得{$f_n(x_0)$} 收敛, 如果$f'_n$在$[a,b]$上一致收敛，那么
- {$f_n$}便在$[a,b]$上一致收敛于某函数f ,并且
- $f'(x)=\lim_{n\to\infty}f'_n(x)$
- 证明:
	- $x_0$点f收敛，可以控制N, $|f_n(x_0)-f_m(x_0)|<\epsilon/2$
	- $f'$一致收敛，可以控制N,任意t, 有$|f'_n(t)-f'_m(t)| < \frac{\epsilon}{2(b-a)}$
	- 5.19 $f: [a,b] \mapsto \mathbb{R}^k$ 且可微 k则 $|f(b)-f(a)|\le (b-a) |f'(x)|$
		- $|(f_n(x)-f_m(x))-(f_n(t)-f_m(t))|\le |x-t|\cdot|f'_n(p)-f'_m(p)|, (其中(x-p)(t-p)< 0) \le |x-t| \frac{\epsilon}{2(b-a)} \le \frac{\epsilon}{2}$ 对于任意$x,t \in[a,b]$
	- $|f_n(x)-f_m(x)|\le |(f_n(x)-f_m(x))-(f_n(x_0)-f_m(x_0))|+|f_n(x_0)-f_m(x_0)| \le \epsilon$ 可以被控制
	- 从而 证明了 {$f_n$}一致收敛
	- 接下来 证明导数 保持，也就是根据导数定义 任意接近
	- 对于定点x, 令 $\phi_n(t)=\frac{f_n(t)-f_n(x)}{t-x}$, $\phi(t)=\frac{f(t)-f(x)}{t-x}$
	- 那么$\lim_{t\to x}\phi_n(t)=f'_n(x)$
	- $|\phi_n(t)-\phi_m(t)| \le \frac{\epsilon}{2(b-a)}$ 根据上面，说明收敛 且 $t\neq x$时一致收敛（能与点无关 的控制距离）
	- 根据$\phi$定义, $\lim_{n\to \infty} \phi_n\to \phi$ 一致的成立
		- 7.11 $\lim_{t\to x}\lim_{n\to\infty}f_n(t)=\lim_{n\to \infty} \lim_{t\to x}f_n(t)$
		- $f'(x)=\lim_{t\to x}\phi(t)=\lim_{t\to x}\lim_{n\to\infty} \phi_n(t)=\lim_{n\to\infty}\lim_{t\to x} \phi_n(t)=\lim_{n\to \infty} f'_n(x)$
		- 细看这一串等号，两头的 是 导数的定义
			- 第二个等号 需要 $f_n$收敛
			- 第三个等号 需要 $\phi_n$一致收敛到$\phi$

- 注 如果$f'_n$连续，7.16 + 微积分基本定理，可以更容易证明
		

### 7.18 实轴上确有处处不可微的实连续函数

there exists a real continuous function on the real line which is nowhere differentiable

- $\varphi(x)=|x|, -1\le x\le 1$
	- $\varphi(x+2)=\varphi(x)$
	- $|\varphi(s)-\varphi(t)|\le |s-t|$ ，在$\mathbb{R}^1$上连续
- $f(x)=\sum_{n=0}^{\infty} (\frac{3}{4})^n \varphi(4^nx)$
	- 7.10 被 $M_n=(3/4)^n$ 控制，所以$f(x)$ 一致收敛
	- 7.12 连续+一致收敛 => f连续
	- 固定实数x和正数m,令$\delta_m=\pm \frac{1}{2}4^{-m}$
		- 这里正负号选取使得 $4^mx$与$4^m(x+\delta_m)$ 之间没有整数 （因为 这是$4^mx$ 的1/2半径的单侧邻域一定能做到
		- 令$\displaystyle \gamma_n=\frac{\varphi(4^n(x+\delta_m))-\varphi(4^nx)}{\delta_m}$ 
			- $n>m$时，增量是偶数，所以分子为0
			- $0\le n \le m$ 时, 分子变化 不大于增量， $|\gamma_n| \le 4^n$
			- $|\frac{f(x+\delta_m)-f(x)}{\delta_m}|=|\sum (3/4)^n\gamma_n|$ 根据定义
			- $=|\sum_{n=0}^m (3/4)^n\gamma_n|$ 根据$\gamma性质$
			- $\ge 3^m - \sum_{n=0}^{m-1} 3^n$ 这里用 三角不等式，但是注意要证明 导数不被控制，所以希望是 >=, 那么 |a+b+c|+|-b|+|-c|>=|a| 这样去使用
			- $=\frac{1}{2}(3^m+1)$ 
			- 也就是 $m \to \infty$时$\delta_m\to 0, \gamma_n \to \infty$  导数的判断函数趋于无穷
- 类似的 Weierstrass 函数。它由德国数学家卡尔·魏尔斯特拉斯（Karl Weierstrass）于1872年构造，用来证明连续性和可微性并不等价。其形式通常如下：$W(x)=\sum_{n=0}^{\infty} a^n \cos(b^n\pi x)$ 同样是 幂次 与 周期 的级数和
	- $0 < a < 1$控制振幅衰减
	- $b$正奇数控制频率
	- $ab > 1+\frac{3}{2}\pi$ 保证函数不可微
	- 连续性: 一致收敛 -> 连续
	- 不可微性：$b^n$导致震荡频率的快速增加，振幅衰减不足以抵消频率的增长，任何点的差的商会剧烈振荡，无法趋于确定的极限

### 等度连续的函数族 equicontinuous families of functions

从3.6 每个有界complex numbers序列，必有收敛的子序列，关于函数序列是否同样类似结论

7.19 {$f_n$} 定义在$E$上的函数序列，
- 逐点有界：对于每个给定$x\in E$, {$f_n(x)$}是有界的，也就是说：如果存在着 一个定义在E上的有限值函数$\phi$使得$|f_n(x)| < \phi(x)$
- 一致有界：存在M, $|f_n(x)| < M$
- 逐点有界，$E_1\subset E$,且$E_1$可数, 存在子序列{$f_{n_k}$} 对于每个$x\in E_1$收敛

7.20 例 $f_n(x)=\sin nx, x\in[0,2\pi]$
- 设数列{$n_k$}使得{$\sin n_k x$}对于每个$x\in[0,2\pi]$收敛，这时候，必然
- $\lim_{k\to \infty} (\sin n_kx-\sin n_{k+1}x)=0, x\in[0,2\pi]$ 
- $\lim_{k\to \infty} (\sin n_kx-\sin n_{k+1}x)^2=0, x\in[0,2\pi]$ 
- 根据11.23 有界收敛序列积分的Lebesgue定理，
	- $\lim_{k\to \infty} \int_0^{2\pi} (\sin n_k x-\sin n_{k+1} x)^2dx =0$
	- 但是 $\int_0^{2\pi} (\sin n_k x-\sin n_{k+1} x)^2dx =2\pi$ 矛盾

7.21 即使序列在一个紧集上一致有界，收敛序列 不一定 有一致收敛的子序列。
- 7.6 表明 有界函数序列可以收敛 而 不一致有界。但是有界函数序列的一致收敛性包着一致有界性
- $x\in[0,1] f_n(x)=\frac{x^2}{x^2+(1-nx)^2}$
- $|f_n(x)| \le 1$ 在$[0,1]$上一致有界
- $\lim_{n\to\infty} f_n(x)=0$ 收敛到0函数
- 但是 $f_n(1/n)=1$， 所以没有子序列能在$[0,1]$上一致收敛
- 紧+一致有界+收敛序列 依然不一定找到 一致收敛子序列

7.22 等度连续： f定义在度量空间X内集合E上的函数, $\mathscr{F}$是f的族. 说$\mathscr{F}$在E上等度连续，就是说对于每个$\epsilon > 0$存在一个$\delta > 0$只要$d(x,y) < \delta$, $x\in E,y\in E,f\in \mathscr{F}$ 就能使得
- $|f(x)-f(y)|<\epsilon$
- 这里$d$表示$X$的度量
- 回顾一下
	- 点连续，对于函数，给定定义域中的点，能控制点邻域半径，控制值域变化
	- 一致连续，对于函数，能控制邻域半径，对于任意点，控制值域变化
	- 等度连续，能控制邻域半径，对于任意 点 和 函数族中的函数，控制值域变化。 根据顺序，显然等度连续在具体的f上是一致连续的
	- 或者 全部加上$\mathscr{F}$中讨论
		- 点连续的控制函数是$\delta(f,x,\epsilon)$
		- 一致连续的控制函数是$\delta(f,\epsilon)$
		- 等度连续的控制函数是$\delta(\epsilon)$

7.23 {$f_n$}是在 可数集E 上逐点有界的复值函数序列，那么{$f_n$}便有子序列{$f_{n_k}$}使得{$f_{n_k}(x)$}对于每个$x\in E$收敛
- 设 {$x_i$} 是E的点排列成的序列，(用到了可数集的性质)
- {$f_n(x_1)$} 有界，便存在着一个子序列 使得 $f_{1,k} (x_1)$ 收敛
- $S_i: f_{i,1\cdots\infty}$ 的序列，满足性质
	- $S_i$是$S_{i-1}$的子序列，保持顺序
	- 满足上面的 收敛，即{$f_{i,k\to \infty}(x_i)$ }收敛
- $S: f_{i,i}$ 构成的序列，那么 S的后缀 是$S_n$的子序列 （对角线方法）
	- 所以$n\to \infty$时{$f_{n,n}(x_i)$}对于每个$x_i$都收敛


7.24 K紧度量空间, $f_n\in \mathscr{L}(K)$ 且{$f_n$}在K上一致收敛，那么{$f_n$}在K上等度连续
- 要证明 控制$d(x,y)$能控制 $|f_i(x)-f_i(y)|$
- 如果 i在有限集里，因为$f_i$紧+连续=> 一致连续，每个函数可以控制 d来控制f变化，有限集里可以取min
- 而对于 i 在无限集里，因为$f_i$ 一致收敛，考虑cauchy列, 可以控制 N 控制 $||f_n-f_m||$的距离
	- $|f_n(x)-f_n(y)|\le |f_n(x)-f_m(x)|+|f_m(x)-f_m(y)|+|f_m(y)-f_n(y)|$
		- 而中间的 又不可控制了，而m如果钦定成N也成立
		- $|f_n(x)-f_n(y)|\le |f_n(x)-f_N(x)|+|f_N(x)-f_N(y)|+|f_N(y)-f_n(y)|$
		- 这样两边是 一致收敛产生的控制，中间是 一致连续产生的控制，从而 都可被控制，等度连续
- 紧+一致收敛 => 等度连续

7.25 K紧, $f_n\in\mathscr{L}(K)$ 而且{$f_n$}在K上逐点有界 又 等度连续，那么
- {$f_n$}在K上一致有界
	- 等度连续，控制$d(x,y) < \delta$ 使得 $|f_n(x)-f_n(y)|<\epsilon$ , 有的时候右边也想写成d, $D(f_n(x),f_n(y))$
	- K紧，所有点的$(p_i,\delta)$邻域组成的覆盖 有 有限子覆盖，所以有有限各点$p_1,\cdots,p_r$  每个x至少被一个$p_i$邻域覆盖
	- 逐点有界，$p_i$ 有限个数，$|f_n(p_i)| < M = \max(M_i)$, 三角不等式一下每个$x$到$p_i$距离，$|f_n(x)|<M+\epsilon$ 即一致有界
- {$f_n$}含有一致收敛的子序列
	- 2习题25, E是K的可数稠密子集
	- 7.23 说明 存在子序列$f_{n_k}$使得 对于每个$x\in E$收敛，记作$g_i=f_{n_i}$
	- 证明 $g_i$在K上一致收敛
		- 所有邻域$V(x,\delta)$是$K$的一个开覆盖（因为稠密）,其中$\delta$的选取和上面一样 是等度连续控制所有$|f_n(x)-f_n(y)|<\epsilon$
		- 因为紧，可以有限个邻域$V(x_i,\delta)$完成K的覆盖
		- $g_i$对于x收敛，可以控制N,$|g_i(x_s)-g_j(x_s)|<\epsilon$
		- $|g_i(x)-g_j(x)|\le|g_i(x)-g_i(x_s)|+|g_i(x_s)-g_j(x_s)|+|g_j(x_s)-g_j(x)|$
			- 中间被 可数集E中 的函数子序列 控制
			- 两边是 等度连续的控制
			- 从而$g_i$ 一致收敛
- 也就是：紧+逐点有界+等度连续 => 一致有界+一致收敛的子序列
	- 和7.21 相比 一致有界+收敛 都完成不了的，这里可以了，怎么说呢，其实我挺喜欢 这个 三角，或者说距离不等式的
		- $|g_i(x)-g_j(x)|\le|g_i(x)-g_i(x_s)|+|g_i(x_s)-g_j(x_s)|+|g_j(x_s)-g_j(x)|$
		- 本质上就是希望能被控制，而变成分析每一部分被控制所需要的条件，因为这里也不是充要，只是充分性，我觉得可以把问题前移，再来依次满足每个被控制的要求

### Stone-Weierstrass定理 theorem

7.26 f是$[a,b]$上的一个连续复函数，那么便有多项式$P_n$的序列使得$\lim_{n\to\infty}P_n(x)=f(x)$
- 在$[a,b]$ 一致的成立，f如果是实函数，$P_n$可以是实多项式
- Weierstrass最初发现的定理的形式
- 不是一般性 设f在$[0,1]$ 上, $f(0)=f(1)=0$ 因为，如果不满足只需要缩放空间，和减去一个 直线 即可变形
	- 在$[0,1]$外 f(x)=0
- 那么 要证明这样的f能作为一致收敛的极限
- $Q_n(x)=c_n(1-x^2)^n \ge 0$, 其中$c_n$是常数 使得$\int_{-1}^1Q_n(x)dx=1$ 或者说$c_n=\frac{1}{\int_{-1}^1 (1-x^2)^n dx}$
	- $\int_{-1}^1 (1-x^2)^n dx=2\int_{0}^1 (1-x^2)^n dx$
	- $\ge 2\int_{0}^{1/\sqrt{n}} (1-x^2)^n dx$
	- $\ge 2\int_{0}^{1/\sqrt{n}} (1-nx^2) dx$ 邻域性质(导数分析都可以证明)
	- $=\frac{4}{3\sqrt{n}} > \frac{1}{\sqrt{n}}$
	- 即$c_n <\sqrt{n}$
- 对于 任意 $\delta > 0$ 当$x\in[\delta,1]$时 $Q_n(x)\le \sqrt{n}(1-x^2)^n\le \sqrt{n}(1-\delta^2)^n$ 所以 右侧与x无关，$Q_{n\to \infty}\to 0$一致的成立
	- $P_n(x)=\int_{-1}^1 f(x+t)Q_n(t)dt, x\in[0,1]$
		- $=\int_{-x}^{1-x}f(x+t)Q_n(t)dt$ 利用f(x)在$[0,1]$值为0
		- $=\int_0^1 f(t)Q_n(t-x) dt$
		- 是关于 x的多项式，所以{$P_n$} 是关于x的多项式序列，如果f是实的，那么它也是实的
- $\epsilon > 0$然后取$\delta >0$使得$|y-x| < \delta$时有$|f(y)-f(x)|<\frac{\epsilon}{2}$
- 令 $M=\sup |f(x)|$
- $|P_n(x)-f(x)|=|\int_{-1}^1 [f(x+t)-f(x)]Q_n(t)dt|$, 注意这里t是积分变量所以f(x)在积分中是常数角色
- $\le \int_{-1}^1 |f(x+t)-f(x)|Q_n(t)dt$
- 这里怎么切分，切分称积分段$[-1,-\delta,\delta,1]$
	- 那么中间的，控制$\delta$ 能控制 $\le \int_{-\delta}^{\delta} (<\epsilon/2) Q_n dt \le \epsilon/2 (0,1) \le \epsilon/2$
	- 那么两端的利用 2M控制 $|f-f|$, 而n趋于无穷大时，上面$Q_{n\to \infty}\to 0$ 一致成立 来控制
	

7.27 实例，引理
- 在每个闭区间$[-a,a]$上，必有实多项式$P_n$的序列, such that $P_n(0)=0$ and such that $\lim_{n\to \infty} P_n(x)=|x|$ 在$[-a,a]$上一致uniformly的成立
- 根据7.26 有 $P^*_n(x)$ 满足一致收敛于|x|
	- 要达到 函数列所有 $P_n(0)=0$
	- 那么 取$P_n=P^*_n-P^*_n(0)$

7.28  a family $\mathscr{A}$ of complex functions defined on a set E is said to be an algebra(代数) ，如果满足以下
- 加法封闭 $f+g\in\mathscr{A}$
- 乘法封闭 $fg\in\mathscr{A}$
- 数乘封闭 $cf\in \mathscr{A},c\in \mathbb{C}$, scalar multiplication
- 类似可以定义 实函数 的 代数
- 一致闭 的代数：
	- 如果满足 $f_n\in \mathscr{A}$ 在E上$f_n\to f$一致收敛， 则 $f\in \mathscr{A}$, 也就是 对于一致收敛封闭，
- 例如
	- 所有多项式的集是一个代数
	- Weierstrass定理可以叙述为$[a,b]$上的连函数的集是$[a,b]$上多项式集的一致闭包，（因为上面证明的就是人连续函数能找到多项式序列 来一致收敛

7.29 设$\mathscr{B}$是有界函数的代数$\mathscr{A}$的一致闭包，那么$\mathscr{B}$是 一致闭 的代数
- $f,g\in\mathscr{B}$  因为一致闭包，分别有 一致收敛序列 $f_n,g_n \in \mathscr{A}$ ??? 代数闭包的某个性质？
- $f_n,g_n$有界函数 所以满足 加法 乘法 数乘 还是有界函数，并且 收敛于 对应的f+g,fg,cf, 且一致收敛，从而$\mathscr{B}$是一致 闭的

7.30 $\mathscr{A}$是集E上的函数族，
- 说$\mathscr{A}$能分离E的点separate points on E，就是说对应于每对不同的点$x_1,x_2\in E$总有一个函数$f\in\mathscr{A}$使得$f(x_1)\neq f(x_2)$
	- 这里并不是一一映射，而是 任给不同的点，总能找到 函数 使这两点结果不同
	- 例如下面偶多项式集合 任意-x,x “总”是相同
	- 作为另一个例子 $f_{m,n}(x)= m|x|当 x \ge 0,n|x| 当x \le 0$, 看起来 除了0,所有y都有两个x,但 根据上面的顺序，先任意$x_1,x_2$,  总能找到使之不同的函数
	- 但这个例子 点0是消失的
- if to each $x\in E$ there corresponds a function $g\in \mathscr{A}$ such that $g(x)\neq 0$ we say that $\mathscr{A}$ vanishes at no point of E
	- 也就是每个x,能找到g,使得g(x)非0,（逆命题就是存在x 所有g,都是g(x)=0)
- The algebra of 所有多项式 in 一元变量 在$R^1$上显然有这些性质
- 作为 反例 所有偶多项式的集合，不能分离点因为 f(-x)=f(x)

7.31 E上函数的代数$\mathscr{A}$能分离E的点+不在E的点消失。$x_1,x_2\in E$且不等,$c_1,c_2$是常数
- 那么$\mathscr{A}$ 含有一个f, $f(x_1)=c_1,f(x_2)=c_2$
- 证明:
	- 能分离点 取g
	- 不消失取 h,k
	- $u=gk-g(x_1)k$
	- $v=gh-g(x_2)h$
	- 显然
		- $u(x_1)=v(x_2)\neq 0$
		- $u(x_2)\neq 0,v(x_1)\neq 0$
		- $f=\frac{c_1v}{v(x_1)}+\frac{c_2u}{u(x_2)}$ 有需要的性质
		- 其实还是待定系数法的感觉 f = c_1(x_1点=1,x_2点=0的函数)+c_2(x_2点=1,x_1点=0的函数) 反过去构造

7.32 $\mathscr{A}$紧K上的实连续函数的代数。$\mathscr{A}$能分离K,不在K的点消失，那么
- $\mathscr{A}$的 uniform closure一致闭包 $\mathscr{B}$由K上的所有实连续函数组成
- 证明：
	- 第一步， $f\in\mathscr{B}$则$|f|\in\mathscr{B}$
		- 证明：
		- 令$a=\sup |f(K)|$
		- 再给定$\epsilon > 0$，根据7.27(可以0次幂系数为0 多项式一致收敛 到|x|),存在$c_1,\cdots,c_n$使得
			- $|\sum_{i=1}^n c_iy^i -|y|| < \epsilon, -a\le y\le a$ ， 这里的y表示 取遍$[-a,a]$所有值成立，因为$7.27$
		- 因为$\mathscr{B}$是代数 所以$g=\sum_{i=1}^n c_i f^i \in \mathscr{B}$, 代数中的运算封闭性
			- 这里要注意的是， 虽然列了n项但并不表示 $g_n$, 因为7.27 证明的多项式序列中没有对项数进行讨论，这里表示的只是某个$g_i$ 有n项
			- 另一个注意的是$c_i$的值是在不同的g中是不同的$c_{i,g_k}\neq c_{j,g_k}$
			- 写得再 具体一点是 $g_i=\sum_{j=1}^{n_i} c_{i,j} f^j$
		- $|g-|f||<\epsilon$ 这里 $f$的每个值 都是$[-a,a]$ 中的点，所以 成立 且 一致成立
			- 这里说明$|f|$是 可以被一致收敛
			- 而$\mathscr{B}$是一致闭的，所以$|f|\in\mathscr{B}$
	- 第二步, 感觉这些步骤可以单独提出来变成推论
		- $\max(f,g)\in \mathscr{B},\min(f,g)\in \mathscr{B}$
		- $\max(f,g)=(f+g)/2+|f-g|/2$
		- $\min(f,g)=(f+g)/2-|f-g|/2$
		- 更一般的 $\max(f_n,\cdots,f_n) \in \mathscr{B}$
	- 第三步 这里用到了 能分离 和 点消失
		- 对于任意 给定 K上连续f, $x_0 \in K$, $\epsilon > 0$,便存在着一个函数$g_x\in \mathscr{B}$满足$g_x(x_0)=f(x_0)$且$g_x(t) >f(t)-\epsilon, t\in K$
		- 也就是 指定点相等，所有位置大于 下邻域
		- 7.31 对于每个点 $y\in E$, $h_y\in \mathscr{B}$ 使得它和f在x,y点相等
			- $h_y$是连续的，存在 y的邻域 $h_y(y) > f(x)-\epsilon$
			- K紧， 所有y的邻域构成的开覆盖，有限子覆盖，有限了，就可以对这些$h_y$取max,从而构造出了，x点相等其它点$> f(t)-\epsilon$的$\mathscr{B}$中的函数
	- 第四步
		- 给定K上连续实函数f, $\epsilon > 0$，存在$h\in \mathscr{B}$ 使得 $|h(x)-f(x)|<\epsilon$ 
			- 也就是 f可以找到 函数列{h} 一致收敛到，也就是f 属于$\mathscr{B}$ 一致闭，也就和命题一致
		- 证明：
			- 类似第3步，不过这次是x的邻域，能$g_x(x) < f(x)+\epsilon$
			- 同样利用 紧和覆盖，把上面 满足$g(t) > f(t)-\epsilon$的 这次用 min来构造出一个新的 连续的 在 $(f(x)-\epsilon,f(x)+\epsilon)$之间的函数

7.33 这个在复代数 complex algebras中不成立, 
- 习题21，反例counterexample
	- $K$是复平面单位圆，也就是 所有$|z|=1$的$z$
	- $\mathscr{A}$是$f(e^{i\theta})=\sum_{n=0}^N c_ne^{in\theta}$ 其中$\theta$是实数
	- 仍有K上的连续函数不属于$\mathscr{A}$的一致闭包
	- 这个复分析和函数代数的经典问题 经典反例，丢给grok3,tongyi,deepseek都有不错的结果
		- 证明：
			- 能分离点, f(x)=x 可证
			- 不在K的点消失, $|f(x)=x| = 1 \neq 0$
		- 理解一下，首先这是傅里叶项，但是缺少负n，另外也是上面条件中需要共轭闭包没有满足
		- 构造反例：其实直接就是构造一个共轭，负频率
			- $f(x)=\bar{x}$ 即 $f(e^{i\theta})=e^{-i\theta}$ 证明它K上连续的
			- $P_n\to \bar{x}$
			- $\sup_{\theta} |P_n-\bar{x}| < \epsilon$
			- $\int_0^{2\pi} P_n(e^{i\theta})e^{i\theta} d\theta = 0\neq 2\pi = \int_0^{2\pi} e^{-i\theta}e^{i\theta} d\theta$
			- 不存在 一致收敛的函数列
- 增加性质 A self-adjoint 自伴的，那么在 复代数 也成立
- 自伴的: $f\in \mathscr{A}$则$\bar{f} \in \mathscr{A}$
- 紧K,复连续，自伴，能分离K的点，不在K点消失的代数$\mathscr{A}$，那么它的一致闭包$\mathscr{B}$ 由$K$上的所有复连续函数组成
- 也就是说 $\mathscr{A}$在$\mathscr{C}(K)$中稠密
	- $\mathscr{A}_R$是K上 属于$\mathscr{A}$的所有实函数的集
	- $f=u+iv \in \mathscr{A}$其中$u,v$ 是实的, $\mathscr{A}$是自伴的, $u=\frac{f+\bar{f}}{2} \in \mathscr{A}_R$
	- $\mathscr{A}_R$可分离K的点： 对于$x_1\neq x_2$,存在f,使得$f(x_1)=1,f(x_2)=0$, u在这两点也不等
	- $\mathscr{A}_R$不在K的点消失：$x\in K$, 不消失, 有g,使得$g(x)\neq 0$, 有复数$\lambda$使得$\lambda g(x) > 0$, 令$f=\lambda g$, 对应$u(x)>0$, 也就满足任意x存在u，$u(x)\neq 0$
	- $\mathscr{A}_R$ 满足 7.32 说明 K上的每个实连续函数 必定在$\mathscr{A}_R$的一致闭包中，进而在$\mathscr{B}$中,
		- f是K上复连续函数,$f=u+iv$
		- 因为$u,v\in\mathscr{B}$所以$f\in\mathscr{B}$
- 这里中文书的“合于”听起好绕口，英文书上就是 then (性质) for some (条件)

		
回顾
- 最开始 对于$[a,b]$上任意 复连续函数， 希望用多项式列，一致收敛
- 接下来希望讨论 连续函数之间的结构，于是建立连续函数代数（加法封闭，乘法封闭，数乘封闭）
- 增加 能分离（给任意不同点 存在函数 使对应点值不同），不消失（给任意点，存在函数 对应点值非0）两个条件
- 从而 紧K + 连续函数的代数的一致闭包 由所有实连续函数组成
- 而对于复函数，需要多一个共轭封闭的前提条件

## 一些特殊函数 some special functions

### 幂级数 power series

$f(x)=\sum_{n=0}^{\infty}c_n x^n$， 在0点展开

更一般 $f(x)=\sum_{n=0}^{\infty}c_n (x-a)^n$ 在a点展开

这些都称作解析函数 analytic functions
- 限制x实值，（不会遇到 3.39 收敛圆）而是面向收敛区间

8.1 假设对于 $|x| < R$级数$\sum_{n=0}^{\infty} c_nx^n$收敛
- 令$f(x)=\sum_{n=0}^{\infty} c_nx^n, |x| < R$
- 那么 任意$\epsilon > 0$, $f(x)$在$[-R+\epsilon,R+\epsilon]$上一致收敛，在(-R,R)连续，可微，且
- $f'(x)=\sum_{n=1}^{\infty} nc_nx^{n-1}, |x|< R$
- 证明
	- $|c_nx^n|\le |c_n(R-\epsilon)^n|$
		- $\sum c_n(R-\epsilon)^n$ 绝对收l敛(3.39 收敛半径内绝对收敛)，由7.10（被值控制，值收敛，则一致收敛） $f_n$ 一致收敛
	- 根据收敛半径 $R$ 的定义，而导函数中$R=\sup \lim_{n\to\infty} \sqrt[n]{nc_n} =\sup \lim_{n\to\infty} \sqrt[n]{c_n}$ ，所以 幂级数 和 幂级数导数 的定义域相同
	- 幂级数导数在$[-R-\epsilon,R+\epsilon]$一致收敛，7.17(一致收敛与微分保持)，可证明 收敛到导数
	- 对于任意 $x<R$ 能找到$\epsilon$
	- 连续性 5.2 可微则连续
- 推论
	- $(-R,R)$内有任意阶的导数
	- 特别的$f^{(k)}(0)=k!c_k$
	- 注意的是 这里看上去 f 与 ($c_k$列) 构成一一对应关系，但这里有前提是0的邻域收敛，如果一个在邻域收敛但是任然任意阶可导的函数的反向是不能得到原函数的 
		- $f(x)=e^{-\frac{1}{x^2}}, f(x)=0(当x=0)$ 它任意阶导系数为0
- 补充 在一个端点 例如x=R 如果也收敛，那么也连续

这类的东西好想画2x2的方格，每次都是“冂”形状的证明路径

8.2 $\sum c_n$收敛, 令$f(x)=\sum_{n=0}^{\infty}c_n x^n, x\in(-1,1)$
- Abel 定理
- $\lim_{x\to 1} f(x)=\sum_{n=0}^{\infty} c_n$
- $s_n=\sum_n c_i, s_{-1}=0$
- $\sum_{i=0}^m c_i x^i=\sum_{i=0}^m (s_i-s_{i-1}) x^i=(1-x)\sum_{i=0}^{m-1}s_ix^i +s_mx^m$
- $|x|<1$让$m\to \infty$, 便有$f(x)=\lim_{m\to\infty} \sum_{i=0}^m c_ix^i=(1-x)\sum_{n=0}^{\infty} s_nx^n$, 这里用到了$s_m$是收敛的 所以末项 =$常数邻域 * (<1)^\infty =0$
- $s=\lim {s_{n\to\infty}}=\sum c_n$
- $|f(x)-s|=|(1-x)\sum_{n=0}^{\infty}(s_n-s)x^n|$ 因为$(1-x)\sum_{n=0}^{\infty} x^n=1$
- $\le (1-x)\sum_{n=0}^N |s_n-s||x|^n+\epsilon/2$ 这里N是 根据epsilon选的，用来控制 无穷段$|s_n-s|$的距离
- 在此情况下，通过控制1的邻域$1-\delta$,使得 左侧可以任意小， 所以总体能被控制，所以在这个邻域里 $f(x)$可以任意近，从而证明

8.3 设有二重序列{$a_{ij}$} 设$b_{i}=\sum_{j=1}^{\infty}|a_{ij}|$
- 并且$\sum b_{i}$收敛
- 那么$\sum_{i=1}^{\infty} \sum_{j=1}^{\infty} a_{ij}=\sum_{j=1}^{\infty} \sum_{i=1}^{\infty} a_{ij}$
- 令E是点$x_{0}\dots$组成的可数集，且$x_{\infty}\to x_{0}$ (强行取和令
- $f_{i}(x_{0})=\sum_{j=1}^{\infty}a_{ij}$
- $f_{i}(x_{n > 0})=\sum_{j=1}^{n}a_{ij}$
- $g(x)=\sum_{i=1}^{\infty}f_{i}(x)$, 根据7.11 可以交换lim顺序 g在$x_{0}$连续
- 那么$\sum_{i=1}^{\infty} \sum_{j=1}^{\infty} a_{ij}$
- $=\sum_{i=1}^{\infty}f_{i}(x_{0})$
- $=g(x_0)$
- $=\lim_{ n \to \infty }g(x_{n})$， 使用在$x_{0}$连续
- $=\lim_{ n \to \infty }\sum_{i=1}^{\infty}f_{i}(x_{n})$
- $=\lim_{ n \to \infty }\sum_{i=1}^{\infty}\sum_{j=1}^{n}a_{ij}$
- $=\lim_{ n \to \infty }\sum_{j=1}^{n}\sum_{i=1}^{\infty}a_{ij}$
- $\sum_{j=1}^{\infty} \sum_{i=1}^{\infty} a_{ij}$
- 这里 f,g以及$x_i$的点列真的 凭空而来，却通过 $x_{\infty}\to x_{0}$ 来让g在点连续完成证明

8.4 设 $f(x)=\sum_{n=0}^{\infty}c_{n}x^n$
- 在$|x|< R$内收敛, 若f便可以在x=a附近展称幂级数， 在$|x-a|<R-|a|$中收敛，且
- $f(x)=\sum_{n=0}^{\infty} \frac{f^{(n)}(a)}{n!}(x-a)^n$
- 也就是 幂级数，可以在收敛半径内的点a, 新的半径内 展开
- $f(x)=\sum_{n=0}^{\infty}c_{n}[(x-a)+a]^n$
- $=\sum_{n=0}^{\infty}c_{n} \sum_{m=0}^{n} \binom{n}{m}a^{n-m}(x-a)^m$
- $=\sum_{m=0}^{\infty}[ \sum_{n=m}^{\infty} \binom{n}{m}c_{n}a^{n-m}](x-a)^m$
- 这里 要证明 顺序变换是 正当的validity
- 根据8.3 要证明$\sum_{n=0}^{\infty} \sum_{m=0}^{n}|c_{n} \binom{n}{m}a^{n-m}(x-a)^m|$ 收敛
	- $=\sum_{n=0}^{\infty} |c_{n}|(|x-a|+|a|)^n$ 是收敛 

8.5 级数$\sum a_{n}x^n, \sum b_{n}x^n$在开区间$S=(-R,R)$中收敛，S里有些x使得 $\sum_{n=0}^{\infty}a_{n}x^n=\sum_{n=0}^{\infty}b_{n}x^n$
- 这样的所有x的集合是E,若E有极限点 属于 S,则$a_{n}=b_{n}$
- 证明:
	- $c_{n}=a_{n}-b_{n}$令$f(x)=\sum_{n=0}^{\infty}c_{n}x^n, x\in S$
	- E上$f(x)=0$
	- A=E的极限点集
	- B=S-A
	- 因为极限点性质，B是开集
	- 对于任意A中的点$x_0$ , 根据8.4 在此点展开，那么若有非零系数，设非零系数最小幂次是k次，记作$d_k$，那么 $\frac{f(x)}{(x-x_{0})^k}(x_{0})=d_{k}$, 从而f的一个去心邻域内 全非零$f(x_{1}\in x_{0}邻域) (x_{1}-x_0)^k \cdot d_k邻域$ 和极限点 矛盾
	- 说明 每个A中点$x_0$的一个邻域 $f(x)=0$,从而 这个邻域 属于A, 所以A是开集，而S=A并B, A和B均开，S是连通的，那么B为空，所以S=A=E，得证


### 指数函数与对数函数 the exponential and logarithmic functions

$E(z)=\sum_{n=0}^{\infty} \frac{z^n}{n!}\dots(25)$

比值判敛法说明这个级数对于一切复数z收敛， 

用3.50

$E(z)E(w)=\sum \frac{z^n}{n!} \sum \frac{w^m}{m!}= \sum_{n=0}^{\infty} \sum_{k=0}^{n} \frac{z^kw^{n-k}}{k!(n-k)!}$ 考虑 n+m的和的角度来统计

$=\sum_{n=0}^{\infty} \frac{1}{n!} \sum_{k=0}^{n} \binom{n}{k} z^kw^{n-k} = \sum_{n=0}^{\infty} \frac{(z+w)^n}{n!}$

也就是 $E(z)E(w)=E(z+w)$, 这个 在不加严格适用范围的角度看就是 $e^ze^w=e^{z+w}$, 所以章节里是指数函数
- $E(z)E(-z)=E(z-z)=E(0)=1$ emmm这不是带入0,而是 上面过程中 倒数第二个式子，注意对z+w的结果=0时的特殊讨论？ 还是在这个情况下$(\epsilon)^0=1$ 
- 一切z,有$E(z) >0$, 
- $E(+\infty)\to +\infty$
- $E(-\infty)\to 0$
- 在$[0,\infty)$单调 $\to$ 在$(-\infty,0]$单增，全单增， 由E的定义
- $E'(z)=E(z)$
- $E( \sum z_{i} )=\prod E(z_{i})$
- $E(1)=e$ 前面e的定义
- $E(n)=e^n$ 加法扩展
- $E(p/q)=e^{p/q}$ , 到正有理数
- $E(-p/q)=e^{-p/q}$ 到全体有理数
- $e^x=\sup e^p,p < x,p\in \mathbb{Q}=E(x)$ 到实数...(35)

8.6 $R^1$上 按照 (25)（35定义了$e^x$
- 一切x 连续且可微
- $(e^x)'=e^x$
- $e^x > 0$ 严格递增
- $e^{x+y}=e^xe^y$
- $e^{+\infty }=+\infty,e^{-\infty}=0$
- 任何n, $\lim_{ x \to \infty }x^ne^{-x}=0$
	- $e^x> \frac{x^{n+1}}{(n+1)!}$
	- $x^ne^{-x}< \frac{(n+1)!}{x}$
	- 指数比x的任意幂次都更快趋于 $+\infty$
- 严格递增 且可微，存在反函数L（严格递增且可微）
	- $E(L(y))=y, L(E(x))=x$
	- $L'(E(x))E(x)=1$
		- $L'(y)=\frac{1}{y}$
		- $L(1)=0$
		- $L(y)=\int_{1}^y \frac{1}{x} dx$
	- $L(uv)=L(u)+L(v)$
	- $x^n=E(nL(x))$
		- 同样是 整数=>有理数=>实数
	- $x^a=e^{a\log x}$
	- $(x^a)'=ax^{a-1}$
	- $\lim_{ x \to +\infty }x^{-a}\log x=0$  比任何正数次幂增长都慢，	

### 三角函数 the trigonometric functions

$C(x)=\frac{1}{2}[E(ix)+E(-ix)]$

$S(x)=\frac{1}{2i}[E(ix)-E(-ix)]$

证明分别和 $\cos x,\sin x$一致
- $E(\bar{x})=\bar{E(x)}$
- $E(ix)=C(x)+iS(x)$ 这一切都建立在E的对于一切复数z收敛的前提下
- $x$实数时，C,S分别为实部和虚部$|E(ix)|^2=E(ix)\overline{E(ix)}=E(ix)E(-ix)=1$
- $|E(ix)|=1$, 即$C^2+S^2=1$
- $C(0)=1,S(0)=0$
- $C'(x)=-S(x),S'(x)=C(x)$
- 存在$C(x)=0$
- $x_{0}$是使得$C(x_{0})=0$最小正数, 定义$\pi = 2x_{0}$??????这........那就是看成首次定义这个常数值，圆周率，也挺好，从数分里面，e和pi都被 更数学化的定义了
- 能得到 关于$2x_{0}=\pi$ 的一些表达式
- $E(\pi i)=-1,E(2\pi i)=1$
- $E(z+2\pi i)=E(z)$
- 研究顺序 定义，端点，范数，导数，零点，周期

8.7 
- $E$ 是以$2\pi i$为周期的周期函数, wow！！！
- C,S是以$2\pi$为周期的周期函数
- $0<t<2\pi$ ,$E(it)\neq 1$
	- 证明: $0< t < \frac{\pi}{2}$
		- $E(it)=x+iy$说明$0 < x <1,0 < y < 1$
		- $E(4it)=(x+iy)^4=x^4-6x^2y^2+y^4+4ixy(x^2-y^2)$
		- 若为实数，则$x^2-y^2=1$,由$C^2+S^2=1$所以$x^2+y^2=\frac{1}{2}$, $E(4it)=-1$
- z是复数, $|z|=1$, 在$[0,2\pi)$存在着唯一t,使得$E(it)=z$
	- 唯一: $E(it_{1})(E(it_{2}))^{-1}\neq 1$
	- 存在$z=x+iy$, 而$C$在$[0,2\pi)$连续可取得，且$C^2+S^2=1$
- 推论
	- $\gamma(t)=E(it),0\leq t\leq 2\pi$简单闭合曲线，是平面上单位圆$\gamma'(t)=iE(it)$
	- 长度$\int_{0}^{2\pi} |\gamma '(t)|dt=2\pi$ 单位圆周长
- 这些 性质 都是E的定义和C,S的定义而没有直接几何概念

### 复数域的代数完备性 the algebraic completeness of the complex field

代数上复数域是完备的：任何复系数，不是常数多项式，必有复数根

complex field is algebraically complete: every nonconstant polynomial with complex coefficients has a complex root

8.8 $P(z)=\sum_{k=0}^{n}a_{k}z^k$, 必有某个复数z使 $P(z)=0$
- 不妨设最高次系数=1(否则全部系数除以最高次系数), $a_{n}=1$
- $\mu=\inf |P(z)|$
- 若$|z|=R$ 那么
	- $|P(z)| \ge R^n[1-|a_{n-1}R^{-1}-\dots-|a_{0}|R^{-n}]$ 三角不等式 和 范数
	- 随着$R\to +\infty$ 右侧 $\to +\infty$, 也就是 $|z|>R_{0}$ 右侧$|P(z)|>\mu$ ， 因为$|P|$在以0为圆形$R_0$为半径圆面上连续，这里是圆面也就是$|z|\le R_{0}$的所有点
	- 4.16 紧度量空间 连续是函数（这里是|P|) 存在点 取到 sup和inf,所以 能有$P(z_{0})=\mu$
	- 接下来证明$\mu = 0$
	- 反证 $Q(z)=\frac{P(z+z_{0})}{P(z_{0})}$ ，Q是（非 常数多项式），$Q(0)=1$，且一切z有$|Q(z)|\ge_{1}$
	- $Q(z)=1+\sum_{i=k}^n b_{i}z^i$其中$b_{k}\neq {0},b_{n}\neq {0}$
	- 根据8.7 存在实数$\theta$使得$e^{ik\theta}=- \frac{|b_{k}|}{b_{k}}$ 这个作用是扭到实数轴上
	- 取$r>0$且$r^k|b_{k}|<1$
		- 有$|1+b_{k}r^ke^{ik\theta}|=1-r^k|b_{k}|$
		- $|Q(re^{i\theta})|\le 1-r^k(|b_{k}|-r|b_{k+1}|-\dots-r^{n-k}|b_{n}|)$
			- r足够小时且可取到，右侧 括号内可以为正，从而 严格小于1,矛盾

### Fourier级数 fourier series

8.9 三角多项式是形如 $f(x)=a_{0}+\sum_{n=1}^{N}(a_{n}\cos nx+b_{n}\sin nx)$, x为实数的有限和，其中$a_{i},b_{i}$都是复数
- 也可以写作$f(x)=\sum_{n=-N}^{N}c_{n}e^{inx}$, 显然每个三角多项式以$2\pi$为周期
	- 是实多线式当且$c_{-n}=\overline{c_{n}}$
- $\frac{1}{2\pi} \int_{-\pi}^{\pi} e^{inx} dx$ 在$n=0$时为1,其它整数时为0
- $c_{m}=\frac{1}{2\pi} \int_{-\pi}^{\pi} f(x)e^{-imx} dx$ 或者从正交性理解, 当$|m| \ge N$时 结果为0， 称作Fourier系数
- 定义三角级数形如 $\sum_{-\infty}^{\infty}c_{n}e^{inx}$, 部分和是上面$\sum_{-N}^{N}$的形式
- 称作 f的傅里叶级数
- 研究这样级数与f的关系
- 起源于物理问题，振动理论和热传导理论，Fourier所写的 热的解析理论

8.10  正规正交系 orthonormal
- $[a,b]$上$\phi_{n}$ 列 满足
- $\int_{a}^b \phi_{n}(x)\overline{\phi_{m}(x)} \, dx=0,n\neq m$ 正交， 称作正交系 orthogonal system of functions on $[a,b]$
- 加上$\int_{a}^b \phi_{n}\overline{\phi_{n}}\, dx=1$ 也就是normal, 一起就是orthonormal
- 例如 $[-\pi,\pi]$上函数 $(2\pi)^{- 1/2}e^{inx}$
- 若$\phi_{n}$是$[a,b]$上正规正交系，且 $c_n=\int_{a}^b f(t)\overline{\phi_{n}(t)} dt$ 称作 f关于$\phi_{n}$的第n个Fourier系数
	- $f(x)\sim \sum_{n=1}^{\infty}c_{n}\phi_{n}(x)$ 称作f关于$\phi$的傅里叶级数
	- 这里$\sim$仅表示按照上述计算的，并不蕴含 级数收敛的任何性质
- 另外注意8.9的形式 下标有正负，而这里 作为函数列，下标没有负，甚至没有规定 具体的函数列内的顺序

8.11 $\phi_{n}$是$[a,b]$上的正规正交系，令$s_{n}(x)=\sum_{m=1}^{n}c_{m}\phi_{m}(x)$ 是f的Fourier级数的第n个部分和
- $t_{n}(x)=\sum_{m=1}^{n}\gamma_{m}\phi_{m}(x)$
- 有 $\int_{a}^b |f-s_{n}|^2 \, dx \leq \int_{a}^b |f-t_{n}|^2 \, dx$ 这里是我们建立的 评价函数，评价逼近的最佳，越小越佳，而用的是均方 也就是差值平方的均值
- 当且仅当$\gamma_{m}=c_{m}$时 等号 才成立
- 也就是说 所有$t_{n}$ 中$s_n$是 对于f的最佳均方逼近 gives the best possible mean square approximation to f
- 也就是要证明 在上述给定评价下，$s_n$ 最好，而$t_{n}$是 和 $s_{n}$的 级数的元素结构相同，但系数不同的方案
- 证明: 
	- 有$\int f \bar{t_{n}}=\int f \sum \bar{\gamma_{m}}\bar{\phi_{m}}=\sum c_{m}\bar{\gamma_{m}}$
	- 有$\int |t_{n}|^2=\int t_{n}\bar{t_{n}}=\int \sum \gamma_{m}\phi_{m}\sum \bar{\gamma_{k}}\bar{\phi_{k}}=\sum |\gamma_{m}|^2$
	- $\int |f-t_{n}|^2=\int |f|^2-\int f \bar{t_{n}}-\int \bar{f}t_{n}+\int |t_{n}|^2$
	- $=\int |f|^2 -\sum c_{m}\bar{\gamma}_{m} - \sum \bar{c}_{m}\gamma_{m}+\sum \gamma_{m}\bar{\gamma}_{m}$ 带入上面的
	- $=\int |f|^2 - \sum |c_{m}|^2 + \sum |\gamma_{m}-c_{m}|^2$
		- 那么 最后这个 $\ge 0$ 在$\gamma_{m}=c_{m}$时取到
- 也有$\int |f-s_{n}|^2=\int |f|^2 - \sum |c_{m}|^2 \ge 0$
	- 即$\int_{a}^b|s_{n}(x)|^2 dx=\sum |c_{m}|^2 \leq \int_{a}^b |f(x)|^2dx$
	- 前面是 $\phi$正规正交性 和 $s_n$定义得到的

8.12 上面最后式子中是$\sum_{1}^n$
- 现在把n趋于$+\infty$
- Bessel不等式 $\sum_{n=1}^{\infty}|c_{n}| \le \int_{a}^b |f(x)|^2 \, dx$
- 其中$c_{n}$是 上面方式得到的，
- 特别的$\lim_{ n \to \infty } c_{n}=0$

8.13 三角级数Trigonometric serires，将要考虑函数以$2\pi$为周期,在$[-\pi,\pi]$上 Riemann可积分，因此在每个有界闭 上科技，那么f的Fourier级数便是
- $\sum_{-\infty}^{\infty} c_{n}e^{inx}$ 或者说关于 $e^{inx}$的正交系的 Fourier级数, 注意不normal, 乘上$\frac{1}{\sqrt{ 2\pi }}$才normal
- 其中N项是$s_{N}(x)=\sum_{-N}^Nc_{n}e^{inx}$
- $\sum_{-N}^N |c_{n}|^2\le \frac{1}{2\pi}\int_{-\pi}^\pi |f(x)|^2 \, dx$

Dirichlet 核kernel
- $\displaystyle D_N(x)=\sum_{n=-N}^{N}e^{inx}=\frac{\sin(( N+ \frac{1}{2} )x ） }{\sin\left( \frac{x}{2} \right)}$
	- 后面通过 $(e^{ix}-1)D_{N}(x)=e^{i(N+1)x}-e^{-iNx}$两边同时乘以$e^{- ix/2}$ 得到
- $s_{N}(x)=\sum_{-N}^{N} \frac{1}{2\pi}\int_{-\pi}^\pi f(t)e^{-int}dte^{inx}$
- $=\frac{1}{2\pi}\int_{-\pi}^\pi f(t) \sum_{-N}^{N} e^{in(x-t)} \, dt$
- $=\frac{1}{2\pi}\int_{-\pi}^\pi f(t) D_{N}(x-t) \, dt$
- $=\frac{1}{2\pi}\int_{-\pi}^\pi f(x-t) D_{N}(t) \, dt$

8.14 Fourier逐点收敛
- 如果对于点x, 有常数$\delta >0, M < \infty$ 对于所有$t\in (-\delta,\delta)$
- $|f(x+t)-f(x)|\le M|t|$
- 便一定有 $\lim_{ N \to \infty } s_{N}(f;x)=f(x)$
- 证明:
	- $g(t)= \frac{f(x-t)-f(x)}{\sin\left( \frac{t}{2} \right)}$
		- 补充定义$g(0)=0$
	- $\frac{1}{2\pi}\int _{-\pi}^\pi D_{N}(x) \, dx =1$
	- $s_{N}(f;x)-f(x)=\frac{1}{2\pi}\int _{-\pi}^\pi (f(x-t)-f(x))D_{N}(t)  \, dt$
		- $=\frac{1}{2\pi}\int_{-\pi}^\pi g(t) \sin\left( \left( N+\frac{1}{2} \right)t \right) \, dt$
		- $=\frac{1}{2\pi}(\int [g(t)\cos\left( \frac{t}{2} \right)]\sin(Nt)dt+\int [g(t)\sin\left( \frac{t}{2} \right)]\cos(Nt)dt )$ 
		-  左边方括号里 $\le \frac{M| t|}{\tan \frac{t}{2}}$ 有界
		-  右边方括号里 $\le M| t|$ 有界
		- 而这两个积分 可以看成8.12 中 方括号中关于，sinNt,cosNt 的取系数，所以会趋于0（注意并不是因为N 变大而趋于0（虽然也是），而是因为列趋于无穷而趋于0）
	- 所以 逐点收敛到f
- 推论： 某个some segment J 区间内J内一切x, f(x)=0,那么每个$x\in J$ ,$\lim s_{N}(f;x)=0$
		- 另一个表述，x邻域neighborhood的一切t, $f(t)=g(t)$ 那么$N\to \infty$时
		- $s_{N}(f;x)-s_{N}(g;x)=s_{N}(f-g;x)\to 0$
		- 局部化定理 localization theorem
			- {$s_{N}(f;x)$}序列 的behaviour, as far as convergence is concerned, depends only on the values of f in some (arbitrarily small)neighborhood of x
			- 两个Fourier series 可能在one interval有相同的 behavior,但是 在other interval 完全不同的behave
			- 而幂级数 8.5 开区间中 两个幂级数相等的点还有极限点会让两个幂级数相等
				- 而 Fourier级数没有这个性质


8.15 f连续 以$2\pi$为周期，且$\epsilon >0$那么便有一个三角多项式P,对一切实数x 有$|P(x)-f(x)|<\epsilon$
- $x\to e^{ix}$ 把$R^1$上的f映射到 单位圆T上的函数
- 三角多项式，形成一个复数自伴代数$\mathscr{A}$ 能分离T上的点，不在T的点消失，T紧，那么$\mathscr{A}$在$\mathscr{C}(T)$内稠密，得证

8.16 Parseval 定理 f,g都是 Riemann可积 且周期为$2\pi$的函数
- $f(x)\sim \sum c_{n}e^{inx},g(x) \sim \sum \gamma_{n}e^{inx}$
- 那么 $\lim_{ N \to \infty } \frac{1}{2\pi}\int_{-\pi}^{\pi} |f(x)-s_{N}(f;x)|^2dx=0$ 书上勘误s好几个写成大写了
	- 均平方 趋于0
- 令 $||h||_{2}=(\frac{1}{2\pi}\int _{-\pi}^\pi |f(x)|^2 dx)^{1/2}$
	- 勘误 中文书 这里开始$\epsilon <0$了
	- $||f-s_N(f)||_2$ 拆成$f-h,h-s_{N}(h),s_{N}(h)-s_{N}(f)$
		- 第一个 对于 f黎曼可积，那么根据6章习题12 有，一个合适的分法下 有连续函数h(在该分法下每段变成首位不变线段)，g在上下和在f上下和之间，那么$||f-h||_{2} < \epsilon$
		- 第二个 根据8.15 存在三角多项式P 和$||P-h||_2 < \epsilon$
			- 8.11 $s_N$是最优 均方，那么能找到更优的 幂次比P更大的 $s_{N}(h)$, 使得$||h-s_{N}(h)||_{2} \leq ||h-P||_{2} < \epsilon$
		- 第三个$=||s_{N}(h-f)||_{2}$ 根据8.11 $\le ||h-f||_{2} <\epsilon$
		- 再加上三角不等式6章练习11
- $\frac{1}{2\pi}\int _{-\pi}^\pi f(x)\overline{g(x)} dx = \sum_{-\infty}^{\infty} c_{n}\bar{\gamma}_{n}$
	- $\frac{1}{2\pi}\int _{-\pi}^\pi |f(x)|^2 dx = \sum_{-\infty}^{\infty} |c_{n}|^2$
	- 这两个也就是上面的 方法 不过用$s_{N}(f)$来替换f,最后schwarz不等式
	- $|\int f \bar{g}-\int s_{N}(f)\bar{g}|\leq \int |f-s_{N}(f)||g| \leq \left( \int |f-s_{N}|^2 \int |g|^2 \right)^{1/2}$

### Gamma函数 the gamma functions

与阶乘有密切的关系，时常在分析学的医疗不道德地方出现。 
- 延伸阅读 P.J.Davis: Amer.Math.Monthly 1959年
- Artin的书

以下也可以看作习题

8.17 定义 $0 < x < \infty$时
- $\Gamma(x)=\int_{0}^{\infty}t^{x-1}e^{-t} \, dx$
- 对于这些x,该积分收敛
- 有几个玩法
	- $\int_{0}^1 x^n \log xdx$ 用分部积分 最后换元
	- $\int_{0}^\infty e^{-ct}dt=\frac{1}{c}$ 对于常数成立，现在把c换成y 然后n次导，最后取点1
	- 还是上面式子, c用1-x代换，右边=$\sum x^i$，然后 与x相关展开称幂级数，认为 同幂次的 系数相等，而系数就是这个表达式

8.18 定理 $(0,\infty)$ 定义域上
- $\Gamma(x+1)=x\Gamma(x)$ 分部积分可证明
- $\Gamma(n+1)=n!$, 根据$\Gamma(1)=1$归纳法可证明
- $\log\Gamma$ 是凸的
	- 6.章习题10 Holder不等式
	- $\Gamma\left( \frac{x}{p}+ \frac{x}{q} \right)\leq \Gamma(x)^{1/p}\Gamma(y)^{1/q}$
8.19 Bohr与Mollerup发现, these 3 properties characterize $\Gamma$ completely
- 即 如果满足上述性质 正值函数，那么 这样的函数 $f=\Gamma$
- 也就是证明是满足上述性质的唯一函数
- 证明：
	- 注意到 第一条，所以只用关心(0,1)上的性质
	- $\varphi=\log f$
		- 有 $\varphi(x+1)=\varphi(x)+\log x$
			- 对于$x\in(0,1)有 $\varphi(n+1+x)=var(x)+\log[x(x+1)\dots(x+n)]$		
		- $\varphi(1)=0$ 且$\varphi$是凸的
			- 对于正整数 $\varphi(n+1)=\log(n!)$
		- 凸的: 对于$x\in(0,1)$
			- $\frac{\varphi(n+1)-\varphi(n)}{(n+1)-n}\le \frac{\varphi(n+1+x)-\varphi(n+1)}{(n+1+x)-(n+1)} \le \frac{\varphi(n+2)-\varphi(n+1)}{(n+2)-(n+1)}$
			- $\log n\le \frac{\varphi(n+1+x)-\varphi(n+1)}{x} \le \log(n+1)$
			- 乘x减去$\log n$
			- $0 \leq \varphi(x)-\log\left[  \frac{n!n^x}{x(x+1)\dots(x+n)} \right] \leq x \log\left( 1+ \frac{1}{n} \right)$
				- 最右，n趋于无穷时趋于0 证明了唯一性？
				- 得到了$\Gamma(x)=\lim_{ n \to \infty } \frac{n!n^x}{x(x+1)\dots(x+n)}$
- 好吧 这是证明唯一性了，还是想说如果没有定义式有办法得到吗

8.20 这中文翻译beta就翻译了个B，离谱。Beta函数,第一欧拉积分
- $Beta(x,y)=\int_{0}^1 t^{x-1}(1-t)^{y-1}dt=\frac{\Gamma(x)\Gamma(y)}{\Gamma(x+y)}$ 这里 也一定程度上 说明为了好看，那更需要委屈一下上面的$\Gamma(n+1)=n$而不是$\Gamma(n)=n$
- $B(1,y)=\frac{1}{y}$
- 对于每个固定y是x的凸函数
- $B(x+1,y)=\frac{x}{x+y}B(x,y)$
	- 证明分部积分
- $\Gamma(x)=\frac{\Gamma(x+y)}{\Gamma(y)}B(x,y)$

8.21 一些推论 $t=\sin^2\theta$
- $2\int_{0}^{\pi/2} (\sin\theta)^{2x-1}(\cos\theta)^{2y-1}=\frac{\Gamma(x)\Gamma(y)}{\Gamma(x+y)}$
- 特别的$\Gamma\left( \frac{1}{2} \right)=\sqrt{ \pi }$
- 另一方面 $\Gamma(x)=2\int_{0}^{\infty}s^{2x-1}e^{-s^2}ds$
	- $\int_{-\infty}^{\infty}e^{-s^2}ds=\Gamma\left( \frac{1}{2} \right)=\sqrt{ \pi }$
- $\displaystyle \Gamma(x)=\frac{2^{x-1}\left( \Gamma\left( \frac{x}{2} \right) \Gamma\left( \frac{x+1}{2} \right) \right)}{\Gamma\left( \frac{1}{2} \right)}$ ...... ???? how

8.22 stirling 公式
- $\displaystyle \lim_{ x \to \infty } \frac{\Gamma(x+1)}{\left( \frac{x}{e} \right)^x \sqrt{ 2\pi x }}=1$
- 对于很大的x可以估算
- 证明 令u=t/x-1
	- $\Gamma(x+1)=x^{x+1}e^{-x}\int_{-1}^{\infty} [(1+u)e^{-u}]^x \, dx$
	- $(1+u)e^{-u}=e^{-\frac{u^2}{2} h(u)}$
	- $h(u)=\frac{2}{u^2}[u-\log (1+u)]$
		- $h(0)=1$定义
		- h连续函数，从无穷递降到0
	- $s=\frac{u}{\sqrt{ \frac{2}{x} }}$
	- $\Gamma(x+1)=x^xe^{-x}\sqrt{ 2x }\int_{-\infty}^\infty g_{x}(s) ds$
		- $g_{x}(s)=e^{-s^2h(s \sqrt{ x/2 })}$当$s > -\sqrt{ \frac{x}{2} }$
		- $g_{x \to \infty}(s)\to e^{-s^2}$逐点收敛
		- $[-A,A]$中上面收敛是一致的
		- s < 0 时 $0 < g_x(s) < e^{-x^2}$
		- s > 0且x > 1时, $0 < g_x(s) < g_1(s)$
		- $\int_{0}^\infty g_{1}(s) \, ds < \infty$
