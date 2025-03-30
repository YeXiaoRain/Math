---
title: Walter Rudin 数学分析原理 3 数列与级数
date: 2025-02-03
categories:
  - 数学分析
tags:
  - 微积分
  - 数学分析
---



## 数列与级数 numerical sequences and series


### 收敛序列 convergent sequences

3.1 数列收敛converge，能找到p，对于任意给定距离需求，可以通过N来控制 $|a_{n>N}-p|<$距离需求
- 否则  diverge

<!--more-->

3.2 度量空间X中的序列{p_n}
- p的任意邻域，可以通过p_n从某处截断 以后的序列全在邻域中
- 唯一收敛点
- 收敛则有界
- $E\subset X$, E的极限点p,那么E中有一个序列可以收敛到p
	- 极限点缩小半径构造就好了

3.3 复数序列的 四则运算（注意0）

3.4 $\mathbb{R}^k$ 中收敛，需要每个维度收敛，独立性+max(N)
- 加运算，数乘运算，点积运算

### 子序列 subsequences

3.5 按 不减下标抽取 的序列
- 子序列也是序列，类似定义子序列极限 subsequential limit 

3.6
- 紧度量空间X的序列p_n,它存在子序列收敛到X中某个点
	- 证明：序列集合在X中有极限点，极限点+下标增大控制+距离趋于0控制 下 构造序列
- $\mathbb{R}^k$每个有界序列含有收敛子序列
	- 具体到$\mathbb{R}^k$中了，有界能找到紧盒子，紧子集中

3.7 度量空间X中 的序列 {p_n}的部分极限组成了X的闭子集
- 和 闭包的闭包 不会有新的点类似的证明思路，还是邻域+三角不等式

### Cauchy序列 sequences

3.8 定义Cauchy 序列
- 序列在度量空间X中，对于任意给定距离$\epsilon > 0$，可以用N控制 $d(p_{n>N},p_{m>N}) <\epsilon$

3.9 直径， E是度量空间X的子集
- sup { d(p,q) | p in E, q in E } , 记作 diam E
- Cauchy序列也就是说 可以通过N控制 直径，即直径趋于0

3.10 定理
- diam $\bar{E}$ = diam E, 闭包不影响直径
	- 闭包点更多只可能更大，所以证明  diam 闭包 <= diam E + 任意数 来证明另一侧，又用到三角不等式
- 嵌套紧集，且紧集趋于0,那么所有嵌套紧集的可数交为单点集

3.11 
- 度量空间中 收敛序列是Cauchy序列
- 紧度量空间X+Cauchy序列，收敛于X中某个点
- $\mathbb{R}^k$中每个Cauchy序列收敛

3.12 如果度量空间X中的每个Cauchy序列 在X中 收敛，就说它是完备的 complete
- all compact metric spaces and all euclidean spaces are complete
- 不完备例子： 有理数和度量函数 d(x,y)=|x-y| ,最开始举例过 到 根号2
	- 这里也可以看到，逼近根号2的序列，在 这样的 定义下，它是柯西序列，因为它任意两个可以无限的接近，而却不是收敛序列，因为找不到一个 有理数，使得其中的值和这个有理数无限的近

3.13 实数序列
- 单调递增  $s_n \le s_{n+1}$
- 单调递减  $s_n \ge s_{n+1}$

3.14 单调序列收敛，当且仅它当有界

### 上极限和下极限 upper and lower limits

3.15 对于任意M,有N, $s_{n > N} \le M$, 则$s_n\to -\infty$

3.16 实数扩充 正负无穷，
- $E$ = 所有可能的子序列极限的集合
- $s^*=\text{sup}E$
- $s_*=\text{inf}E$
- 分别 是 序列的上下极限

3.17 
- $s^* \in E$
- $x > s^*$ 有正整数N, $s_{n > N} < x$
- $s^*$是唯一具有上述两点的数
- 证明
	- 正负无穷时
	- 第一条，又是出现几次的 闭包的闭包不会多点， 3.7 类似的思路
	- 有非无穷上界，如果有无穷多个超过x,那么这个新序列的极限 >= x 也就 > $s^*$ 与 sup E定义矛盾，
	- 唯一：比它大的不满足属于E, 比它小的不满足第二条因为 邻域可以控制在$x=s^*$

