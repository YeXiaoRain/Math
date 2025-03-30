---
title: Walter Rudin 数学分析原理 4 连续性
date: 2025-02-10
categories:
  - 数学分析
tags:
  - 微积分
  - 数学分析
---


## 连续性 continuity


### 函数的极限 limit of functions

4.1 X,Y是度量空间, $E\subset X$,f maps E into Y，p是E的极限点. We write $f(x) \to q$ as $x \to p$, or 
- $\lim_{x\to p} f(x)=q$
- 这里是 可以在度量空间X通过控制p的距离（邻域）$0<d_X(x,p) < \delta$，来控制在度量空间Y中$d_Y(f(x),q) < \epsilon$的距离
- 注意1: $p\in X$ 不一定$p\in E$, 
- 注意2: 关注的是邻域 不含中心点的 $0 < d_X(x,p)$, 所以 $f(p)\neq \lim_{x\to p}f(x)$ 也是可能的

<!--more-->

4.2 极限点的函数极限值 与 数列
- $\lim_{x\to p}f(x)=q$ 当且仅当 $\lim_{n\to\infty} f(p_n)=q$ 对于E中每个趋于q且$q_n\neq q$的序列成立
	- 这里要“每个”
	- 右边其实会发现 f(p_n)也是序列,
	- => 从 X中半径 控制 Y中距离的角度，显然
	- <= 反证/逆否，如果不成立，有Y中距离，无法通过X中控制（对X中任意半径 可以找例外点），另一方面它是极限点，所以缩减X中半径，构造出 一个 序列 也不满足，所以
- 推论极限若存在，则唯一unique

4.3 定义函数的四则运算，以及数乘

4.4 定理 函数极限点 与 四则运算

### 连续函数 continuous functions

在高数中 很多时候是 f(实数) into 实数，而这里X,Y,Z强调了 输入 和 输出 可能是不同的 范围

4.5 X,Y 是度量空间$p\in E\subset X$, f maps E into Y
- 也是通过X中控制半径，来控制Y中到f(p)的距离，另一方面可以看成直径（想象cauchy的感觉）
- 在点p连续， continuous at p，（必须在p上有定义）
- 如果 E上每个点都连续，那么f在E上连续
- 这里 前提没有了`4.1的p是E极限点`
	- 也就是 如果p是E的孤立点，在上述定义下，我们称它连续

4.6在4.5情况下 若p是E的极限点
- f在点p连续当且仅当 $\lim_{x\to p}f(x)=f(p)$, 左边是去心邻域

4.7 函数的复合 composition of functions. 连续函数的连续函数是连续的
- X,Y,Z 是度量空间, $E\subset X$, f maps X into Y, g  maps f(E) into Z
- h(x) = g(f(x)),或 $h =g\circ f$
- f在 $p\in E$连续 且 $g$在$f(p)$连续（注意的是） 那么 h在p连续
- 从范围控制角度可以看到传递过程，也就有标准的描述表达式
	- 另一方面 这充分但是不必要，例如 `f(x)=1, g(y)=[y!=1]`, 这样 g中 是不连续的，而h(x)=0是连续的

4.8 a mapping f of a metric space X into a metric space Y is continuous on X if and only if $f^{-1}(V)$ is open in X for every open set V in Y
- 这里是inverse images 不是反函数
- 连续+V是Y中开 => 要证明 $f^{-1}(V)$ 每个点是内点。X中每个p, f(p)在V中，V开，所以f(p)是V中内点，存在半径全属于V,因为连续，p存在半径 控制 p附近，使得f(p附近)在f(p)附近（半径内），也就是 p附近的点全映射在V中（也就是inverse images），所以 逆象 每个点是内点
- V是Y中开 + $f^{-1}(V)$每个是内点 => 证明f连续。 对于任意p,和半径epsilon，把V取 f(p) 半径epsilon附近所有点，得到的$f^{-1}(V)$是开集，所以可以控制 p的半径，使得全部属于 $f^{-1}(V)$, 这个控制，对应的f(x)在 Y中 只会有更小的epsilon,所以连续

4.9 f,g是度量空间X上的复连续函数，f+g,fg,f/g(g不为0) 在X上连续

4.10 $f_1,\cdots,f_k$是度量空间X上的实函数, 并且$f(x)=(f_1(x),\cdots,f_k(x)),x\in X$
- $f: X \mapsto \mathbb{R}^k$
- f 连续 当且仅当 f_i 都连续
- f,g 加法乘法运算 保持连续

4.11 $x_1,\cdots,x_k$是$x\in \mathbb{R}^k$的坐标
- $\Phi_i(x)=x_i$ 定义的函数 必然在$\mathbb{R}^k$上连续，因为 夹挤$|\Phi_i(x)-\Phi_i(y)|\le |x-y|$
- 有 单项式 $\prod x_i^{n_i}$ 在$\mathbb{R}^k$上连续
- 有 多项式 $\prod c_{n_*} x_i^{n_i}$ 在$\mathbb{R}^k$上连续
- 分式只要分母不为零则 连续

