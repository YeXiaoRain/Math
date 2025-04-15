---
title: LarsVAhlfors 复分析 2 复函数
date: 2025-04-08
categories:
  - 复分析
tags:
  - 复分析
  - 复函数
---


# 2. 复函数 complex functions

## 2.1 解析函数的概念 introduction to the concept of analytic function

只有解析analytic函数 或 全纯holomorphic函数可以自由的进行微分和积分

考虑
- 实变量 实函数
- 复变量 实函数
- 复变量 复函数
- 实变量 复函数

每个函数都定义在一个开集上

<!--more-->

### 2.1.1 极限与连续性 limits and continuity

定义1 $x$趋于a时 函数$f(x)$有极限A，记为
- $\lim_{x\to a} f(x) =A$
- 当且仅当$\forall \epsilon >0,\exists \delta > 0, \forall x, x\neq a, |x-a|<\delta$有$|f(x)-A|<\epsilon$
- 简单说控制 x在a的去心半径r($\delta$)，能控制f(x)在A的半径$\epsilon$
- 在复数时，只有一种无穷大
- $\lim_{x\to a} \overline{f(x)} =\bar{A}$
- $\lim_{x\to a} \text{Re}\,f(x) =\text{Re}{A}$
- $\lim_{x\to a} \text{Im}\,f(x) =\text{Im}{A}$
- 连续: $\lim_{x\to a}f(x) = f(a)$
- 导数: $f'(a)= \frac{f(x)-f(a)}{x-a}$
  - 复变量的实函数，要么导数为零，要么导数不存在，因为取增量h,和ih,如果导数存在，会分别得到实数导数和纯虚数导数
  - 实变量的复函数，可以看成实部和虚部分开的，函数的导数的合并 $z(t)=x(t)+iy(t), z'=x'+iy'$ 

### 2.1.2 解析函数 analytic functions

解析函数: 定义域上没一点都有导数的复变量的复函数组成，全纯函数 也常用来表示同样的意义

- 解析函数的 和 是解析的
- 解析函数的 积 是解析的
- 解析函数的 差 是解析的
- 解析函数的 商 是解析的（在分母的函数永不为零

勘误（中文这里导数定义，又少了 导的符号）
- $f'(z)=\lim_{h\to 0}\frac{f(z+h)-f(z)}{h}$
- 如果存在，则$f(z+h)-f(z)=h (f(z+h)-f(z))/h = 0 f'(z)=0$ 说明 必须要连续
- 如果$f(z)=u(z)+iv(z)$那么u,v也是连续
- 如果 h 是实值,y保持常数，变成对x的偏导数 $f'(z)=\frac{\partial f}{\partial x}=\frac{\partial u}{\partial x}+i\frac{\partial v}{\partial x}$
- 类似的 如果h=ik是纯虚，那么有 $f'(z)=\frac{1}{i}\frac{\partial f}{\partial y}=-i\frac{\partial u}{\partial y}+\frac{\partial v}{\partial y}$
- 进一步的 $f(z)$ 需要满足$\frac{\partial f}{\partial x}=-i \frac{\partial f}{\partial y}$ 表达式(5)
- 分解成实方程组
  - Cauchy-Riemann 柯西-黎曼 微分方程组，任何解析函数的实部和虚部都必须满足这个方程组)

$$\frac{\partial u}{\partial x}=\frac{\partial v}{\partial y},\frac{\partial u}{\partial y}=- \frac{\partial v}{\partial x}\tag{6}$$


例如，对于量 $| f'(z) |^2$，有

$| f'(z) |^2 = \left(\frac{\partial u}{\partial x}\right)^2 + \left(\frac{\partial v}{\partial y}\right)^2 = \left(\frac{\partial u}{\partial x}\right)^2 + \left(\frac{\partial v}{\partial x}\right)^2=\frac{\partial u}{\partial x}\frac{\partial v}{\partial y}-\frac{\partial u}{\partial y}\frac{\partial v}{\partial x}$

最后一个表达式表明 $| f'(z) |^2$ 是 $u$ 及 $v$ 关于 $x$ 及 $y$ 的雅可比Jacobian行列式。

后面我们将证明解析函数的导数本身也是解析的。根据这一事实可知 $u$ 及 $v$ 将具有各阶连续偏导数，特别是其**混合导数相等**。由此可得

$\Delta u = \frac{\partial^2 u}{\partial x^2} + \frac{\partial^2 u}{\partial y^2} = \frac{\partial }{\partial x}(\frac{\partial v}{\partial y}) + \frac{\partial}{\partial y}(-\frac{\partial v}{\partial x}) = 0,$

类似的 $\Delta v = \frac{\partial^2 v}{\partial x^2} + \frac{\partial^2 v}{\partial y^2} = 0.$

满足拉普拉斯Laplace方程 $\Delta u=0$ 的函数 $u$ 称为调和harmonic函数。因此，一个解析函数的实部和虚部是调和的。

如果两个调和函数 $u$ 及 $v$ 满足柯西-黎曼方程组，那么就称 $v$ 为 $u$ 的共轭调和函数conjugate harmonic。实际上，$v$ is determined only up to an additive constant, so that the used of the definite article ,although traditional , is not quite accurate 只能确定到不计一个附加常数。在同样的意义上，$u$ 是 $-v$ 的共轭调和函数。

这里我们不讨论可加于调和函数的最弱的正规条件。不过，我们要证明由一对共轭调和函数所确定的函数 $u+iv$ 始终是解析的，为此，我们作出明确的假设，设 $u$ 及 $v$ 具有连续的一阶偏导数。在微积分学中曾经证明，正是在这些正规regularity条件下，可以有

$u(x+h,y+k) - u(x,y) = \frac{\partial u}{\partial x} h + \frac{\partial u}{\partial y} k + \epsilon_1,$

$v(x+h,y+k) - v(x,y) = \frac{\partial v}{\partial x} h + \frac{\partial v}{\partial y} k + \epsilon_2,$

其中余数 $\epsilon_1, \epsilon_2$ 比 $h+ik$ 更快地趋于零，即当 $h+ik \to 0$ 时 $\epsilon_1/(h+ik) \to 0$ 并且 $\epsilon_2/(h+ik) \to 0$. 记 $f(z)=u(x,y)+iv(x,y)$，由关系式(6)得

$f(z+h+ik) - f(z) = \left(\frac{\partial u}{\partial x} + i \frac{\partial v}{\partial x}\right)(h+ik) + \epsilon_1 + i\epsilon_2,$

因此

$\lim_{h+ik \to 0} \frac{f(z+h+ik) - f(z)}{h+ik} = \frac{\partial u}{\partial x} + i \frac{\partial v}{\partial x}.$

故 $f(z)$ 是解析的。

综上所述:
- 如果 $u(x,y)$ 和 $v(x,y)$ 具有满足柯西-黎曼微分方程组的连续一阶偏导数，则 $f(z)=u(z)+iv(z)$ 是解析的，并且具有连续导数 $f'(z)$，反之亦然。

一个调和函数的共轭函数可以用积分来求得，在一些简单的情形，可以很明显地计算出来。
- 例如，$u=x^2-y^2$ 是调和的(二阶偏导和为零:1+(-1)=0)，而且 $\frac{\partial u}{\partial x}=2x$, $\frac{\partial u}{\partial y}=-2y$. 
- 因此共轭函数必须满足 $\frac{\partial v}{\partial x}=2y,\frac{\partial v}{\partial y} = 2x$
- 从第一式得 $\frac{\partial v}{\partial x} = 2xy + \varphi(y)$，其中 $ \varphi(y) $ 仅是 $ y $ 的函数。
- 代入第二式得 $\varphi'(y) = 0$。因此 $\varphi(y)$ 是一个常数
- $x^2 - y^2$ 的最一般的共轭函数是 $2xy + C$，其中 $C$ 是常数。
- 注意到 $x^2 - y^2 + 2ixy = (x+iy)^2 = z^2$，因此实部为 $x^2 - y^2$ 的解析函数为 $z^2 - 2ixy = z^2 + ic$。

---

有一个有趣的形式方法，它可以突出解析函数的本质。我们提出这一方法时要清楚地告诉读者，这个方法纯粹是形式的，不具有任何证明力。

考察两个实变量的复函数 $f(x, y)$。引入复变量 $z = x + iy$ 及其共轭 $\bar{z} = x - iy$
- 我们可以记 $ x= \frac{1}{2}(z + \bar{z})$，$y = -\frac{1}{2}i(z - \bar{z})$。
- 采用这种变量变换就认为 $f(x, y)$ 是 $z$ 和 $\bar{z}$ 的函数，而把 $z$ 和 $\bar{z}$ 看成自变量（不去考虑它们是互相对称的这一事实,看成无关的两个）。如果微积分法则可用，那么可以得到

