---
title: Walter Rudin 数学分析原理 7 函数序列与函数项极限
date: 2025-03-03
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