### 连续性与紧性 continuity and compactness

4.13 A mapping f of a set E into $\mathbb{R}^k$ is said to be bounded if there is a real number m such that |f(x)| \le M for all x in E

4.14 suppose f is a continuous mapping of a compact metric space X into a metric space Y then f(X) is compact
- 连续映射 把 紧度量X 映入 度量 Y, f(X)是紧的
- proof
	- f(X)的任意开覆盖 的 inverse images 在 X中是开覆盖，所以 这些inverse images 因为紧 所有 有有限子覆盖，那么也对应的 f(X)的开覆盖也完成了f(X)的覆盖
	- 这里用到了 $E\subset Y$则 $f(f^{-1}(E))\subset E$

4.15 f是把紧度量空间X映入$\mathbb{R}^k$内的连续映射, 那么f(X)是闭的，有界的，因此f是有界的
- 2.41 推出

4.16 f是紧度量空间X上的连续实函数，且
- M = sup_{p in X} f(p)
- m = inf_{p in X} f(p)
- 那么一定存在两点r,s in X,使得 f(r)=M, f(s)=m
- proof
	- 4.15 f(X) 有界闭实数集，根据2.28 存在点

4.17 suppose f is a continuous 1-1 mapping of a compact metric space X onto a metric space Y. then the inverse mapping $f^{-1}$ defined on Y by
- $f^{-1}(f(x))=x,x\in X$ 也就是 反函数inverse mapping 和  上面inverse images 都是一样的符号，不过这里 1-1 + onto
- 另外 这个 反函数 是连续的
- proof 4.8的 这时把 g=f的反函数, f 看成g的inverse images, 
	- 任意 V in X + V开,有 V^c 闭，V^c紧，f(V^c)紧, f(V^c)闭, f(V)=f(V^c)^c 开
	- 所以4.8 任意象开，在inverse images中开，所以连续

4.18 f把度量空间X映入into 度量空间Y内的映射， uniformly continuous,一致连续， 对于每个目标半径，总存在控制半径，使得任意两个被控制点p,q ，能d(f(p),f(q))距离在目标半径内
- 一致连续，和点连续（以及函数逐点连续） 都是能通过控制输入半径，来控制输出半径范围
- 区别是， 点连续 是 先选点，然后控制，（所以可以看成也依赖p,不只是依赖点）所以 另一个角度是 f(x,目标半径) 还是 f(目标半径)
	- 而一致连续是，先控制输入半径后，任意两点。更像函数的整体概念 
	- 一个例子就是 $y=x^2$ 连续，但不是一致连续，因为对于给定 y的变化目标，不能通过控制x变化幅度来完成控制

4.19 f 是把紧度量空间X映入度量空间  Y内的一个连续映射，那么f在X上一致连续
- 还是利用 邻域 有限子覆盖 和 三角不等式来证明
- 我们希望 X中p q被限制半径 时，属于 某个同一个邻域，这样，映入Y就是一个邻域内，可以容易的被控制距离
	- 给定目标半径 epsilon, 倒着看 要Y中 被映的点距离<epsilon，所以建立邻域用epsilon/2
	- 所以 对于p in X, 取R(p)邻域使得 在f(p)邻域epsilon/2内
	- 那么第二个目标，控制X中距离 delta,能控制到某个同一个邻域内，所以，这里 我们不直接用 R(p),是 p 和 R(p)/2作为邻域半径
	- 这样在X中是开覆盖，有有限子覆盖，从而 控制delta = min (R(p_i)/2), 使得 p q 距离在delta内时，p属于某个邻域p_i，且 q属于p的delta 邻域，也在p_i的R(p_i)邻域中（这里没有/2), 所以p,q属于同一个p_i的R(p_i)邻域，映射到 Y中的f(p_i),半径epsilon/2的邻域内，从而 映射点距离 < epsilon

4.20 E是R1中不紧的集，那么
- 有在E上连续却不是有界的函数
- 有在E上连续且有界，却没有最大值的函数
- 若E有界，有在E上连续却不一致连续的函数

证明
- 若E有界，因为不紧，E有极限点不属于E, 令x_0,那么$f(x)=1/(x-x_0)$ 在E上连续且无界，也不一致连续
	- 对于第二条， $f(x)=1/(1+(x-x_0)^2)$ 没有最大值 上确界=1
- 若E无界
	- 第一条 f(x)=x
	- 第二条 $f(x)=x^2/(1+x^2)$
	- 第三条 

4.21 X是实直线上 $[0,2\pi)$, Y是一切到原点距离为1的点组成的圆，并且f是由f(t)=(cos t, sin t)定义的 使X映满Y的映射
- 这个例子X不紧，f连续，一一映射
- Y是紧的，$f^{-1}$ 不连续

### 连续性与连通性 continuity and connectedness