$\frac{\partial f}{\partial z} = \frac{1}{2} \left( \frac{\partial f}{\partial x} - i \frac{\partial f}{\partial y} \right), \quad \frac{\partial f}{\partial \bar{z}} = \frac{1}{2} \left( \frac{\partial f}{\partial x} + i \frac{\partial f}{\partial y} \right)=0.$,(根据 (5) )

这些表达式作为极限定义时并不方便，但我们仍然可以把它们作为对于 $z$ 及 $\bar{z}$ 的符号导数。

我们知道解析函数以条件 $\frac{\partial f}{\partial \bar{z}} = 0$ 为特征。因此可以说一个解析函数与 $\bar{z}$ 无关，而仅是 $z$ 的函数。

这就是我们把解析函数看成确实是一个复变量的函数而不视为两个实变量的复函数的理由。

根据同样的形式论据，可以推导出一个非常简单的方法，通过这个方法，可以不用积分就能算出实部已知的调和函数 $u(x, y)$ 的解析函数 $f(z)$。首先注意到共轭函数 $\overline{f(z)}$ 关于 $z$ 的导数为零，并且因此可以把它看成 $ \bar{z} $ 的函数，我们记这个函数为 $\bar{f}(\bar{z})$。用这个记法可写出恒等式

$u(x, y)= \frac{1}{2} (f(x,y)+\overline{f(x,y)}) = \frac{1}{2} \left[ f(x + iy) + \bar{f}(x - iy) \right].$

有理由认为这是一个形式恒等式，而且即使 $x, y$ 是复数，等式也成立。如果代入 $x = z/2$，$y = z/2i$，得

$u(z/2, z/2i) = \frac{1}{2} \left[ f(z) + \bar{f}(0) \right].$

- z取 0，即 $f(0) = u(0, 0) + ic$, c是任意常实数 都可以
- Since f(z) is only determined up to a purely imaginary constant, 因此我们可以假设 $f(0)$ 为实数， $\bar{f}(0) = u(0, 0)$
- 从而函数 $f(z)$ 可以用公式 $f(z) = 2u(z/2, z/2i) - u(0, 0)$ 计算。可任意加上一个纯虚数常数。

在这种形式中，所用的方法明确地限制函数 $u(x,y)$是$x,y$的有理函数，因为函数对讨论的复数值必须有意义

#### 2.1.2 练习

3. [TODO]求形如$ax^3+bx^2y+cxy^2+dy^3$的最一般的调和多项式，用积分和形式方法确定共轭调和函数及相应的解析函数

5. [TODO]严格证明$f(x)$和$\overline{f(\bar{x})}$是同时解析的

6. [TODO]证明 $u(z),u(\bar{z})$是同时调和的

7. [TODO]证明一个调和函数满足形式微分方程$\frac{\partial^2 u}{\partial z \partial \bar{z}}=0$

### 2.1.3 多项式 polynomials

每一个多项式都是解析函数

$P(x)= \sum a_ix^i$

$P'(x)= \sum a_iix^{i-1}$

$P(z)=0$ 至少有一个根（代数学基本定理，稍后证明）
- 由此可以递降幂次，从而完全因式分解
- 对于出现 h次的 零点，称为h阶(order)零点
- $P(z)=(x-x_i)^hP_h(x)$
- $P'(z)=(x-x_i)^{h-1}W(x)$

定理2.1.3.1 Luca's 卢卡斯定理, 如果多项式 $P(z)$ 的所有零点都在一个半平面内，则导数 $P'(z)$ 的所有零点也都在同一个半平面内。

我们先不考虑重复的点引起的表达式合并,可以得到