3.19 n > N时 两个序列保持对应下标一致偏序关系 $s_n \le t_n$那么
- 子序列集合的 上下确界 对应的 $\le$ 

### 一些特殊序列 some special sequences

- $p > 0$ 时$\lim_{n\to \infty}\frac{1}{n^p}=0$
- $p > 0$ 时$\lim_{n\to \infty}p^{1/n}=1$
- $\lim_{n\to \infty}n^{1/n}=1$
- $p>0,a\in\mathbb{R},\lim_{n\to \infty}\frac{n^a}{(1+p)^n}=0$
- $|x|<1, \lim_{n\to\infty}x^n=0$

### 级数 series

3.21 部分和 $s_n=\sum_{i=1}^n a_i$
- series diverge级数收敛: 序列 $s_n$ 收敛

3.22 Cauchy criterion(3.11)
- 任意epsilon, 可以用N来控制$|\sum_{i=n}^m a_i| \le \epsilon$ 

3.23 $a_i$趋于0
- 注意必要非充分
- 例如 $a_i=1/i$

3.24 非负的级数收敛，当且仅当 s_n 构成有界数列

3.25 比较判别法
- $|a_n| \le c_n$ 且$\sum c_n$收敛 则$\sum a_n$收敛
- $0 \le b_n \le d_n$ 且$\sum b_n$发散，则$\sum d_n$发散

### 非负项级数 series of nonnegative terms

3.26 $0\le x<1$
- $\sum_{n=0}^\infty x^n=\frac{1}{1-x}$

3.27 $a_i\ge 0$不增
- $\sum {a_n}$ 和$\sum_{k} 2^ka_{2^k}$ 同敛散
	- 1/2 右 <= 左 <= 右

3.28 $\sum \frac{1}{n^p}$
- p > 1  收敛
- $p \le 1$ 发散

3.29 $\displaystyle \sum_{n=2}^{\infty}\frac{1}{n(\log n)^p}$
- p > 1发散
- p <= 1 收敛

### 数e

3.30 $e=\sum_{n=0}^{\infty} \frac{1}{n!}$
- $0!=1$

3.31 定理
- $\lim_{n\to \infty} (1+\frac{1}{n})^n=e$
- $s_n$为3.30 的部分和，$t_n$为这里的项
	- 对$t_n$ 二项式展开， 注意到 $\binom{n}{k}1^{n-k}(1/n)^k=(1/k!)\cdot (<1)$,所以 lim sup t_n \le lim sup s_n = e
	- 对任意给定m, 若$n\ge m$ $t_n \ge \sum (1/k!)\cdot (< 1)$
		- 其中右侧  < 1 的部分，在固定m情况下，n趋于无穷时，趋于1
		- $\lim \inf_{n\to \infty} t_n \ge  s_m$
- 收敛速度 $e-s_n=\frac{1}{(n+1)!}+\frac{1}{(n+2)!}+\cdots$
	- $<\frac{1}{(n+1)!}(1+\frac{1}{(n+1)}+\frac{1}{(n+1)^2}+\cdots)$
	- $=\frac{1}{n!n}$

3.32 定理 e是无理数
- 反证 e=p/q
- 0 < e - s_q < 1/(q!q)
- 0 < q!(e-s_q) < 1/q 注意到 中间的是整数

### 根值验敛法与比率验敛法 the root and ratio tests

3.33 root test $b = \lim \sup_{n\to \infty} |a_n|^{1/n}$
- b < 1, $\sum a_n$ 收敛
- b > 1, $\sum a_n$ 发散
	- 我们能找到子序列极限是b, 这个子序列的和就已经发散了
- b = 1 时无结果