4.22 if f is a continuous mapping of a metric space X into a metric space Y and if E is a connected subset of X then f(E) is connected
- 连续映射 f(连通性)=> 连通性
- 证明：若 f(E) 不连通，则可以表示为  f(E)=A 并 B
	- $G=E \cap f^{-1}(A)$ 非空
	- $H=E \cap f^{-1}(B)$ 非空
	- $E = G\cup H$
	- $A\subset \bar{A}$, $G\subset f^{-1}(\bar{A})$，因为f连续，所以 $f^{-1}(\bar{A})$ 是闭集，所以$\bar{G}\subset f^{-1}(\bar{A})$, 有$f(\bar{G})\subset \bar{A}$
	- $f(H)=B$, 而$\bar{A}\cap B=\varnothing$ 说明$\bar{G}\cap H$交为空，否则 这两个交中的点，即在A的闭包中，又在B中，
	- 类似的证明另一半
	- 所以E连通时不成立

4.23 f是区间`[a,b]`上的连续是函数, f(a) < f(b) 并且 f(a) < c <f(b), 那么必有一点x in (a,b), f(x) = c
- 2.47 `[a,b]`是连通的
- 4.22 `f([a,b])`是连通的
- 2.47 `f([a,b])`对应完整的区间
- 这里稍微注意 实数区间 和 连通的拓扑定义的区别，
- 没有逆定理


### 间断 discontinuities

x是f中定义域domain中的一个点，而在这点不连续（极限不等于函数值，或没有极限），称为间断

4.25 f 在$(a,b)$ 定义 ,对于给定$x, a\le x < b$
- 定义 right-hand 右极限, f(x+)=q
- 当且仅当 任意序列 $t_n \in (x,b)$ 且 $t_n\to x$ 都有$f(t_n)\to q$
- left-hand limits 类似定义
- 这感觉上也挺直观 的， 就是正方向来的，还是负方向来的
- 极限存在当且仅当 左右极限相等

4.26 f 在(a,b)上定义, 点x间断，左右极限存在，称作 discontinuity of the first kind, or a simple discontinuity, at x. otherwise the discontinuity is said second kind
- 哎 这 first,second 我很讨厌这种说法，

例子
- f(x) 有理数=1,无理数=0, 处处 second kind , 因为处处左右极限不存在
- f(x) 有理数=x,无理数=0, 在点0 连续！其它点依然second kind
- f(x) x为负=-x-2,为正=x+2, 在点0 first kind 其它点连续
- f(x)=sin(1/x),点0补充定义=0, 点0 second kind ,因为左右极限不存在，其它点连续

### 单调函数 monotonic functions

4.28 f be real on (a,b), monotonically increasing on (a,b) if a < x < y < b implies $f(x) \le f(y)$
- 反过来可以定义单调递减

4.29 f在(a,b)单调递增 ????????????
- $\sup_{a < t < x} f(t)=f(x-)\le f(x) \le f(x+)=\inf_{x<t<b} f(t)$
- 此外, $a < x < y < b$那么$f(x+)\le f(y-)$ 
- ?????????????? 没懂书上这个，不是应该证明 任意序列 的，最小上界性，是能找到A,如何证明 A=f(x-)
	- 为啥这里 就能 delta了啊，有办法很近的贴两个点吗
	- 我想不通的是，为啥 单调了，能 控制到x的距离来控制y的距离啊，有办法让 f((a,x))的值 的最大的部分变成孤立点吗？
- 推论: 单调函数没有第二类间断点
- 蕴含：单调函数至多在一个可数点集上间断，

4.30 f在(a,b)单调, (a,b)中使f间断的点的集至多是可数的
- 设E是所有间断点集，
- 因为x in E 间断 左右极限不等，f(x-) < f(x+), 取之间某个有理数 r(x)
- 因此???? E中每个点被分配一个有理数，两两不同，和有理数的子集建立 1-1 映射，所以至多可数
- 4.31 在(a,b)上其它点连续

### 无限极限与在无穷远点的极限 infinite limits and limits at infinity

4.32 在广义实数系中作运算，把4.1 重述
- 任一实数c, x > c的实数x的集叫做$+\infty$ 的一个邻域，记作 $(c,+\infty)$

4.33 f是定义在E上的实函数，A与x在广义实数系中. 如果对于A的每个邻域U存在着x的一个邻域V,使V交E不空，且 交中不等于x的点 t, $f(t)\in U$, 我们说$t\to x,f(t)\to A$
- A和x 是实数时很前面一样，
- 当 是 广义的，也就是 $+\infty,-\infty$中的，扩展定义成立

4.34 f,g定义在E上 $t\to x$时, $f(t)\to A,g(t)\to B$
- 如果极限存在 极限唯一
- 保持加法
- 保持乘法
- 保持除法
	- 需要注意上面的 保持运算，要避开 无穷大相减 , 0 * 无穷大 这种 未定义的