$$
\frac{P'(z)}{P(z)} = \frac{1}{z - a_1} + \cdots + \frac{1}{z - a_n}.
$$

假定半平面 $H$ 定义为平面上使 $\operatorname{Im}(z - a)/b < 0$ 的部分（见1章2部分的解析几何）。如果 $a_k$ 在平面 $H$ 上而 $z$ 不在，则有

$$
\operatorname{Im} \frac{z - a_k}{b} = \operatorname{Im} \frac{z - a}{b} - \operatorname{Im} \frac{a_k - a}{b} > 0.
$$

但是倒数的虚部符号相反($\frac{1}{a+ib}=\frac{a-ib}{a^2+b^2}$)。因此，在同一假设下，$\operatorname{Im} \frac{b}{z - a_k} < 0$。如果这对所有的 $k$ 都成立，

$$
\operatorname{Im} \frac{bP'(z)}{P(z)} = \sum_{k=1}^n \operatorname{Im} \frac{b}{z - a_k} < 0,
$$

因此 $P'(z) \neq 0$.

这个定理的简明形式告诉我们：包含 $P(z)$ 零点的最小凸多边形也包含 $P'(z)$ 的零点。

### 2.1.4 有理函数 rational functions

我们现在考虑作为两个多项式之商的有理函数 $R(z) = \frac{P(z)}{Q(z)}$ 的情形。假设 $P(z)$ 和 $Q(z)$ 没有公因子，这是基本的要求，因而没有公共零点。在 $Q(z)$ 的零点上 $R(z)$ 将取值 $\infty$。因此我们必须把它看成扩充平面上的函数，而且它是连续的。$Q(z)$ 的零点zero称为 $R(z)$ 的极点pole，由定义可知极点的阶数等于 $Q(z)$ 的对应零点的阶数。

导数 
$$R'(z) = \frac{P'(z)Q(z) - Q'(z)P(z)}{Q(z)^2}\tag{11}$$
存在当且仅当 $Q(z) \neq 0$。不过，作为 (11) 式右端所定义的有理函数，$R'(z)$ 与 $R(z)$ 具有同样的极点，但每一个极点的阶数增加 1。如果 $Q(z)$ 有重零点，则应注意表达式 (11) 并不以简化形式出现。

如果令变量 $z$ 和函数 $R(z)$ 都以整个扩充平面为取值范围，则可以达到较大的一致。我们可以定义 $R(\infty)$ 为当 $z \to \infty$ 时 $R(z)$ 的极限，但是这个定义不能确定 $\infty$ 处的零点或极点的阶数。因此可以考虑函数 $R(1/z)$，我们可以记这个函数为有理函数 $R_1(z)$，而令$R(\infty) = R_1(0).$

如果 $R_1(0) = 0$ 或 $\infty$，则 $\infty$ 处的零点或极点的阶数就定义为 $R_1(z)$ 在原点处的零点或极点的阶数。

记 $R(z) = \frac{a_0 + a_1 z + \cdots + a_n z^n}{b_0 + b_1 z + \cdots + b_m z^m},$

可以得到 $R_1(z) = R(1/z) = z^{m-n} \frac{a_0 z^n + a_1 z^{n-1} + \cdots + a_n}{b_0 z^m + b_1 z^{m-1} + \cdots + b_m},$

其中 $z^{m-n}$ 属于分子或者分母。因此，
- 若 $m > n$ 则 $R(z)$ 在 $\infty$ 处有一个 $m-n$ 阶零点；
- 若 $m < n$ 则 $R(z)$ 在 $\infty$ 处有一个 $n-m$ 阶极点；
- 若 $m = n$ 则 $R(\infty) = a_n / b_m \neq 0, \infty.$

现在我们可以计算扩充平面上零点和极点的总数。这个计数表明包括 $\infty$ 处的零点在内，零点的个数等于 $m, n$ 两个数中较大的数。极点的个数也一样。零点和极点的共同个数称为有理函数的阶order。
- 例如$\frac{(x-1)(x-2)}{x+1}$, 零点在1,2阶数为2，极点在$-1,\infty$ 阶数也是2
- 例如$x+1+\frac{1}{x-1}$, 零点在x=0 是两阶哦！！

如果 $a$ 为任意常数，则函数 $R(z) - a$ 和 $R(z)$ 有相同的极点，因此有相同的阶。$R(z) - a$ 的零点是方程 $R(z) = a$ 的根，而且如果根的个数按零点有几个就计数几次，则我们有下面的结果：

$p$ 阶有理函数 $R(z)$ 有 $p$ 个零点和 $p$ 个极点，并且每一个方程 $R(z) = a$ 恰好有 $p$ 个根。

一阶有理函数是线性分式 $S(z) = \frac{\alpha z + \beta}{\gamma z + \delta},$
其中 $\alpha \delta - \beta \gamma \neq 0$。这样的分式或者线性变换，将在 3.3 节详细研究。目前我们仅指出方程 $w = S(z)$ 恰好有一个根，事实上可以得到
$z = S^{-1}(w) = \frac{\delta w - \beta}{-\gamma w + \alpha}.$
变换 $S$ 和 $S^{-1}$ 互为逆变换。

线性变换 $z + a$ 称为平行移动parallel translation，$1/z$ 称为逆inversion。前者在 $\infty$ 处有一个不动点，后者将 0 和 $\infty$ 互换。

每一个有理函数具有一个部分分式表示法。为了导出这个表示法，我们先设 $R(z)$ 在 $\infty$ 处有一个极点。计算 $P(z)$ 除以 $Q(z)$，直到余式的次数不大于分母的次数为止。结果可以写成 
$$R(z) = G(z) + H(z),\tag{12}$$

其中 $G(z)$ 为没有常数项的多项式，$H(z)$ 在 $\infty$ 处是有限的。$G(z)$ 的次数是 $\infty$ 处极点的阶数。

多项式 $G(z)$ 称为 $R(z)$ 在 $\infty$ 处的奇部singular part。

设 $R(z)$ 的互不相同的有限极点为 $\beta_1, \beta_2, \ldots, \beta_q$。函数 $R\left(\beta_j + \frac{1}{\xi}\right)$ 是 $\xi$ 的有理函数，在 $\xi = \infty$ 处有一个极点。利用分解式 (12)，可以记

$$
R\left(\beta_j + \frac{1}{\xi}\right) = G_j(\xi) + H_j(\xi),
$$

或者作变量替换(这里注意的是 $G_j$的定义是 上面带入后 分解出不含常数项的部分，和原来的G是不同的,这样的$G_j$的好处是，极限点只有$\xi=\infty$时，同时这个时候和$z=\beta_j$同时发生)

$$
R(z) = G_j\left(\frac{1}{z - \beta_j}\right) + H_j\left(\frac{1}{z - \beta_j}\right).
$$

其中 $G_j\left(\frac{1}{z - \beta_j}\right)$ 是 $\frac{1}{z - \beta_j}$ 的多项式，没有常数项，称为 $R(z)$ 在 $\beta_j$ 处的奇部。当 $z = \beta_j$ 时，函数 $H_j\left(\frac{1}{z - \beta_j}\right)$ 是有限的。

现在考虑表达式

$$
R(z) - G(z) - \sum_{j=1}^q G_j\left(\frac{1}{z - \beta_j}\right). \tag{13}
$$

这是一个有理函数，它不能有异于 $\beta_1, \beta_2, \ldots, \beta_q$ 和 $\infty$ 的极点。在 $z = \beta_j$ 处，变为无穷大的二项之差为 $H_j\left(\frac{1}{z - \beta_j}\right)$，它具有有限的极点，在 $z = \infty$ 处也是一样。因此 (13) 式既没有任何有限的极点，也没有在 $\infty$ 处的极点。一个没有极点的有理函数应当转化为一个常数，如果将这个常数并入 $G(z)$，则得到

$$
R(z) = G(z) + \sum_{j=1}^q G_j\left(\frac{1}{z - \beta_j}\right).
$$

此表达式是微积分中熟知的公式，它在积分理论中被作为一种技巧。然而，只有在引入复数后它才成功地趋于完整。

例: $R(z)=z+\frac{1}{(z-1)(z-2)}$
- 有限极点$\beta_1=1,R(1+\frac{1}{\xi})=-\xi+\cdots$
  - $G_1(\xi)=-\xi$
- 有限极点$\beta_2=2,R(2+\frac{1}{\xi})=+\xi+\cdots$
  - $G_2(\xi)=+\xi$
- $R(z)-G(z)-G_1(\frac{1}{z-1})-G_2(\frac{1}{z-2})=c$
- $R(z)=z + (-\frac{1}{z-1})+(+\frac{1}{z-2})+ c$
- $R(z)=z-\frac{1}{z-1}+\frac{1}{z-2}+c$
- 虽然饶了一圈，但是完成了 分母的拆解, 这在曾经很多应用里 用过，但没有完整的证明过

#### 2.1.4 练习 

2. 如果多项式 $Q$ 具有不同的根 $\alpha_1, \ldots, \alpha_n$，并且假设多项式 $P$ 的次数小于 $n$，证明
   $$
   \frac{P(z)}{Q(z)} = \sum_{k=1}^n \frac{P(\alpha_k)}{Q'(\alpha_k)(z - \alpha_k)}.
   $$
   - 首先如果Q不是首1多项式 Q换作它的首一多项式和原命题关系是充要的
   - 首先 不同根保证了 $Q'(\alpha_k)\neq 0$
   - 若 $P(\alpha_k)=0$,左侧P,Q同时除以这个因式，右侧不会出现$\frac{1}{z-\alpha_k}$的项
   - 不妨设 P,Q没有公共根，且P次数更小
   - 令$R(z)=P(z)/Q(z)$ 那么$G(z)=0$
   - 根据上面 $R(z)=0+\sum G_i(\frac{1}{z-\alpha_i}) +c$
   - $R(\alpha_i+\frac{1}{\xi})=P(\alpha_i+\frac{1}{\xi})/Q(\alpha_i+\frac{1}{\xi})=\frac{\sum_j t_j (\alpha_i+\frac{1}{\xi})^j}{\prod_k (\frac{1}{\xi} +\alpha_i-\alpha_k)}$
   - $=\frac{\xi^k\sum_j t_j (\alpha_i+\frac{1}{\xi})^j}{\prod_k (1+\xi(\alpha_i-\alpha_k))}$
   - 注意到 $\xi$正幂次 至多是1次，因为分子$\xi$的幂次$\le k$, 分母$\xi$的幂次$=k-1$
   - $=\xi(a_i+\frac{S(\xi)}{T(\xi)})$, 右侧分式在$\xi=\infty$处趋于 0次系数，而零次系数为0，所以$a_i=\lim_{\xi \to \infty}=\frac{\sum_j t_j (\alpha_i+\frac{1}{\xi})^j}{\prod_{k,k\neq i} (\frac{1}{\xi} +\alpha_i-\alpha_k)}=\frac{P(\alpha_i)}{Q'(\alpha_i)}$
   - 因此$R(z)=0+\sum \frac{P(\alpha_i)}{Q'(\alpha_i)(z-\alpha_i)}+c$
   - 常数项 观察两边可得$c=0$

3. 利用上题的公式证明：存在唯一的次数小于 $n$ 的多项式 $P$，在点 $\alpha_k$ 处具有给定值 $c_k$（拉格朗日插值多项式）。
- 对于任意Q, 如果有$P_1\neq P_2$那么$P_1/Q \neq P_2/Q$
- 取$Q(z)=\prod (x-\alpha_k)$, 唯一表达
- 所以 P唯一

4. 给出在圆 $|z| = 1$ 上绝对值为 1 的有理函数的一般形式。特别地，其零点和极点之间的关系如何？
- $|R(z)|=1, when |z|=1$
- $R(z)\overline{R(z)}=1, when |z|=1$
- $R(z)= 1/\overline{R(z)}=1/\overline{R(1/\bar{z})}, when |z|=1$, 两边都是有理函数，无穷多个点相等, 所以两边 函数相等(无穷多导数为零)
  - 这里我想了很久很久，虽然在圆上$z=1/\bar{z}$,但是圆外 是不等的，这里的就是使用$|R(z)|=1$和$|z|=1$,把原来的拆分成 新的关系
- 因此 poles,zeroes 在 圆内外成对出现 且 阶数相同, 
  - $z$是$R$的极限点时，$1/\bar{z}$是R的零点（对称且阶数相同
- $\displaystyle \frac{z-\alpha}{z-\frac{1}{\bar{\alpha}}} = \bar{\alpha} \frac{z-\alpha}{\bar{\alpha} z - 1}$ 被称为 Blaschke 因子
- $R(z)=cz^t\prod \frac{z-\alpha}{\bar{\alpha}z-1}$ 的形式


5. 如果有理函数在 $|z| = 1$ 上是实的，其零点和极点如何分布？
- 抓着上面的 核心想法，利用 函数位置的关系，和圆上的$z=1/{\bar{z}}$ 来拆
- $R(z)=\overline{R(z)}$, 实的
- $=\overline{R(1/\bar{z})}$
- 在圆上外, $z$是零点则$1/\bar{z}$也是零点
- 在圆上外, $z$是极限点则$1/\bar{z}$也是极限点

6. 如果 $R(z)$ 为 $n$ 阶有理函数，则 $R'(z)$ 的阶能有多大和多小?
- 首先 阶 order R= max(order P, order Q)
- $R'=(P'Q-Q'P)/Q^2$, $order P + order Q -1, 2 * order Q$
- 上限:
  - 若$order P \le order Q$, 则上限是$2 order Q$ (可能有约分)
  - 若$order P > order Q$, 则上限是$order P + order Q - 1 < 2*n$
  - 可达性:
  - 利用 $R(z)=G(z)+\sum G_i(\frac{1}{z-\beta_i})$, 如果$R(z)=\sum_n \frac{1}{z-\beta_i}$,那么$G'$ 有$2n$个极限点，可达
- 下限:
  - 首先纯多项式$P'(n)$，在$n > 1$的情况，可以$n-1$
  - 另一方面 非$\infty$ pole的阶是k,那么导后是k+1, 而 先合并右侧，可以得到 G的阶 + 右侧分母的阶，G的阶求导-1，所以下界是n-1

## 2.2 幂级数的基础理论 elmentary theory of power series

多项式和有理函数是非常特殊的解析函数，要得到greater variety is to form limits
- 收敛级数的和就是这样一个极限，
- 如果项是解析的，那么和也是解析的
- 在项为即系函数的所有级数中，以复系数的幂级数最为简单

### 2.2.1 序列 sequences

序列 $\{a_n\}_{n=1}^{\infty}$ 具有极限 $A$，如果对于任一 $\epsilon > 0$，存在一个 $N$ 使得当 $n \geq N$ 时，$|a_n - A| < \epsilon$。如果 $\lim_{n \to \infty} a_n = \infty$，则称这一序列发散到无穷。

只有在很特殊的情况下，才能用求出极限的办法来证明序列的收敛性，因此，非常需要找一种方法，以便在极限不能明显确定时也能证明其存在。符合这个目的的检验法叫作柯西准则。一个序列称为基本序列或者柯西序列，如果它满足下列条件：给定任意 $\epsilon > 0$，存在一个 $N$ 使得当 $n, m \geq N$ 时，$|a_n - a_m| < \epsilon$。这个检验法即：

一个序列收敛当且仅当它是一个柯西序列。

必要性是很明显的。如果 $a_n \to A$，则我们可以找到 $N$ 使得对 $n \geq N$ 有 $|a_n - A| < \epsilon/2$ 成立；当 $m, n \geq N$ 时，由三角形不等式可得 $|a_n - a_m| \leq |a_n - A| + |a_m - A| < \epsilon$。

充分性和实数的定义密切相关，引入实数的一个方法就是假设柯西条件的充分性。然而，我们只想用每个有界单调的实数序列都有极限这个性质。

柯西序列的实部和虚部仍然是柯西序列，如果它们收敛，则原序列也收敛。为此，我们只需要证明对实数序列的充分性。我们回忆一下上极限和下极限的概念。给定一个实序列 $\{\alpha_n\}_{n=1}^{\infty}$，设 $a_n = \max\{\alpha_1, \cdots, \alpha_n\}$，即 $a_n$ 是数 $\alpha_1, \cdots, \alpha_n$ 中的最大者。序列 $\{a_n\}_{n=1}^{\infty}$ 是非减的，因此它有极限 $A_1$，$A_1$ 或者有限或者是 $+\infty$。数 $A_1$ 称为数 $\alpha_n$ 的最小上界或者上确界 ($l.u.b.$ 或 sup)，事实上，它是大于等于所有 $\alpha_n$ 的最小数。从原序列中删去 $\alpha_1, \cdots, \alpha_{k-1}$，用同样的方法构造，可以得到序列 $\{\alpha_n\}_{k}^{\infty}$ 的最小上界 $A_k$。显然 $\{A_k\}$ 是非增序列，我们把它的极限记为 $A$。它可能是有限的，也可能是 $+\infty$ 或者 $-\infty$。在任何情况下，我们记

$A = \limsup_{n \to \infty} a_n.$

容易用上极限的性质来刻画上极限。如果 $A$ 是有限的，且 $\epsilon > 0$，则存在一个 $N$，使得 $A_{n_0} < A + \epsilon$，由此可知，当 $n \geq N$ 时，$\alpha_n \leq A_{n_0} < A + \epsilon$。相反，如果当 $n \geq N$ 时有 $\alpha_n \leq A - \epsilon$，则 $A_{n_0} \leq A - \epsilon$，这是不可能的。换句话说，存在一个任意大$n$使得 $\alpha_n > A-\epsilon$, 如果$A=+\infty$，则存在任意大的$\alpha_n$,而 $A = -\infty$ 当且仅当 $\alpha_n \to -\infty$。如果多于一个数 $A$ 具有这些性质。

- 书上这个说的感觉 转了好几次，从$\alpha$到$a$(前缀max)到$A$(alpha取后缀后的前缀max)
- 之前有看一本书，是把 截断后 所有剩余值看成 集合,再看集合的上确界，下确界的，感觉会舒服很多

下极限可同样定义，只需把不等式反过来。非常明显，下极限和上极限相等，当且仅当序列收敛到一个有限的极限或者发散到 $+\infty$ 或 $-\infty$。上、下极限常简记为 $\overline{\lim}$ 和 $\underline{\lim}$。

可以证明如下关系：

$$
\underline{\lim} a_n + \underline{\lim} \beta_n \leq \underline{\lim} (a_n + \beta_n) \leq \underline{\lim} a_n + \overline{\lim} \beta_n,
$$

$$
\underline{\lim} a_n + \overline{\lim} \beta_n \leq \overline{\lim} (a_n + \beta_n) \leq \overline{\lim} a_n + \overline{\lim} \beta_n.
$$

现在我们返回来证明柯西条件的充分性。当 $n \geq n_0$ 时，由 $|a_n - a_{n_0}| < \epsilon$ 可以得到 $|a_n| < |a_{n_0}| + \epsilon$。因此 $A = \overline{\lim} a_n$ 和 $a = \underline{\lim} a_n$ 都是有限的。如果 $a \neq A$，选

$$
\epsilon = \frac{A - a}{3}
$$

并确定相应的 $n_0$。由 $a$ 和 $A$ 的定义，存在 $a_n < a + \epsilon$ 和 $a_m > A - \epsilon$，其中 $m, n \geq n_0$。于是得到 $A - a = (A - a_m) + (a_m - a_n) + (a_n - a) < 3\epsilon$，这和 $\epsilon$ 的选取矛盾。因此 $a = A$，序列收敛。

- emmmmmmm 感觉这里没有证明白啊，从数学分析原理上看，收敛数列一定柯西，而柯西不一定收敛，因为值域不一定紧，也就是极限点的存在性，一个例子就是, 这里这个“反证” 只证明了上下界可以任意的近，依然没有紧

### 2.2.2 级数 series

柯西条件的一个非常简单的应用就是它使我们可以从一个序列的收敛性得到另一个序列的收敛性。如果对于所有各对下标 $m, n$，都有 $|b_m - b_n| \leq |a_m - a_n|$ 成立，则序列 $\{b_n\}$ 可以称为序列 $\{a_n\}$（这不是一个标准项）的收缩。在这个条件下，如果 $\{a_n\}$ 是一个柯西序列，则 $\{b_n\}$ 也是。因此，由 $\{a_n\}$ 的收敛性可得到 $\{b_n\}$ 的收敛性。

一个无穷级数就是一个形式无穷和

$$
a_1 + a_2 + \cdots + a_n + \cdots \tag{15}
$$

和这一级数相联系的是其部分和

$$
s_n = a_1 + a_2 + \cdots + a_n
$$

的序列。级数是收敛的当且仅当相应的部分和序列收敛，此时序列的极限就是级数的和。

将柯西收敛检验法应用到级数，得到下述条件：级数(15)收敛当且仅当对每一个 $\epsilon > 0$，都存在一个 $n_0$ 使得对所有的 $n \geq n_0$ 及 $p \geq 0$，有 $|a_n + a_{n+1} + \cdots + a_{n+p}| < \epsilon$。对 $p = 0$，则得到特例 $|a_n| < \epsilon$。因此一个收敛级数的一般项趋于零。这个条件是必要的，不过当然不是充分的。

如果级数的有限多个项被省略，则新级数与(15)同时收敛或发散。在收敛的情形下，设从项 $a_{n+1}$ 开始的级数之和为 $R_n$，则整个级数的和为 $S = s_n + R_n$。

级数(15)可与各项绝对值组成的级数

$$
|a_1| + |a_2| + \cdots + |a_n| + \cdots \tag{16}
$$

相比较。(15)的部分和序列是相应于(16)的序列的收缩，因为 $|a_n + a_{n+1} + \cdots + a_{n+p}| \leq |a_n| + |a_{n+1}| + \cdots + |a_{n+p}|$。因此，(16)的收敛意味着原级数(15)收敛。一个级数的各项的绝对值所组成的级数如果收敛，则称原级数为绝对收敛。

### 2.2.3 一致收敛性 uniform convergence

考察函数 $f_n(x)$ 的一个序列，设所有函数都定义在同一集 $E$ 上。如果对每一个 $x \in E$，值序列 $\{f_n(x)\}$ 收敛，则极限 $f(x)$ 仍是 $E$ 上的一个函数。由定义，如果 $\epsilon > 0$，$x \in E$，则存在一个$n_0$，使得当$n\geqslant n_0$时有$|f_n(x) - f(x)| < \varepsilon$，但允许$n_0$依赖于$x$。例如，对所有的$x$，有

$$
\lim_{n \to \infty} (1 + \frac{1}{n})x = x
$$

成立，但为了在$n\geqslant n_0$时有$|(1 + \frac{1}{n})x - x| =|x|/n< \varepsilon$，需要$n_0 > |x| / \varepsilon$。这样，一个$n_0$对每一个固定的$x$存在，但不能对所有的$x$同时成立。

在这种情况下，我们称序列点态收敛 (逐点收敛)，但非一致收敛。正面表述如下：序列$\{f_n(x)\}$在集$E$上一致收敛于$f(x)$是指：对任意$\varepsilon > 0$，存在一个$n_0$(不依赖于x)，使得对所有的$n\geqslant n_0$和所有$x\in E$，都有$|f_n(x) - f(x)| < \varepsilon$。

一致收敛性最重要的推论是(这个在《数学分析原理》中有证明)：

一个一致收敛的连续函数序列，其极限函数本身也是连续的。

设函数$f_n(x)$在集$E$上连续，且一致收敛于$f(x)$。对于任意$\varepsilon > 0$，可以找到一个$n$，使得对于所有的$x\in E$，有$|f_n(x) - f(x)| < \varepsilon/3$。设$x_0$是$E$的一点。由于$f_n(x)$在$x_0$处连续，故可以找到$\delta > 0$，使得对所有的$x\in E$，只要$|x - x_0| < \delta$，就有$|f_n(x) - f_n(x_0)| < \varepsilon/3$。于是，在关于$x$的相同条件下，有

$$
|f(x) - f(x_0)| \leq |f(x) - f_n(x)| + |f_n(x) - f_n(x_0)| + |f_n(x_0) - f(x_0)| < \varepsilon.
$$

于是我们证明了$f(x)$在$x_0$处连续。

在解析函数的理论中，我们将发现一致收敛性要比点态收敛性重要得多。然而，在大多数情形，仅在函数有定义的部分集合上收敛才是一致的。

对一致收敛性，有类似于柯西准则的充分必要条件，即，

序列$\{f_n(x)\}$在$E$上一致收敛，当且仅当对于每一个$\varepsilon > 0$，存在一个$n_0$，使得对所有的$m, n\geqslant n_0$和所有的$x\in E$，有$|f_m(x) - f_n(x)| < \varepsilon$。

必要性仍是很明显的。对于充分性，注意到根据柯西准则的原来形式可知极限函数$f(x)$存在。在不等式$|f_m(x) - f_n(x)| < \varepsilon$中，我们可以固定$n$，而令$m$趋于无穷。于是可知对$n\geqslant n_0$和所有的$x\in E$，有$|f(x) - f_n(x)| \leqslant \varepsilon$，因此收敛是一致的。

在实际应用中下面的判别法最为适用：如果函数序列$\{f_n(x)\}$是常数收敛序列$\{a_n\}$的一个收缩contraction，则序列$\{f_n(x)\}$一致收敛。这里的假设条件意味着在$E$上有$|f_m(x) - f_n(x)| \leqslant |a_m - a_n|$成立，然后由柯西条件立即得到所要的结论。

在级数的情形，这个判别准则用稍弱的形式表达时变得特别简单。我们说函数项级数以正项级数

$$
f_1(x) + f_2(x) + \cdots + f_n(x) + \cdots
$$

作为强级数(for a majorant)，是指对某个常数$M$和所有充分大的$n$有$|f_n(x)| \leqslant Ma_n$。相反，称第一个级数为第二个级数的弱级数(minorant of)。在这些情况下，有

$$
|f_n(x) + f_{n+1}(x) + \cdots + f_{n+p}(x)| \le M(a_n+a_{n+1}+\cdots+a_{n+p})
$$

因此，如果强级数收敛，则弱级数一致收敛。这个条件常称为Weierstrass M test 魏尔斯特拉斯M判别法。它比较弱，只适用于绝对收敛的级数。收缩的一般原理比较复杂，但是应用范围更广。

- 我不知道是 原本的是长这样的还是为啥，其实上面 的M可以完全融入$a_n$里, 在有的地方， $|f_n(x)|\le M_n$
- 左边称为 minorant of 右边
- 右边称为 majorant of 左边
- 右边收敛则左边收敛（Cauchy控制）

#### 2.2.3练习

3. 证明：一个绝对收敛级数的和在级数的项重新排列以后并不改变。
   - 见《数学分析原理》, 证明不变光柯西不够，找极限，定值的目标，反过来取n，再新的里面把前n个取完，
5. [TODO]对 $x$ 的实值讨论级数 $\sum_{n=1}^{\infty} \frac{x}{n(1 + nx^2)}$ 的一致收敛性。
6. [TODO]如果 $U = u_1 + u_2 + \cdots$，$V = v_1 + v_2 + \cdots$ 都是收敛级数，证明：只要两个级数至少有一个是绝对收敛的，那么 $UV = u_1v_1 + (u_1v_2 + u_2v_1) + (u_1v_3 + u_2v_2 + u_3v_1) + \cdots$ 收敛。（如果两个级数都绝对收敛很容易证明。如果第二个级数不是绝对收敛的，试给出简短的证明。）

### 2.2.4 幂级数 power series

幂级数具有如下的形式：
$$
a_0 + a_1z + a_2z^2 + \cdots + a_nz^n + \cdots,
$$
其中系数 $a_n$ 和变量 $z$ 都是复数。更一般地，我们可以考虑级数
$$
\sum_{n=0}^{\infty} a_n(z - z_0)^n,
$$
它是关于中心 $z_0$ 的幂级数，但差异微不足道，不必在形式上这样做。

作为一个近乎平常的例子，我们考虑几何级数
$$
1 + z + z^2 + \cdots + z^n + \cdots,
$$
它的部分和可写成以下形式：
$$
1 + z + \cdots + z^{n-1} = \frac{1 - z^n}{1 - z}.
$$
因为 $|z| < 1$ 时 $z^n \to 0$，而 $|z| \geq 1$ 时 $|z^n| \geq 1$，所以我们可以得出结论：几何级数当 $|z| < 1$ 时收敛到 $1/(1 - z)$，当 $|z| \geq 1$ 时发散。

几何级数的这个性质是典型的。事实上，我们会发现：每个幂级数在一个圆的内部收敛，而在该圆的外部发散。除非发生这样两种情况：这个级数只对 $z = 0$ 收敛，或者它对 $z$ 的所有值收敛。

更精确地，我们要证明下面的阿贝尔Abel定理。

**定理2** 对于每个幂级数(17)，存在一个数$R$，$0\leqslant R\leqslant \infty$，称为收敛半径，它具有下列性质：
- (ⅰ) 对于每一个满足$|z|<R$的$z$，级数绝对收敛。如果$0\leqslant \rho <R$，则对于$|z|<\rho$，级数的收敛是一致的。
- (ⅱ) 如果$|z|>R$，级数的项是无界的，因此级数是发散的。
- (ⅲ) 在$|z|<R$内，级数的和是一个解析函数。它的导数可以通过逐项微分求得，并且得到的级数与原级数有相同的收敛半径。

圆$|z|=R$称为收敛圆。在收敛圆的圆周上收敛性不确定。我们来证明定理的断言成立。如果$R$按下式选取：
$1/R=\limsup_{n\to\infty}\sqrt[n]{|a_n|}.$

这称为收敛半径的阿达马公式 Hadamard's formula。

如果$|z|<R$，则可找到$\rho$使得$|z|<\rho<R$。于是$1/\rho>1/R$，根据上极限的定义，存在一个$n_0$，使得对于$n\geqslant n_0$，有$|a_n|^{1/n}<1/\rho$，即$|a_n|<1/\rho^n$。于是推知，对于充分大的$n$，$|a_n z^n|<(|z|/\rho)^n$，所以幂级数(17)以一个收敛的几何级数为强级数，因此(17)收敛。为证明对$|z|\leqslant\rho<R$的一致收敛性，我们选取$\rho'$，$\rho<\rho'<R$，则对$n\geqslant n_0$有$|a_n z^n|\leqslant(\rho'/\rho)^n$。由于强级数收敛，而且有常数项，因此由魏尔斯特拉斯$M$判别法可知幂级数一致收敛。

如果$|z|>R$，我们选取$\rho$使得$R<\rho<|z|$。由于$1/\rho<1/R$，因此存在任意大$n$，使得$|a_n|^{1/n}>1/\rho$，即$|a_n|>1/\rho^n$。这样，对于无穷多个$n$，$|a_n z^n|>(|z|/\rho)^n$，因此项是无界的。

由于$\sqrt[n]{n}\to 1$，所以导出级数$\sum_{n=1}^{\infty} na_n z^{n-1}$具有相同的收敛半径。证明：设$\sqrt[n]{n}=1+\delta_n$，则$\delta_n>0$，并且应用二项式定理$n=(1+\delta_n)^n>1+\frac{1}{2}n(n-1)\delta_n^2$，这给出$\delta_n^2<2/n$，因此$\delta_n\to 0$。

对$|z|<R$，我们可以记

$$f(z)=\sum_{n=0}^{\infty}a_nz^n=s_n(z)+R_n(z),$$

其中

$$s_n(z)=a_0+a_1z+\cdots+a_{n-1}z^{n-1},\quad R_n(z)=\sum_{k=n}^{\infty}a_kz^k,$$

且

$$f_1(z)=\sum_{n=1}^{\infty}na_nz^{n-1}=\lim_{n\to\infty}s_n'(z).$$

我们来证明$f'(z)=f_1(z)$。

考虑恒等式

$$\frac{f(z)-f(z_0)}{z-z_0}-f_1(z_0) = \left( \frac{s_n(z)-s_n(z_0)}{z-z_0} - s_n'(z_0) \right) + \left( \frac{R_n(z)-R_n(z_0)}{z-z_0} \right),$$

其中我们假定$z\neq z_0$，并且$|z|$，$|z_0|\leqslant\rho<R$。最后一项可重新写成

$\sum_{k=n}^\infty a_k(z^{k-1}+z^{k-2}z_0+\cdots+z z_0^{k-2}+z_0^{k-1}),$

因此我们得出结论

$$\left| \frac{R_n(z)-R_n(z_0)}{z-z_0} \right| \leqslant \sum_{k=n}^\infty k|a_k|\rho^{k-1}.$$

右边的表达式是一个收敛级数的余项。因此我们可以找到$n_0$，使得对$n\geqslant n_0$，有

$$\left| \frac{R_n(z)-R_n(z_0)}{z-z_0} \right| < \frac{\varepsilon}{3}.$$

还有一个$n_1$使得当$n\geqslant n_1$时$|s_n'(z_0)-f_1(z_0)|<\frac{\varepsilon}{3}$。选取固定的$n\geqslant n_0$，$n_1$。由导数的定义，我们可以找到$\delta>0$使得$0<|z-z_0|<\delta$意味着

$$\left|\frac{s_n(z)-s_n(z_0)}{z-z_0}-s_n'(z_0)\right|<\frac{\varepsilon}{3}.$$

联合上述所有不等式，由(19)得当 $0<|z-z_0|<\delta$ 时，有  

$$\left|\frac{f(z)-f(z_0)}{z-z_0}-f_1(z_0)\right|<\varepsilon.$$

我们已经证明了 $f'(z_0)$ 存在并等于 $f_1(z_0)$。  

由于上述推理可以重复进行，所以我们实际上已经证明了一个具有正的收敛半径的幂级数具有各阶导数，并且它们可以如下显式表示：  

$\begin{aligned}&f(z)=a_0+a_1z+a_2z^2+\cdots\\&f'(z)=a_1+2a_2z+3a_3z^2+\cdots\\&f''(z)=2a_2+6a_3z+12a_4z^2+\cdots\\&\vdots\\&f^{(k)}(z)=k!a_k+\frac{(k+1)!}{1!}a_{k+1}z+\frac{(k+2)!}{2!}a_{k+2}z^2+\cdots\end{aligned}$  

特别地，由最后一行我们发现 $a_k=\frac{f^{(k)}(0)}{k!}$，幂级数变成  

$$f(z)=f(0)+f'(0)z+\frac{f''(0)}{2!}z^2+\cdots+\frac{f^{(n)}(0)}{n!}z^n+\cdots$$ 

这是熟知的泰勒-麦克劳林Taylor-Maclaurin development展开式，但我们只是在 $f(z)$ 具有一个幂级数展开式的假设下证明的。我们确实知道，展开式如果存在，那就是唯一确定的，但主要部分，即每一个解析函数具有一个泰勒展开式仍未得到。

#### 2.2.4练习

3. 求下列幂级数的收敛半径：
   $$
   \sum n^2 z^n, \quad \sum \frac{z^n}{n!}, \quad \sum n! z^n, \quad \sum q^n z^n(|q|<1), \quad \sum z^{n!}.
   $$
   - 这里会用到 $n\to \infty, n! \sim \sqrt{2\pi n}(\frac{n}{e})^n$
   - 最后看起来不是幂级数，用原始的手段判断是1


5. 如果$f(z)=\sum a_n z^n$，则$\sum n^3 a_n z^n$是什么？
   - $((f'(z)z)'z)'z$ 是想要这个?
6. 如果$\sum a_n z^n$和$\sum b_n z^n$的收敛半径分别为$R_1$和$R_2$，证明$\sum a_n b_n z^n$的收敛半径至少是$R_1 R_2$。
   - 利用 $1/R = \limsup_{n\to \infty} \sqrt[n]{|a_n|}$
7. 如果$\lim_{n\to\infty} |a_n| / |a_{n+1}| = R$，证明$\sum a_n z^n$的收敛半径为$R$。
    - $\sqrt[n]{|a_n|} \in (\sqrt[n]{|a_m|(R-\epsilon)^{n-m}},\sqrt[n]{|a_m|(R+\epsilon)^{n-m}})$
8. 对什么样的$z$值，级数 $\sum_{0}^\infty \left(\frac{z}{1+z}\right)^n$ 收敛？
   - 右边 括号内看成整体, $|z| < |z+1|$, 看成复平面上距离
   - $\mathrm{Re}(z) > -1/2$
9. [TODO]对什么样的$z$值，级数 $\sum_{0}^\infty \frac{z^n}{1+z^{2n}}$收敛？

### 2.2.5 阿贝尔极限定理 Abel's limit theorem

阿贝尔第二定理涉及一个幂级数在收敛圆周上的一点上收敛的情形. 不失一般性, 我们可设R=1, 并设收敛发生在点z=1处.

定理3 如果$\sum_{0}^{\infty}a_n$收敛, 则当$z$趋近于1而保持$|1-z|/(1-|z|)$有界时,$f(z)=\sum_{0}^{\infty}a_nz^n$趋于$f(1)$ 也就是收敛的和.

注 从几何上看, 定理中的条件意味着z始终位于一个顶点在1且关于实轴的(-∞,1)部分对称而小于180°的角内. 习惯上称这种趋近发生在一个斯托尔茨角内Stolz angle.

证明 我们可以假设$\sum_{0}^{\infty}a_n=0$, 因为对$a_0$加一个常数就可做到这一点. 记$S_n=a_0+a_1+⋯+a_n$，并利用恒等式(部分求和), 我真是艹了，英文书上这里 函数 和 值 用的都是小写的$s_n$,为了不要读着混淆，我把系数前缀和换成了大写的$S_n$,

$s_n(z)=a_0+a_1z+⋯+a_nz^n$

$=S_0+(S_1-S_0)z+⋯+(S_n-S_{n-1})z^n$

$=S_0(1-z)+S_1(z-z^2)+⋯+S_{n-1}(z^{n-1}-z^n)+S_nz^n$

$=(1-z)(S_0+S_1z+⋯+S_{n-1}z^{n-1})+S_nz^n.$

但$S_nz^n\to 0$，因此得到表达式$f(z)=(1-z)\sum_{0}^\infty S_nz^n.$

根据限制 设$|1-z|\le K(1-|z|)$，并设$S_n\to 0$，取m足够大使得对$n\ge m$有$|S_n| < \varepsilon$。

于是级数$\sum_{0}^{\infty} S_iz^i$从$i=m$的项以后的余项受几何级数$\varepsilon \sum_m^{\infty} |z|^i=\varepsilon |z|^m/(1-|z|)<\varepsilon /(1-|z|)$控制。

由此和三角不等式得到$|f(z)|\le |1-z|\left|\sum_{0}^{m-1} s_kz^k\right|+K\varepsilon.$(勘误，中文书 下面写无穷大就离谱)

选取z充分接近于1，可以使右端第一项任意小，因此我们得出结论：在所给的限制条件下，当$z\to 1$时$f(z)\to 0 = \sum_{0}^{\infty} a_n$.

$f(z)$ 先换成$s_n(z)$, 再$\sum S_n z^n$, 然后截断到可控m, 最后控制$z\to 1$
- 比较神奇的地方是 保持$|1-z|/(1-|z|)$有界时

## 2.3 指数函数和三角函数 the exponential and trigonometric functions

纯粹从实数观点处理微积分的人不指望指数函数 $e^x$ 和三角函数 $\cos x$, $\sin x$ 之间有任何关系。事实上，这些函数按照不同的目的，似乎可以从完全不同的来源导出。无疑，他会注意到这些函数的泰勒展开式之间的相似性，如果使用虚自变量，就可以导出欧拉公式 $e^{ix} = \cos x + i \sin x$ 作为一个正式的恒等式。但是分析其全部深度，则要归功于高斯(Gauss)。

有了前一节的预备知识，容易对复数 $z$ 定义 $e^z$, $\cos z$ 和 $\sin z$，并推导出这些函数之间的关系。同时由指数函数的反函数可以定义对数，而对数又导出复数辐角的正确定义，因此导出角的非几何定义。

### 2.3.1 指数函数 the exponential

一开始，我们可以把指数函数定义为如下微分方程的解：
$$f'(z) = f(z), \tag{20}$$

初值为 $f(0) = 1$。为了求解，令
$$f(z) = a_0 + a_1 z + \cdots + a_n z^n + \cdots$$
$$f'(z) = a_1 + 2a_2 z + \cdots + n a_n z^{n-1} + \cdots$$
如果要使 (20) 成立，必须有 $a_{n-1} = n a_n$，而初始条件给出 $a_0 = 1$。由归纳法得到 $a_n = 1/n!$。

将方程的解记为 $e^z$ 或 $\exp z$，至于用哪一种记法，完全由印刷上的方便决定。当然，我们必须证明级数
$$e^z = 1 + \frac{z}{1!} + \frac{z^2}{2!} + \cdots + \frac{z^n}{n!} + \cdots \tag{21}$$ 
收敛。

由于$\sqrt{n} \to \infty$，它确实在整个平面上收敛（证明 见上一节的习题的收敛半径）。

作为微分方程的一个推论，$e^z$满足加法定理

$$e^{a+b} = e^a \cdot e^b.\tag{22}$$

实际上，我们发现 $D(e^z \cdot e^{-z}) = e^z \cdot e^{-z} + e^z \cdot (-e^{-z}) = 0.$ 因此 $e^z \cdot e^{-z}$ 是常数。令 $z=0$ 就可求得这个常数的值。于是得到结论 $e^z \cdot e^{-z} = e^c$，令 $z=a, c=a+b$ 即得 (22) 式。

注: 我们使用了如下事实：如果 $f'(z)$ 恒等于零，则 $f(z)$ 是常数。如果 $f$ 定义在整个平面上，则这个结论一定成立。因为如果 $f=u+iv$，那么我们得到 $\frac{\partial u}{\partial x} = \frac{\partial u}{\partial y} = \frac{\partial v}{\partial x} = \frac{\partial v}{\partial y} = 0$，而定理的实形式表明，在每一条水平线和每一条垂直线上，$f$ 是常数。

作为加法定理的一个特殊情形，$e^z \cdot e^{-z} = 1$。这表明 $e^z$ 绝不为零。对于实的 $x$，级数展开式 (21) 表明 $x > 0$ 时 $e^x > 1$，又因为 $e^x$ 和 $e^{-x}$ 互为倒数，所以 $x < 0$ 时 $0 < e^x < 1$。而级数具有实系数这一事实表明，$\exp \bar{z}$ 是 $\exp z$ 的复共轭。因此，$|e^{iy}|^2 = e^{iy} \cdot e^{-iy} = 1$,

$$|e^{x+iy}| = e^x$$

下面多次用到

### 2.3.2 三角函数 the trigonometric functions

三角函数由下式定义：
$$\cos z = \frac{e^{iz} + e^{-iz}}{2}, \quad \sin z = \frac{e^{iz} - e^{-iz}}{2i}.\tag{23}$$

代入 (21) 表明它们有级数展开式

$$\cos z = 1 - \frac{z^2}{2!} + \frac{z^4}{4!} - \cdots$$

$$\sin z = z - \frac{z^3}{3!} + \frac{z^5}{5!} - \cdots$$

对于实的 $z$，它们化成熟知的 $\cos x$ 和 $\sin x$ 的泰勒展开式，值得注意的是，我们现在不用几何概念而重新定义了这些函数。(数学分析原理里的e
和三角函数也是这个流程)

从 (23) 式可以进一步得到欧拉公式

$$e^{iz} = \cos z + i \sin z,$$

以及恒等式

$$\cos^2 z + \sin^2 z = 1.$$

还可以得到

$$D \cos z = -\sin z, \quad D \sin z = \cos z.$$

加法公式

$$\cos(a + b) = \cos a \cos b - \sin a \sin b.$$

$$\sin(a + b) = \sin a \cos b + \cos a \sin b.$$

是(23)式和指数函数加法定理的直接推论。

另外的几个三角函数 $\tan z$, $\cot z$, $\sec z$, $\csc z$ 都是次要的，它们可以按惯例用 $\cos z$ 和 $\sin z$ 来定义。例如，

$$\tan z = -i \frac{e^{iz} - e^{-iz}}{e^{iz} + e^{-iz}}$$

注意：所有的三角函数都是 $e^{iz}$ 的有理函数！！！！！！！！！！！！！！！！！！！！！！！！！

#### 2.3.2 练习

1. 求 $\sin(i)$, $\cos(i)$ 和 $\tan(1+i)$ 的值。
2. 双曲余弦和双曲正弦定义为 $\cosh z = \frac{e^z + e^{-z}}{2}$, $\sinh z = \frac{e^z - e^{-z}}{2}$. 用 $\cos(iz)$ 和 $\sin(iz)$ 表示它们。推导出加法公式，以及 $\cosh 2z$, $\sinh 2z$ 的公式。
   - 这样看 cos,sin 反而是 幂次多了i的，而cosh和sinh的幂次直接是没有i的
3. 用加法公式将 $\cos(x+iy)$, $\sin(x+iy)$ 分解为实部和虚部。
4. 证明

$$|\cos z|^2 = \sinh^2 y + \cos^2 x = \cosh^2 y - \sin^2 x = \frac{1}{2} (\cosh 2y + \cos 2x)$$

和

$$|\sin z|^2 = \sinh^2 y + \sin^2 x = \cosh^2 y - \cos^2 x = \frac{1}{2} (\cosh 2y - \cos 2x).$$

还是觉得幂级数 的展开，以及从$f'(x)=f(x),f(0)=1$开始,得到这$e^x,\sin,\cos,\sinh,\cosh$一切就顺滑,流畅,紧密,贯通了起来

### 2.3.3 周期性 the periodicity

或者说 从 这条路径重新定义$\pi$,我们不把$\pi$看成几何的圆周率，而是上面性质和周期有关的东西

如果 $f(z+c) = f(z)$ 对所有的 $z$ 成立，我们称 $f(z)$ 具有周期 $c$. 这样，$e^z$ 的一个周期满足 $e^{z+c} = e^z$ 或者 $e^c = 1$.
- 因为前面$|e^{x+iy}|=e^x$,所以实数部分为0, $c = i\omega$, $\omega$ 为实数，称为 $e^z$ 的一个周期. 我们将证明有几个周期，而这些周期都是一个正周期 $\omega_0$ 的整数倍.

在证明周期存在的许多方法中，我们选取下面的方法：对 $y > 0$, 由 $D\sin y = \cos y \leq 1$ 和 $\sin 0 = 0$, 通过积分或者应用中值定理，得到 $\sin y < y$. 
- 用同样的方法，$D\cos y = -\sin y > -y$ 和 $\cos 0 = 1$ 给出 $\cos y > 1 - y^2/2$
- 由此又得到 $\sin y > y - y^3/6$
- 最终得到 $\cos y < 1 - y^2/2 + y^4/24$. 
- 这个不等式表明 $\cos \sqrt{3} < 0$
- 因此在 $0$ 和 $\sqrt{3}$ 之间存在一个 $y_0$ 使得 $\cos y_0 = 0$. 由于

$$
\cos^2 y_0 + \sin^2 y_0 = 1,
$$

我们有 $\sin y_0 = \pm 1$, 即 $e^{iy_0} = \pm i$, 因此 $e^{4iy_0} = 1$. 这证明了 $4y_0$ 是一个周期.

实际上，它是最小正周期. 为了证明这一点，取 $0 < y < y_0$. 于是 $\sin y > y(1 - y^2/6) > y/2 > 0$, 这表明 $\cos y$ 是严格递减的. 由于 $\sin y$ 是正的，并且 $\cos^2 y + \sin^2 y = 1$, 故 $\sin y$ 是严格递增的，由此 $\sin y < \sin y_0 = 1$. 双边不等式 $0 < \sin y < 1$ 保证了 $e^{iy}$ 既不等于 $\pm 1$, 也不等于 $\pm i$. 因此 $e^{4iy} \neq 1$, 实际上 $4y_0$ 是最小正周期，记为 $\omega_0$. 如果 $\omega$ 不等于 $\omega_0$ 的整数倍，则存在一个整数 $n$ 使得 $n\omega_0 \leq \omega < (n+1)\omega_0$. 如果 $\omega$ 不等于 $\omega_0$ 的整数倍，则存在一个整数 $n$ 使得 $n\omega_0 \leq \omega < (n+1)\omega_0$. 如果$\omega \neq n\omega_0$
则 $\omega - n\omega_0$ 将是一个小于 $\omega_0$ 的正周期。由于这是不可能的，所以每个周期必是 $\omega_0$ 的一个整数倍。 (这在各类 周期最小性里都是类似这样证明的，例如字符串自相似，pell方程解都由最小解得到)

$\mathrm{e}^x$ 的最小正周期记为 $2\pi$。 (这里我们用 周期来定义 $\pi$)

在证明过程中，我们证明了

$\mathrm{e}^{i\pi/2} = i, \quad \mathrm{e}^{i\pi} = -1, \quad \mathrm{e}^{2\pi i} = 1.$

这些方程说明了数 $\mathrm{e}$ 和 $\pi$ 之间的密切关系。

当 $y$ 从 $0$ 增大到 $2\pi$ 时，点 $\omega = \mathrm{e}^{iy}$ 按正方向描出单位圆 $|\omega| = 1$，即从 $1$ 经 $i$ 到 $-1$，再回过来经 $-i$ 到 $1$。对于适合 $|\omega| = 1$ 的每一个 $\omega$，在半开区间 $0 \leq y < 2\pi$ 中，有且只有一个 $y$，使得 $\omega = \mathrm{e}^{iy}$。所有这些不难从如下已知事实得到：$\cos y$ 在“第一象限”即 $0$ 和 $\pi/2$ 之间是严格递减的。

从代数观点看，映射 $\omega = \mathrm{e}^{iy}$ 建立了实数加法群和绝对值为 $1$ 的复数乘法群之间的一个同态。同态的核是由所有整倍数 $2\pi n$ 形成的子群。

> 这部分写得很琐碎，但是如果不知道sin,cos的几何性质，也可以通过大概的绘制 函数曲线，来得到大概的形状，然后有的放矢的 这样构造出零点的范围(其中一个核心原因，还是 上面的分析让e的周期是$i\omega$, 而$\sin,\cos$表达式中 都有$e^{iz}$的形式, 从而来研究这两个函数, 因为这样输入是实的,就可以中值定理什么的了)

> 需要注意的是, 对于复函数，如果不要求解析，完全可以构造出一个多方向不同周期的函数, 思路也很简单，选择$x\in[0,1],y\in[0,2]$边界都$=0$,但是中间任意的函数，那么这样的值一直 重复，那会发现沿着x方向周期是1，沿着y方向周期是2, $f(z)=f(z+k+2mi),k,m\in \mathbb{Z}$

### 2.3.4 对数函数 the logarithm

一与指数函数一起，我们还必须研究它的反函数——对数函数。根据定义，$z = \log w$ 是方程 $\mathrm{e}^z = w$ 的一个根。首先，由于 $\mathrm{e}^x$ 总是不为 $0$，所以数 $0$ 没有对数。对 $w \neq 0$，方程 $\mathrm{e}^{x+iy} = w$ 等价于

$\mathrm{e}^x = |w|, \quad \mathrm{e}^{iy} = w / |w|.$

第一个方程有唯一的解 $x = \log |w|$，即正数 $|w|$ 的实对数。第二个方程的右端是绝对值为 $1$ 的复数。因此，正如我们刚刚看到的，它在区间 $0 \leq y < 2\pi$ 上有且只有一个解。此外，所有和这个解相差 $2\pi$ 的整数倍的 $y$ 也满足这个方程。于是，每一个不为 $0$ 的复数具有无穷多个对数，它们彼此相差 $2\pi i$ 的倍数。

$\log w$ 的虚部也叫 $w$ 的辐角，记为 $\arg w$，从几何上解释，它是正实轴与从 $0$ 点出发经过 $w$ 点的射线之间的夹角，以弧度度量。相应于这个定义，辐角具有无穷多个值，它们彼此相差 $2\pi$ 的倍数，而且

$$\log w = \log |w| + i \arg w.$$
- 例如$\log -1=\log |-1| + i \arg -1 = i\pi$
- 例如$\log i=\log |i| + i \arg i = i\frac{\pi}{2}$

改变一下记法，如果 $|z| = r$ 且 $\arg z = \theta$，则 $z = re^{i\theta}$。这一记法很方便，是经常采用的，即使在并不另外涉及指数函数时也是如此。

按照习惯，一个正数的对数总是指实对数，除非另有说明。记号 $a^b$ 总解释为 $\exp(b \log a)$，其中 $a$、$b$ 是任意复数且 $a \neq 0$。如果限制 $a$ 为正数，则 $\log a$ 是实的，$a^b$ 有单一值。否则，$\log a$ 是复对数，$a^b$ 一般有无穷多个值，彼此相差 $e^{2\pi inb}$ 的倍数。$a^b$ 取单一值当且仅当 $b$ 为整数 $n$，这时 $a^b$ 可解释为 $a$ 或 $a^{-1}$ 的幂。如果 $b$ 是一个有理数，具有简化形式 $p/q$，则 $a^b$ 恰有 $q$ 个值，并可表示成 $\sqrt[q]{a^p}$。

指数函数的加法定理明显地意味着

$$
\log(z_1 z_2) = \log z_1 + \log z_2,
$$

但只在这样的意义下成立，即两边表示复数的同一无穷集。如果我们把左边的一个值同右边的一个值比较，则可断定它们相差 $2\pi i$（或者 $2\pi$）的倍数。（与 1.2.1 节的注比较。）

最后讨论反余弦函数，它是由解下列方程得到的：

$$
\cos z = \frac{1}{2}(e^{iz} + e^{-iz}) = w.
$$

这是 $e^{iz}$ 的一个二次方程，有根(wow !!! amazing, 这样的推导就自然且有道理了很多了)

$$
e^{iz} = w \pm \sqrt{w^2 - 1},
$$

因此

$$
z = \arccos w = -i \log(w \pm \sqrt{w^2 - 1}).
$$

也可以将这些值写成形式

$$
\arccos w = \pm i \log(w + \sqrt{w^2 - 1}),
$$

因为 $w + \sqrt{w^2 - 1}$ 与 $w - \sqrt{w^2 - 1}$ 互为倒数。$\arccos w$ 的无穷多个值反映了 $\cos z$ 的偶性和周期性。反正弦函数容易由下式定义：

$$
\arcsin w = \frac{\pi}{2} - \arccos w.
$$

应该指出，在复解析函数论中，所有的初等超越函数都可用 $e^z$ 及其逆 $\log z$ 表示。换句话说，基本上只有一个初等超越函数。

#### 2.3.4 练习

1. 对实的 $y$，证明在 $\cos y$ 和 $\sin y$ 的级数中，每一个余项具有与首项相同的符号（这推广了证明周期时用到的不等式，见 2.3.3 节）。
2. 证明 $3 < \pi < 2\sqrt{3}$。
3. 对 $z = -\frac{\pi}{2}i, \quad \frac{3}{4}\pi i, \quad \frac{2}{3}\pi i$，求 $e^z$ 的值。
4. 当 $z$ 分别为何值时，$e^z$ 等于 $2, -1, i, -i/2, -1-i, 1+2i$？
5. 求 $\exp(e^z)$ 的实部和虚部。
   - 多次使用$e^{x+iy}=e^x(\cos y+i\sin y)$
6. 确定 $2^i, \quad i, \quad (-1)^{2i}$ 的所有值。
7. 确定 $z^z$ 的实部和虚部。
   - 用这两个
   - $z = e^{\log z}$
   - $\log z = \log |z| + i\arg z$
8. 用对数表示 $\arctan w$。
9.  [TODO]说明如何在一个三角形中定义“角”，记住这些角位于 0 与 $\pi$ 之间。根据这个定义，证明各角之和为 $\pi$。
10. 证明二项方程 $z^n = a$ 的根是正多边形（相等的边和角）的顶点。
    - $z = re^{i\theta}$, 可得 所有根长度相等，角差$2\pi/n$，是多个等腰三角形