3.34 ratio test $b=\lim \sup_{n\to \infty} |\frac{a_{n+1}}{a_n}|$
- $b<1$  级数收敛
- 如果 固定 n_0, n >= n_0时 $|\frac{a_{n+1}}{a_n}| \ge 1$ 它发散
	- 注意的是 上面是b来判断，而这里 lim sup 在 >= 1时并不能判断
	- 一个简单的例子就是 $1+1/6+1/6^2+\cdots$显然是收敛的
		- 而我们通过一个简单的拆分，每两个均分$1+1/12+1/12+1/72+1/72$ 你会发现还是收敛的但是 lim sup =1 

3.37  定理 任意正数序列$a_n$
- $\lim \inf_{n\to \infty} \frac{a_{n+1}}{a_n}\le \lim \inf_{n\to \infty} a_n^{1/n}$
- $\lim \sup_{n\to \infty} \frac{a_{n+1}}{a_n}\ge \lim \sup_{n\to \infty} a_n^{1/n}$
	- 证明 令 左侧=b, 如果无穷显然，如果有限，可以找到c,使得n > N ,$a_{n+1}/a_n \le c$ 
	- $a_{N+t} \le c^ta_{N}$
	- 即 $a_{i} \le c^{i-N}a_{N}$
	- 即 $a_{i}^{1/i} \le c (c^{-N}a_{N})^{1/i}$
	- $\lim \sup \le c$
	- 注意对于任意$c > b$ 都成立, 所以 证毕

### 幂级数 power series

3.38 $\sum_{i=0}^{\infty} c_iz^i$, 其中 $c_i$ 是复系数, z是复数（一般来说 收敛区域在一个圆内，发散在圆外，圆上的状态多变（这也是为什么有的教材 叫做收敛半径却只有两个正负实数值

3.39 $a=\lim \sup_{n\to \infty} |c_n|^{1/n}$
- 收敛半径$R=1/a$
- $\lim \sup_{n\to\infty } |c_nz^n|^{1/n}=|z| \lim \sup_{n\to\infty } |c_n|^{1/n}=|z|/R$, 也就有了上面半径内收敛，半径外发散的性质

### 分部求和法summation by parts

3.41 $A_n=\sum_{i=0}^n a_i$, 令$A_{-1}=0$
- $\sum_{i=p}^q a_ib_i=\sum_{i=p}^q (A_i-A_{i-1})b_i$
- $= \sum_{i=p}^q A_ib_i-\sum_{i=p}^qA_{i-1}b_i$
- $= \sum_{i=p}^q A_ib_i-\sum_{i=p-1}^{q-1}A_{i}b_{i+1}$
- $=(\sum_{i=p}^q A_i(b_i-b_{i+1})) +A_qb_q-A_{p-1}b_p$

在 b单调时很有用

3.42 若
- $A_n=\sum a_n$ 有界
- $b_i$ 非严格单调递减且趋于零
- 那么 $\sum a_nb_n$ 收敛
- 证明: Cauchy 准则
	- |A_i| <= M
	- $|\sum_p^q| = |(\sum A_i(b_i-b_{i+1}))+A_qb_q-A_{p-1}b_p|$
	- $\le M|\sum (b_i-b_{i+1}) + b_q-b_p|\le 2Mb_p$ 也就是 可以通过控制N来控制p从而控制b_p 从而控制直径

3.43 交错级数 交替正负号，绝对值非严格单调递减趋于0,那么 收敛
- 也就是 a_i 取正负，b_i取绝对值

3.44 $\sum c_n z^n$的收敛半径是1, $c_i$ 不增趋于0,在圆上|z|=1 除了z=1可能例外，其它点都收敛
- 3.42 $a_n = z^n, b_n=c_n$ $|A_n|=|\sum_{i=0}^n z^i|=|\frac{1-z^{n+1}}{1-z}|\le \frac{2}{|1-z|}$

### 绝对收敛 absolute convergence

if the series $\sum |a_i|$ converges

3.45 绝对收敛 => ai收敛

### 级数的加法和乘法 addtion and multiplication of series

3.47 加法和数乘保持运算

3.48 卷积, the product of two given serires
- $c_n = \sum_{i=0}^n a_i b_{n-i}$
- 其 想法  和幂级数 直接相乘，然后对应幂次相等是关联的

