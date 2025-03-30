---
title: Walter Rudin 数学分析原理 6 Riemann-Stieltjes积分
date: 2025-02-24
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
