---
title: Walter Rudin 数学分析原理 8 一些特殊函数
date: 2025-03-10
categories:
  - 数学分析
tags:
  - 微积分
  - 数学分析
---


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

<!--more-->

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