3.50 
- $\sum a_n$ 绝对收敛
- $A=\sum a_n$ 
- $A^{||}=\sum |a_n|$ 
- $B=\sum b_n$ 
- $\sum c_n=\sum (\sum a_ib_{n-i}) = AB$

也就是 两个收敛数列，其中一个绝对收敛，那么它们的积 为两个收敛值的积

$C_n=\sum a_iB_{n-i}$

$=\sum a_i(B+d_{n-i})$,其中 $d_{j}=B_j-B$

$=A_nB+(\sum a_i d_{n-i})$

右侧怎么处理， 注意到随着n增大项会增大，于是想法是，切断成有限和无限，其中有限的通过n增大让它趋于0,而无限项通过3.42的性质，也就是和的上界来趋于0

所以对于任意epsilon, 可以控制N,让$|d_{>N}| \le \epsilon$

$|\sum_n a_{n-i}d_{i}| \le |\sum_{< N} a_{n-i}d_{i}| +|\sum_{N}^n a_{n-i}d_{i}|$ 三角不等
- 左边是有限项，先不管，右边是可以随n变化项, 右边 <= $A^{||} \cdot \epsilon$
- 左边 因为有限，n趋于无穷大时，所有d不变，a在趋于零，所以左边趋于0
- 所以n 趋于无穷大时 <= $0 + A^{||} \cdot \epsilon$, 

综上 $C_n$ 趋于 AB

3.51 阿贝尔证明了, 若$\sum a_n,\sum b_n, \sum c_n$分别收敛于 A,B,C,且$c_n=\sum a_ib_{n-i}$
- 那么 C=AB
- 见8.2章

### 级数的重排

3.52 下标还是自然数，每个正整数要出现一次，且只出现一次
- 问题：重排后级数保持收敛吗？重排后如果收敛，收敛值相同吗
- 例子先
	- A:1-1/2+1/3-1/4+1/5+... 也就是 交错的1/i， 交错趋于0 收敛
	- B:1+1/3-1/2+1/5+1/7-1/4+... 也就是上面的所有 奇数2个，然后偶数1个
	- A: < 1-1/2+1/3 =5/6 后面只会变小
	- B: 注意到前3个和也是 5/6, 而 1/(4k-3)+1/(4k-1)-1/(2k) > 0, 说明就算收敛 也不会是A, 观察到3项合并也是 ~ $1/4k^2$ 也是存在极限的

3.54 Riemann 定理
- 收敛且不绝对收敛，则对于 $a \le b$ 一定存在 一个重排，使得重排后的序列， lim inf = a, lim inf b
- 证明 抽取p_n = max(0,a_n), q_n=min(0,a_n)
	- 也就是正负项，这两个序列一定都发散
- 下面我们要做的是让 正负内部顺序保持不变而正负穿插
	- +++---+++---
	- 其中每次正要刚好 > b时就切换到负，而负也是刚好 < a时 停止， 这两个都可以达成因为 p,q序列都是发散的
	- 这样 会发现每次 刚好 > b时的值 到b 的距离 <= 最后的这个|a_?|, 对于a也是刚好小于|a_?|
	- 因为原序列收敛，所以这个 值是趋于0的，也就是可以控制 N 控制 |a_?| 从而控制上下超出 `[a,b]` 的距离


3.55 $\sum a_n$是绝对收敛的复数项级数，那么$\sum a_n$的每个重排收敛都收敛于同一个和
- 绝对收敛，可以通过N控制 $\sum_{n}^m |a_i|$ 的距离
	- 而 1....N 在 重排后 最大的下标可以找到，在最大下标以后，同样被控制了距离，也就有了也是绝对收敛
	- 另一方面 设原来部分和s_n, 新的序列b_n,新的部分和t_n, 在t_1...t_p 包含原来的 a_1...a_N, 那么, n > p 时 $|s_n-t_n|$  中 a_1..a_n都被消掉, 剩下的 $|\sum a_i - \sum b_i|$ ,这两部分都控制在 epsilon, 所以是2epsilon中? 更精确的（也可以不用这么精确），a_i,b_i对应原来相同的也会抵消掉，生下的都是原来不同的，所以是epsilon中，不论怎样 都是被控制到任意小，所以 收敛同一个值
