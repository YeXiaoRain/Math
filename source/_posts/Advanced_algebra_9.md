---
title: 高等代数 九 线性空间
date: 2022-08-19
categories:
  - 高等代数
tags:
  - 高等代数
  - 线性映射
  - 不变子空间
  - Hamiton-Cayley定理
  - Jordan标准型
---

视频 86-120
# 线性映射 

1. 研究 线性映射的运算： 线性映射作为映射，可以做乘法运算，乘积仍是线性映射，还可以定义线性映射的加法和纯法
2. 研究 线 线性映射的整体结构： 线性映射的运算，域F上 V到V'的所有线性映射组成的集合，记作Hom(V,V'), 对于线性映射的加法和纯量乘法，成为域F上的一个线性空间，V上所有线性变换组成的集合Hom(V,V) （自身到自身） 即是域F上的线性空间，又是一个有单位元的环
3. 研究线性映射的 核 与 象， V到V'的线性映射A的核 Ker A是一V的一个子空间，A的象Im A是V'的一个子空间. 线性映射A的核Ker A可以用来研究线性空间V的结构
4. 研究线性映射和线性变换的矩阵表示。
5. V上的线性函数以及V的对偶空间V' (他是V上所有线性函数组成的线性空间)

<!--more-->

## 9.1 线性映射及其运算

两个线性空间。元素映射，加法映射（保持加法），乘法映射（保持乘法）。 则是线性映射

V到自身的 线性映射。 通常称为V上的线性变换。

线性空间V->域F, 称为V上的线性函数

例如
- 区间(a,b)上，所有 一次 可微函数 集合，构成线性空间，其求导过程 是一个线性空间，其导函数集合 也是一个线性空间 （这里的映射是双射）
- 区间`[a,b]`上 所有 连续函数组成集合，构成线性空间，做定积分 是一个到R的映射，也是线性映射，（这里可能不同函数的 定积分值相同，不是单射，但也是线性映射，这里展示列一种降维的例子）
- 过原点 的3维向量集合 到一个过原点给定平面的投影向量，同样是一个带有降维的线性映射
- 矩阵 $A_{s\times n}$, A: $F^n\to F^s, a \to Aa$ 线性代数里常见的矩阵乘法，这个例子中 如果s > n, 将不是满射，
- 零映射，把V中任意向量都映射到 V'中零向量
- 恒等变化 V 所有向量映射到自身 ， 记作$I$
- 标准映射 V -> V/W， 是一个线性映射
- 线性空间之间的一个 同构映射

---

线性映射的存在性，投影

定理1. V和V' 都是域F上的线性空间，V有限维度，V中取基S,V'任意n个向量$t_i$, 下面映射是一个线性映射
- A: V-> V'
- a 的按S表出的 $\sum {k_i}s_i \to \sum k_it_i$
- 这个其实就是说V中的按S的 坐标，在V'中 按照t_i的坐标，首先这始终是线性映射，置于映射结果 就看t_i的 线性有关性了

定理2. V是域F上的一个线性空间，U和W是V的两个子空间，且U和W关于V互补
- 任取 V中向量a,唯一表示成两个子空间向量和, a=a_1+a_2,那么a_1,a_2分别称作在子空间中的投影
- 投影是幂等变换

定义2：如果线性变化A 满足$A^2 = A$那么称作幂等变换

定义3：两个线性变换 A,B 如果 AB=BA=0 那么成A,B是正交的
- (上面 V到W的投影$P_W$)和(V到U的投影$P_V$)是 正交的
	- 也就是 投影到W 再投影到U 一定投影到零

---

三，线性映射的运算和线性映射的整体结构

V和V'都是域F上的线性空间，
- 所有线性映射组成的集合记作$Hom(V,V')$
- 所以线性变换组成的集合记作Hom(V,V)

$A\in Hom(V,U)， B\in Hom(U,W)$ 那么 $BA\in Hom(V,W)$ 非常显然不满足交换律

若 $A\in Hom(V,V')$ 且可逆，那么是一个同构映射， $A^{-1} \in Hom(V',V)$

定义，线性映射之家你的加法和乘法:

$A,B\in Hom(V,V')$

$(A+_{定义}B)a=Aa+_{V'}Ba$

$(k\cdot_{定义}A)a=k\cdot_{V'}(Aa)$

能够验证 线性映射 满足 线性空间8条法则，因此$Hom$是性空间。 这里我们得到一种 映射的集合 是线性空间

线性映射的乘法有左右分配率，但是没有交换律

特别的 $Hom(V,V)$ 对于加法和乘法构成 一个有单位元 的环

定义4. 一个非空集合A，如果有加法、乘法运算，以及域F与A的纯量乘法运算，并且A对于加法和纯量乘法成为域F上的一个线性空间，A对于加法和乘法成为一个有单位元的环，A的乘法与 纯量乘法满足 $k(ab)=(ka)b=a(k)b, k\in F,ab\in A$
- 那么称A是域F上的一个代数，线性空间维数A 称作 代数A的维数
- 简短说:
	- A自身 环
	- `[F,A]` 构成 线性空间
	- $k(ab)=(ka)b=a(k)b, k\in F,ab\in A$
	- 其实 这里 A自身环 和 <F,A> 的线性空间 两个中的加法 是同样的

$Hom(V,V)$ 是域F上的一个代数

矩阵 $M_n(F)$ 对于矩阵的加法、乘法与纯量乘法，成为域F上的一个代数

Hom(V,V') 中 定义 减法 $A-B = A+(-B)$

Hom(V,V)中 定义 `正整数` 指数幂: $A^n=$ n个A做乘法

这里定义的幂次全是整数

可逆时 $A^{-m}\to (A^{-1})^m$

$A^m\cdot A^n = A^{m+n}$

$(A^m)^n = A^{mn}$

$f(x)\in F[x]$ 多项式，带入$A$, 显然$f(A)\in Hom(V,V)$, 称作f(A)的一个多项式，

$f(A)g(A)=g(A)f(A)$, 注意这里要两边一样

所以多项式组成集合记作$F[A]$, $F[A]$对于减法乘法都封闭，所以是一个环,
- $F[A]$ 是 Hom(V,V)的子环
- $F[A]$是交换环
- $I\in F[A]$
- $F[A]$中所有数乘变换 组成的集合 是 $F[A]$的一个子环，且域F与这个子环之间有一个双射，且保持 加法乘法运算, 因此$F[A]$可以看成$F$的一个扩环
- f(x)中 可以用$F[A]$中元素带入

例如 线性空间V的两个互补子空间U,W的投影 $P_U,P_W$
- 自身幂等
- $P_{U},P_{W}$正交
- $(P_{U}+P_{W})a = a$ 所以$P_{U}+P_{W}=I$

那么逆命题呢?
- 在线性空间V上 $A+B=I, AB=0,A^2=A,B^2=B$ 那么A,B能否看作两个子空间的投影呢
- 直接反过来，U=Im A, V= Im B
	- 加，纯量乘封闭 U,V 都是子空间
	- 任意 V中可表示两个的和， 所以 U+V (子空间的和运算) =V，接下来只需要证明交只有零向量
	- 任意 属于交的 a=Ax=By 两种表示法
		- a=Ax=AAx=Aa=A(By)=(AB)y=0
	- 至此 U,V是两个互补线性子空间
	- 还需要证明 A,B就分别是他们的投影 即$P_U = A$
		- 那么根据定理2(互补， 表示成 子空间向量和，分量的映射，那么就是投影)

命题2.
- A,B 是V上正交幂等变换, A+B=I. 则$V=Im A \oplus Im B$ 这里是直和

## 9.2  线性映射的核与象

定义1. 核 A:V->V' ，那么ker A = V中 映射到V'的零向量的所有向量

ker A = { $a\in V | Aa=0$ } 

$Im A = AV$

命题1. ker A是V的一个子空间, Im A是 V'的一个子空间
- 因为加法乘法不变，所以只需要证明封闭性即可
- 同样 A是线性映射，保证了 Im A的 加法乘法的运算性质，只需要证明封闭

命题2 A是V-> V',
1. 是单射 当且仅当 Ker A = 0, 
	1. => 因为0始终属于Ker A
	2. <= 任意两个Aa=Ab相等 那么差A(a-b)=0反过来在a-b \in ker 0中，而ker 0只有0,所以 a=b
2. 满射当且仅当 Im A = V'， 就是定义

定理1， A:V->V',  那么 V/Ker A 和 Im A同构
- $\sigma: a+Ker A \to Aa$
	- 是映射(同样输入唯一输出) a+kerA=b+kerA <=> a-b \in ker A ,=> A(a-b)=0 <=> Aa=Ab 且是单射，满射，双射（单射 双射 线性映射不要求，但是同构要求）
	- 再 容易证明 保持 加法和乘法，所以 同构映射

定理2. 设V和V'都是F上的线性空间,V是有限维，摄A是一个线性映射，Ker A和Im A都是有限维度 且 dim Ker A + dim Im A = dim V
- 由上 dim(Im A) = dim(V/Ker A) = dim(V) - dim(Ker A)

定理3. 有限维线性空间,A:V->V' 线性映射
- A是单射
- <=> Ker A = 0
- <=> dim(Im A)=dim (V) = dim(V')
- <=> ImA=V'
- <=>A是满射

推论1. A: V->V 线性变换： 单射<=> 满射

根据这个，可以有矩阵乘法 维数的一种证明

$A_{s\times n}:F^n\to F^s$

Ker A 等于 AX=0 的解空间

ImA 等于A的列空间

$dim Ker A  + dim Im A = dim F^n$ 这在MIT 课用 矩阵解和图画展示了

dim (null space) + rank A = n(列数)

---

注意！对于线性变化，虽然 维数 和 等于 dim(kerA)+dim(ImA)=dim V, 但是 两个空间 的 和 并不一定等于，其实显然，本来ker A是V中的，但是Im V是转换过的, 这两个 没啥关系，相当于 按照 ker A的规则压缩，压缩后的和之前的 就不相关的感觉更自然
- 比如 $K[x]_n$ 求导D, $Im D = K[x]_{n-1}, Ker D = K$ 显然 $K[x]_{n-1}+K\neq K[x]_n$

命题3. A是线性空间V上的线性变换，如果是V上的幂等变换$A^2=A$， 那么 $V=Im A \oplus Ker A$
- 比上面多一个幂等
- 上面已经证明了 维数 ImA 和KerA的和是V,那么只需要证明 它们是互补（任何V中可表示，之间交为0）

推论2, V中互补的U,W. $U= Im P_U, W=Ker P_U$,
- 前半之前证明过了，后半根据命题3

定义. A:V->V' 余核 Coker A = V'/Im A

命题4. A:V->V' （线性空间之间的线性映射), 那么 满射 <=> Coker A = 0
- 满射
- <=> ImA=V'
- <=> V'/Im A=0

## 9.3 线性映射和线性变换的矩阵表示

A:V->V', $F^n\to F^s$

在V中 任意x=$\sum k_ia_i$ 用V的基a唯一表示

而对于V中的基的每个向量，经过变化$Aa_i = \sum l_{ij} a'_j$ 在V'中，被V'的的基a' 唯一表示

直接关注基的变换 $(Aa_1,\cdots,Aa_n) = (a'_1,\cdots,a'_s) (l 矩阵)$

那么 要表示x,就是两边同时右乘上 k的列向量 A x = (A V基) * k列 = V'基 * l及转换矩阵 * k列

对于 线性变换(V->V):
- (A V基) = V基(两边选择一样的基) * l及转换矩阵
- 所以 把线性变换 对应 一个 右乘$L_A$矩阵
- 变换A V基 = V基 * 矩阵A

若 A 是幂等变换，根据 命题3, $V=Im A \oplus Ker A$
- 基a(Im A)+基b(Ker A) 是V的一个基
- Aa=a
- Ab=0
- 所以 如果选择基 = `[...基a,...基b]`
- 那么 矩阵A = `对角矩阵[I_rank(a),...0]`

命题1. rank(变换A) = rank(V中选择基 的一个 矩阵A)
- rank(变换A) = dim(Im A) = rank(A)

---

Hom(V,V') 与$M_{s\times n}(F)$的关系,  Hom(V,V) 与$M_{n}(F)$的关系

定理1. (选V基)->(选V'基): 线性映射A 与 对应的变换矩阵A 是同构的
- Hom(V,V') 同构于 $M_{s\times b}(F)$, 注意的是这里 两边基先选定，而基的选定并不要求 标准，就已经有了同构
- dim (Hom(V,V')) = sn = (dim V)(dim V')

特殊的V' 取V

变换: (变换A变换B)a=变换A(变换B a)=变换A (a 矩阵B)=(变换A a) 矩阵B = a 变换A 矩阵B

定义1. M,M'都是域F上的代数，双射$\sigma$ 是 线性空间的同构映射，又是环的同构映射，那么称作代数的同构映射
- 这里其实再次强调了， 同构不只是元素的映射 还有运算的保持

定理2. $线性变换A\to 矩阵A$ 是 Hom(V,V) 到 M_n(F)的一个同构映射

变换可逆
- <=>  存在变换B, 变换A变换B=变换B变换A=变换I
- <=> 存在矩阵B, 矩阵A矩阵B=矩阵B矩阵A=矩阵I
- <=> 矩阵可逆

类似的 变换的幂等 与 矩阵的幂等 也是冲要的

---

向量在线性映射下 象的坐标

- (变换A)a=变换A((基)X)=(变换A 基)X=基(矩阵A)X
- 所以对于 同样的基的选择，(A_基)X是新的坐标,..... 这里 矩阵A是与基的选择是有关的！！！！，所以在书写上应该把 选定基作为一个很前置的很固定的条件 

对于线性映射 A:V->V' 来说，a的 新坐标 $= 矩阵A_{基V\to 基V'}X$

---

不同基下 矩阵之间的关系

基1 变换A_1, 基2 变换A_2

$A_2=S^{-1}A_1S$

已知

变换A 基1 = 基1 * 矩阵A_1

变换A 基2 = 基2 * 矩阵A_2

基2 = 基1 * 矩阵S

那么有 

$变换A 基2 = 变换A (基1 * 矩阵S) = (变换A 基1) * 矩阵S = (基1 矩阵A) * 矩阵S = ((基2 * S^{-1})A)S = 基2 (S^{-1}AS)$

表明 同一个线性变换， 不同的基下的矩阵之间的相似的！！！！！

相似的矩阵的 det,rank,trace迹 是相等，叫做线性变换的 det,rank,trace
- 5章证明过 利用 trace(AB)=trace(BA) 核心结论
- 这是一个找相似矩阵的最简单形式的好理由

## 9.4 线性变换的特征值，特征向量，线性变换和对角化的条件

希望找到 对角矩阵D

变换A 基 = 基 * 对角矩阵

---

一、线性变换 的特征值和特征向量

$(变换A) 非零向量a = \lambda a, \lambda\in F$

特征值$\lambda$和对应特征向量$a$

作用就是把这个特征向量压缩/拉伸 倍数

变换A的特征值 <=> 矩阵A的特征值

特征向量 是 属于 特征值的一个特征向量： 变换A <=> 矩阵A

---

二、线性变换可对角化的充要条件

如果V中存在一个基，使得线性变换A在这个基下的矩阵是对角矩阵，那么称A可对角化

定理1. 域F上n维线性空间V上的线性变换A可对角化，当且仅当A有n个线性无关的特征向量， 此时在 基下的矩阵为 特征值的对应位置的对角矩阵， 称作A的标准形

推论1. V上的线性变化A可对角化，当且仅当V中存在由A的特征向量组成的一个基

特征子空间： 对于特征值$\lambda_0$, 所有该特征值对应的特征向量构成的空间, 记作$V_{\lambda_0}$

$a\in V_{\lambda_0}$<=> 变换$Aa=\lambda_0a$ <=> $(\lambda_0I-变换A)a=0$ <=> $a\in Ker(\lambda_0I-变换A)$

也就是 特征值 的 特征子空间 是 线性变换$\lambda_0I-A$的核, 所以 度 = n-解空间

所以 $dim(V_{\lambda_0})=n-rank(\lambda_0I-A)$

推论2, 可对角化 当且仅当 属于不同特征值 的特征子空间的维数直和等于n

推论3. 可对角化，当且仅当 V=特征子空间的直和

## 9.5 线性变换的不变子空间, Hamilton-Cayley 定理

定义1. 设V是域F上的线性空间, A是V上的一个线性变换，V的子空间W如果具有下述性质：“对于任意 $a\in W$ 都有$变换A a\in W$，那么称W是A的不变子空间, A-子空间

- 零子空间0 是 平凡的不变子空间

命题1. 变换A的核 与 象，变换A的特征子空间都是 A-子空间
- 核：因为 这个空间里所有的运算结果都是0向量，而零向量的确属于核
- 象：因为 $F^n$中任意向量 经过变换都得到象，而象是$F^n$的子空间，变换后依然是象
- 特征子空间: 对于一个给定的特征子空间，根据定义，每个向量 在这个空间中都是 $\lambda$ 倍的长度变换，

命题2. A,B都是V上的线性变换，如果A,B可交换，那么Ker B,Im B, B的特征子空间 都是A-子空间
- 这里只是 充分: 可交换 => Ker B, Im B, B特征子空间，是 A-子空间
- $a\in ker B \to Aa\in ker B$: 变换B(变换A a) = 变换A (变换B a) = 变换A 0 = 0
- $a\in Im B\to Aa\in Im B$: 存在b,使得a=Bb, Aa=ABb=BAb
- $a\in V_{\lambda}\to Aa\in V_{\lambda}$ : $Ba=\lambda a$, $BAa=ABa=A\lambda a=\lambda Aa$

推论1, $f(x) \in F[x]$ 则 $Ker f(A),Im f(A),f(A)$的特征子空间 都是 A-子空间， 因为$f(A)$和A可交换

命题3. 不变子空间的 和 与 交 仍是 A的不变子空间

命题4. 单个非零向量 的生成空间 是A-子空间，当且仅当 是A的一个特征向量
- 特征向量 => 显然能构成
- 如果能构成 => 满足特征向量定义

命题5. 由向量组 a1,a2... 生成空间W是A-子空间，当且仅当$Aa_i \in W$
- 是A-子空间 =>  定义需要属于
- 如果全部属于 => 任何一个空间中向量 可被aI线性表示，也就拆分表示再合并，可以被 Aai线性表示

---

总而言之，如果W是V上线性变换A的不变子空间
- 那么可以诱导出子空间W上的线性变换 A|W
	- 定义 $a\in W, (A|W)a=Aa$
- 又可以诱导出 商空间 V/W上的线性变换
	- 定义 $V/W\to V/W$
		- $a+W\to Aa+W$

---

二、 不变子空间 研究 线性变换的矩阵表示

A是线性变换 且 A不可对角化， 寻求A的最简形式

定理1. A是域F上n维线性空间V上的一个线性变换，A在V的一个基下的矩阵为分块对角矩阵 当且仅当V能分解成A的   非平凡  不变子空间的直和

定理2. 设V是域F上的线性空间，A是线性变换, $K[x]$中 f(x)=f1(x)f2(x),且(f1(x),f2(x))=1 则
- Ker f(A)=ker f1(A) 直和 Ker f2(A)
- 显然 带入 变换A, Ker fi(A) 是 Ker f(A)的子集，因为 f(A)a=任意 * fi(A) a=任意 * 0 = 0
- 又多项式 无公因式 u(x)f1(x)+v(x)f2(x)=1
	- u1(A)f1(A)+u2(A)f2(A)=I
	- 取 a \in ker f(A)
	- a=Ia=u1(A)f1(A)a+u2(A)f2(A)a
		- 前面 这个 左乘f2(A)有  f2(A) u1(A)f1(A)a = u1(A) f(A)a=u1(A) 0 = 0, 说明 属于ker f2(A)
		- 后面 同理 属于 ker f1(A)
	- 这里说明了kerf(A)中的任意 a 可以表示成 ker f1(A)和ker f2(A)中的两个向量之和，这里证明了 “和”
	- 那么还需要证明 唯一表示 或者 交只有0向量
	- 取 a \in ker f1(A)交 ker f2(A)
	- a=Ia=u1(A)f1(A)a+u2(A)f2(A)a=0, 说明只有0向量

定理3. 把定理2推广到更多子空间的直和，f(x)=\prod fi(x), 且 (fi(x),fj(x))=1,i \neq j两两互素
- 那么 ker f(A)= 直和 ker fi(A)
- 证明: 归纳法

---

三、线性变换和矩阵的零化多项式，Hamilton-Cayley定理

定义2, F上的一元多项式使得 f(A)=0, 那么称 f(x)是A的一个零化多项式， A是线性变换

令 n = dim V, 则$dim(Hom(V,V))=n^2$ 从而
- $I,A,A^2,\cdots,A^{n^2}$ 一定线性相关
	- 不妨令 $A^0=I$
	- 存在不全为零的$k_i$使得 $\sum_{i=0}^{n^2} {k_i} A^i=0$
	- 令 $f(x)=\sum_{i=0}^{n^2} k_ix^i$ ，则$f(A)=0$是一个 非零多项式 的 零化多项式

定义3. F[x]中的多项式使得 f(A)=0, 那么称 f(x)是A的一个零化多项式，A是矩阵
- 和定义2不同的是这里是矩阵
- 矩阵总是能找到 一个线性变换 和 线性变换选的基
	- 线性变换 表达式 <=> 矩阵表达式构成映射


伴随矩阵 $A^*A=AA^*=|A|I$

---

```
[2x^3+x^2+1,x^2-3;
x^3-1,2x+5] 按幂次拆分

= x^3[2,0;1,0]+x^2[1,1;0,0]+x[0,0;0,2]+[1,-3;-1,5]
```

---

Hamilton-Cayley定理： A是域F上的n级矩阵，A的特征多项式 是A的零化多项式
- 特征多项式 的来源是 特征值定义+行列式
- 零化多项式是 指 把A带入多项式 结果会是零矩阵

证明:
- 设$B(\lambda)$ 是 $\lambda I-A$ 的伴随矩阵
- $B(\lambda)(\lambda I -A) = |\lambda I-A|I=f(\lambda)I$
	- 因为$B(\lambda)$ 是$\lambda I-A$ 的代数余子式，所以$B(\lambda)$最高次 不超过$\lambda^{n-1}$
	- $=(\sum_{i=0}^{n-1} \lambda^i B_i)(\lambda I-A)$
	- $=\lambda^n B_{n-1}-B_0A + \sum_{i=1}^{n-1}(\lambda^i (B_{i-1}-B_iA))$
- 右侧$f(\lambda)I=(\sum_{i=0}^n a_i\lambda^i)I$
- 系数对应相等
	- 得到很多 $B_{i-1}-B_iA=a_{i-1}I$
	- 配幂次得到 $B_{i-1}A^{i-1}-B_iA^n=a_{i-1}A^{i-1}$
	- 全部相加 左侧=$0$, 右侧=$f(A)$ 也就是 把$A$带入$f(\lambda)$

所以 $f(\lambda)=\prod f_i(\lambda)^{r_i}$, 其中$f_i$是两两不等 首一 不可约多项式
- 则 $V = Ker f(A) =\oplus_i Ker(f_i(A)^{r_i})$ 所有的变换的核的直和
- 更特别的 如果$f(\lambda)=\prod (\lambda-\lambda_i)^r_i$
	- 则 $V=\oplus_i Ker((A-\lambda_i I)^{r_i})$
		-  其中每一核 称为A的根子空间

## 9.6 线性变换和矩阵的最小多项式

V是域F上的n维线性空间

A是V上的一个线性变换，找一个合适的基使得A在此基下的矩阵具有最简单的形式

第一步9.5 找A的一个非零的零化多项式
- f(\lambda) 分解成 两两不等 不可约多项式 方幂的乘积，
	- 则V能分解成A的不变子空间的直和
	- 每个不变子空间取一个基，合起来成为V的一个基
	- A在这个基下的矩阵是分块对角矩阵

第二步，每个不变子空间中取依托各合适的基，使得A在这个不变子空间上的限制在此基下的矩阵具有最简单形式

---

一、最小多项式的定义和性质

定义1. 线性变换A, A的所有非零的零化多项式中，次数最低的首相系数为1的多项式 成为A的最小多项式

命题1. 唯一的
- 证明 首先 如果两个都是最小多项式 那么如果次数不同，那么次数大的肯定不是
- 那么 如果有两个次数相同的 但是不等的最小多项式， 那么它们的差 一定是更小次数的零化多项式

命题2. 任意零化多项式 是 最小多项式的倍数
- 多项式带余除法，如果有余那么 这个余多项式 是幂次更小的零化多项式

命题3. 最小多项式 和 特征多项式 的根的集合 相同（根的重数幂次不一定相同）
- 显然 最小多项式 | 特征多项式， 所以最小多项式的根是特征多项式的根
- 反之 若存在特征值 不是最小多项式根，选一个对应特征向量a,那么有 0=(零化多项式)=m(A)a=(特征值替换)=m(lambda) a, 因此是一个根

命题4. A是域F上的n级矩阵，域E包含F,则A的最小多项式m(lambda),与A的特征多项式 f(lambda)在E中有相同的根
- 取一对特征向量a和特征值lambda: 0=m(A)a=(展开)a=m(lambda)a, 所以m(lambda)=0

命题5. 域F上最小多项式为 m(lambda), 域E包含F,那么仍然为m(lambda)
- 首先 m(lambda)一定是 E上的零化多项式，那么最小多项式只可能是它的因式，而这个因式在F上会同样为零化多项式

---

二、 几类特殊线性变换或矩阵的最小多项式

A是幂零指数为l的幂零变换 <=> $\lambda^l$是A的一个零化多项式，而当$r < l$时，$\lambda^r$不是零化多项式<=>  A的最小多项式是 $\lambda^l$

A幂等变换 <=> $\lambda^2-\lambda$ 是一个零化多项式，最小多项式为$\lambda,\lambda^2-\lambda,\lambda -1$中的一个

A是对合变换 <=> $\lambda^2-1$是一个零化多项式， 最小多项式同理

A是周期为m的周期变换, <=> $\lambda^m-1$是零化多项式，$\lambda^{<m}-1$不是零化多项式, <=> 同理是 前面的因式，不是后面的因式

定义2:
- Jordan块，对角是a,对角右移1位全是1,
- 例如 `[a,1,0;0,a,1;0,0,a]`

命题6： 主对角元为a的r级Jordan块，最小多项式等于它的特征多项式 $f(\lambda)=(\lambda-a)^r$
- $J_r(a)-aI=J_r(0)$有$J_r(0)^r=0,J_r(0)^{<r}\neq 0$

定理1. V是线性变换，如果V能分解成A的一些非平凡不变子空间直和 $V=W_1\oplus W_2\oplus \cdots\oplus W_s$
- $m(\lambda)=$ 每个子空间 最小多项式的最小公倍式
- 推论4,如果A能写成对角分块矩阵，那么每个对角的块的 最小多项式就可以作为m_i用到上面去


---

三、用最小多项式研究线性变换的矩阵表示

定理2： 线性变换可对角化 <=> 当且仅当 A的最小多项式m(lambda)在F[\lambda] 能分解成“不同”一次因式的成绩
- 9.4推论3 V能表示成不同特征子空间的直和
	- $V_{\lambda_i}=Ker(A-\lambda_i I)$
	- 因为 $V_{\lambda_i}$ 是A的不变子空间（其中任何向量 经过变换后还属于它）
	- 那么 根据上面 `(A|V)a=Aa`, 其中A|V表示 在子空间的同样/诱导出的变换A
	- 任意$a\in V_{\lambda_i}$（诱导A-$\lambda_i$ 诱导I ）a=(A-$\lambda_i$I)a=0,从而 $\lambda-\lambda_i$ 是诱导变换A的零化多项式，，所以得到m
	- 充分性，不同特征子空间的lambda不相同，所以多项式互素

推论5 n级矩阵A可对角化，当且仅当A的最小多项式，在F[lambda]中能分解成不同的一次因式的成绩

命题7
- 幂等变化A一定可对角化
	- 最小是 $\lambda^2-\lambda$  的因式，一定可以
- 幂零指数l > 1的幂零变换一定不可对角化
	- 最小是$\lambda^l$ 一定不可以
- 特征不等于2时，对合变换A一定可对角化。特征等于2时，不等于I的对合变换一定不可对角化
	- 特征：mod 3的特征是3,mod 7的特征是7
	- 对合变换: AA = I, 
	- 特征不等于2, 最小多项式是 $\lambda^2-1$ 的因式，因为这里特征不为2,所以 1 != -1
	- 特征等于2,最小多项式是$\lambda^2-1$ 的因式，这里特征是2,所以1=-1,$(\lambda+1)^2$的因式，如果$\lambda+1$是最小多项式$A=-I=I$ 这时就是I,所以不等于I的一定不能对角化
- F是复数域时，周期变换一定可对角化

命题8, r > 1的Jordan块 一定不可对角化，包含级数大于1的jordan块的jordan形矩阵一定不可对角化
- 证明 最小多项式是 $(lambda-a)^r$

推论6. A对角化，那么A的任意一个非平凡 不变子空间W, A|W都可对角化
- 证明，也就是 子空间诱导A的最小多项式 是 A的最小多项式的因式，而A的最小多项式同样特征值最高幂次为1次，所以诱导的最高幂次也不会超过1次，得证

命题9 A可对角化，A的任意不变子空间W = $\oplus (V_{\lambda_i} \cap W)$的直和
- 由上，不变子空间特征值 都是 A的特征值
	- 属于 A|W的某个特征值的 子空间 正是 对应的和W的交
	- 并且 A|W可对角化，所以可以由它们的直和

命题10. A可对角化，当且仅当，特征多项式在包含F的代数封闭域中的全部n个根都在F中，且对于A的任一不变子空间W，都存在A的不变子空间作为W在V中的补空间。

## 9.7 幂零变换的Jordan标准型

B是幂零变换，指数为l

存在向量a, $B^{< l}a\neq 0,B^la=0$

且$a,Ba,\cdots,B^{l-1}a$线性无关 （否则存在一个另一个 最小式 ）

是 子空间$<a,Ba,\cdots,B^{l-1}a>$的一个基

这个子空间是不变子空间（B(展开) = 0+表示）

在这个基下的矩阵为，$jordan(0)$ 对角右便宜1个为1

---

定义1. $a\in V$, $B^{t-1}a\neq 0,B^ta=0$, 那么$<B^{t-1}a,...Ba,a>$称作B-强循环子空间
- 是不变子空间
- 这些是它的一个基

定理1. B是r维线性空间W上的幂零变换，指数为l,则W能分解成 dim W_0个B-强循环子空间的直和
- 其中$W_0$是B的属于特征值0的特征子空间
- 幂零，特征值有0,所以$W_0 !=0$
- dim W/W_0 = dim W - dim W_0 < r
	- 商空间 $a+W_0\in W/W_0$中， 诱导线性变换$B_0$, $B_0^l(a+W_0)=B_0^la+W_0=0+W_0=W_0$
		- 所以 $B_0$ 是商空间上的幂零变换
		- 归纳法，商空间可以分解成 如上形式的直和
		- W = W_0 直和 （归纳中 上述形式的直和 个数为$s = dim (W/W_0)_0$）
		- 由表示法 $\sum_i c_iB^{t_{i}}a_i = 0$ 知道 这些$B^{t_i}a_i$ 在W_0中 且线性无关
		- 又都是$W_0$中的，所以 $B^{t_i}a_i$ 扩充成W_0的一个基，
		- W = 上述形式 每个的 幂次从$B^{t_i-1}a_i$ 多一个$B^{t_i}a_i$, 以及生于扩充所用到的基
			- 这里其实如何和 W=W_0直和 归纳 对应着看的话
			- 那么 归纳中的每一个都多一个向量，这些向量线性无关，且都属于W_0,然后W_0剩余的部分，每个向量一个 强循环子空间

定理2. B是r维线性空间W上的幂零变换，幂零指数为l,W中存在一个基，使得B在此基下的矩阵B为一个Jordan形矩阵，其中每个Jordan块的主对角元都是0,级数不超过l, Jordan块总数 = dim(Ker B)=r - rank(B),t级Jordan块的个数N(t)=rank(B^{t+1})+rank(B^{t-1})-2rank(B^t)
- 总数 = dim W_0 = dim Ker B = r - rank(B)
- rank $J_n(0)^m=max(n-m,0)$
- 在考虑 $B^{t-1}$ 会让 小于t的 jordan块都变成零矩阵
	- $rank(B^{t-1})= 1*N(t)+2*N(t+1)+\cdots +(l-(t-1)) N(l)$
	- $rank(B^{t})= 1*N(t+1)+\cdots +(l-t) N(l)$
	- $rank(B^{t-1})-rank(B^t)= N(t)+\cdots +N(l)$
	- $rank(B^{t})-rank(B^{t+1})= N(t+1)+\cdots +N(l)$
	- 得证
## 9.8 线性变换的jordan标准型

线性变换A的最小多项式m(lambda)在F[lambda]中的标准分解式为 $m(\lambda)=\prod (\lambda-\lambda_i)^{l_i}$

那么V下存在一个基，使得在此基下的矩阵A为jordan形矩阵，主对角元是全部特征值

主对角元 $\lambda_j$的Jordan块的总数$N_j=n-rank(A-\lambda_jI)$

lambda_i是所有不同特征值

$V=Ker(A-\lambda_iI)^{l_i}$的直和

令$W_i=Ker(A-\lambda_iI)^{l_i}$ ,$B_i=A|W_i-\lambda_iI$

则$B_i$是 $W_i$上的幂零变换，存在基使得B_i在W_i上是Jordan形

在这个基下 诱导A 为$A_i=\lambda_iI+B_i$
- $N_i=dim Ker B_i= dim Ker(A|W_i-\lambda_iI)=dim(Ker(A-\lambda_iI))=n-rank(A-\lambda_iI)$
- $N_i(t)=rank(A-\lambda_iI)^{t+1}+rank(A-\lambda_iI)^{t-1}-2rank(A-\lambda_iI)^{t}$

---

推论2，线性变换有jordan标准形，当且仅当A的最小多项式m(lambda) 在F[lambda] 中可分解成一次因式的乘积

推论3, 线性变换有jordan标准形，当且仅当A的特征多项式m(lambda) 在F[lambda] 中可分解成一次因式的乘积

定义1. A有Jordan标准型J,那么J中所有Jordan块的最小多项式称为A的初等因子
- 如果有jordan标准型，那么完全有初等因子决定

推论5. $A,B\in M_n(F)$如果A,B都有Jordan标准形，那么A与B相似当且仅当A与B有相同的初等因子

推论6,两个n级复矩阵相似当且仅当它们有相同的初等因子
- 在复数域上所有n级矩阵组成的集合$M_n(C)$中，初等因子是相似关系下的一组完全不变量

---

综上所述，我们对于最小多项式m(lambda)在F[lambda]中能分解成一次因式乘积的线性变换A,通过把线性空间V分解成A的根子空间的直和，在A的每个根子空间$W_i=Ker(A-\lambda_iI)^{l_i}$ 中取一个合适的基（通过 W_i上的幂零变换$B_i=A|W_i-\lambda_iI$来找合适的基）使A|W_i在此基下的矩阵A_i为一个jordan形矩阵，把W_i的基合起来成唯V的一个基，A在V的这个基下的矩阵A=diag{A1...As}就是一个jordan形矩阵。 这样求出A的最简单形式的矩阵表示的方法称为线性空间V分解成A的根子空间的直和的方法，简称为空间分解的方法。

---

> 这里要看章节7.2的 定义 定理3 /4, 章节7.3定义定理 6/7

定理2. 任意一个非零的n级$\lambda-$矩阵 一定相抵于对角 lambda矩阵
- 相抵：初等行列变换
- diag {$d_1(\lambda),d_2(\lambda),\cdots,d_n(\lambda)$}
- 其中$d_i(\lambda) | d_{i+1}(\lambda)$
- 对于非0的d_i,首项系数为1,
- 满足这些要求的矩阵 称为 一个相抵标准形，或Smith 标准型

定义2 $A(\lambda)$的相抵标准形中主对角线上的非零元 $d_i(\lambda)$ 称为$A(\lambda)$的不变因子

定义3 $s\times n$ $\lambda-$矩阵$A(\lambda)$ 的所有k阶子式的首一最大公因式称为A(lambda)的k阶行列式因子，记作$D_k(\lambda),1\le k \le min(s,n)$

定义4, 如果非零 $\lambda-$矩阵A($\lambda$) 有一个r阶子式不为0,而所有r+1阶子式都为0,那么称$A(\lambda)$的秩为r,零矩阵的秩规定为0

定理3, 相抵的$\lambda-$矩阵有相同的秩和相同的各阶行列式因子
- $D_1(\lambda)=d_1(\lambda)$
- $D_2(\lambda)=d_1(\lambda)d_2(\lambda)$
- $D_r(\lambda)=\prod d_i(\lambda)$
- $D_{r+1}(\lambda)=0$

因此有
- $d_1(\lambda)=D_1(\lambda)$
- $d_i(\lambda)=\frac{D_i(\lambda)}{D_{i-1}(\lambda)}$

定理4, 两个n级 $\lambda-$矩阵相抵，当且仅当它们有相同的不变因子，或者有相同的各阶行列式因子。
- 术语K上的n级矩阵A的特征矩阵$\lambda I-A$的n阶行列式因子$D_n(\lambda)$就是$\lambda I-A$的行列式$|\lambda I - A|$即A的多项式

定义5, $A(\lambda)$是$C[\lambda]$上n级非零矩阵，每个次数大于0的不变因子，分解成互不相同的一次因式方幂的乘积，所有这些一次因式的方幂（相同的必须按出现的次数计算）称为$A(\lambda)$的初等因子

定理5：C[lambda]上两个满秩矩阵，通过初等变换把A(lambda)化成对角行，然后，把主对角线上每个次数大于0的多项式分解成互不相同的一次因式的方幂的成绩，则所有这些一次因式的方幂就是A(lambda)的初等因子

定理7： 复数域上 两个n级矩阵的特征矩阵 相抵的充分必要条件是他们有相同的不变因子，或者它们有相同的初等因子

定理8：数域K上两个n级矩阵A与B相似的充要条件是， $\lambda I-A$与$\lambda I-B$相抵

定理9：数域K上两个n级矩阵相似的充分必要条件是 它们有相同的不变因子
- 不变因子 是 $M_n(K)$在相似关系下的一组完全不变量
- 初等因子 是$M_n(C)$在相似关系下的一组完全不变量

jordan块$J_r(a)$的 r阶行列式因子为 $D_r(\lambda)=(\lambda - a)^r$, $D_{<r}(\lambda)=1$(右上角的1)
- 有$d_r(\lambda)=(\lambda-a)^r, d_{<r}(\lambda)=1$

jordan矩阵，由它的每个jordan块的 初等因子决定（除了顺序）

定理10：n级复矩阵A都与一个jordan形矩阵相似，这个Jordan形矩阵除去其中jordan块的排列次序外被A唯一决定，称它为jordan标准型
- 证明：设一个n级复矩阵的初等因子为 $(\lambda-\lambda_i)^{r_i},\cdots$ （可能有相同的特征值）
- A所有初等因子的乘积等于 $\lambda I-A$的所有不变因子的成绩 = A的特征多项式，从而 jordan块阶数和 = n
- 每一个初等因子$(\lambda-\lambda_i)^{r_i}$决定一个Jordan块，共同组成jordan形矩阵
- 除了jordan块的次序外是相同的 唯一的
- 把 J（jordan形矩阵）中所有jordan块的最小多项式成为A的初等因子，
	- m(lambda) = 最小公倍数 ((lambda-lambda_i)^{r_i})
	- 注意到特征值可能有相同的，因此 相同时 取最大的幂次

推论7： n级复矩阵   A的最小多项式 m(lambda) 扥远古A的最后一个不变因子 d_n(lambda)

推论8：数域K上n级矩阵   A的最小多项式m(lambda)等于A的最后一个不变因子d_n(lambda)

推论9: 数域K上n级 矩阵A 和 矩阵B 相似，当且仅当把它们堪称复矩阵后相似
- 也就是 不变因子，在看成复矩阵后，还是同样的不变因子
- <=> A与B有相同的不变因子
- <=> A与B堪称复矩阵后相似

定义6 设A是域F上n维 线性空间V上的线性变换，如果A在V的一个基下的矩阵是Jordan形矩阵，那么称这个基成为A的一个Jordan基
- 如何求jordan基
- A和B相似: $A=P^{-1}BP$, 有$\lambda I-A=P^{-1}(\lambda I - B)P$ 这两个相抵
	- 存在可逆 $\lambda-$矩阵$P(\lambda),Q(\lambda)$
	- $\lambda I - A= P(\lambda)(\lambda I - B)Q(\lambda)$
		- $P^{-1}(\lambda)(\lambda I - A)=(\lambda I - B)Q(\lambda)$

引理1 设A是域F上的任一非零矩阵，G(\lambda)是任意一个n级lambda-矩阵， 则存在n级\lambda-矩阵$H_1(\lambda),H_2(\lambda)$ 和域F上n级矩阵$T_1,T_2$使得
- $G(\lambda)=H_1(\lambda)(\lambda I - A) + T_1$
- $G(\lambda)=(\lambda I - A)H_2(\lambda) + T_2$
	- 证明 按照$\lambda$的幂次，把G(\lambda)拆开成和$G(\lambda)=\sum_{i=0}^m \lambda^i G_i(\lambda)$, 最高次$G_m(\lambda)$ 不是零矩阵
	- 上面的  $H_1$ 最高次就是$m-1$,可以$H_1$同样的方式 按照幂次展开，$H_1(\lambda)=\sum_{i=0}^{m-1} \lambda^i B_i(\lambda)$
		- 幂次对应相等有 $B_{m-1}=G_m$, $B_{i\le m-2}=G_{i+1}+B_{i+1}A$, $T_1=G_0+B_0A$ 所以有方法表示
		- 同理 可以正民有 $H_2,T_2$

定理11. 域F上两个n级矩阵A与B相似当且仅当$\lambda I - A$与$\lambda I -B$相抵
- 若相抵，则 存在$P,Q$ 使得$\lambda I -A=P(\lambda I -B)Q$
	- 根据引理
	- $Q=H_1(\lambda I -A)+T_1$
	- $P=(\lambda I -A)H_2+T_2$
		- $P^{-1}(\lambda I-A)=(\lambda I - B)(H_1(\lambda I - A) +T_1)$ 带入得
		- $(P^{-1}-(\lambda I -B)H_1)(\lambda I -A)=(\lambda I -B)T_1$,  右侧幂次为1或0,左右 左侧的左边因子 lambda幂次为0
			- $S= P^{-1}-(\lambda I -B)H_1$
			- $I=PP^{-1}=P(S+(\lambda I-B)H_1)$
			- $=((\lambda I - A)H_2+T_2)S+(\lambda I-A)Q^{-1}H_1$
			- $=T_2S+(\lambda I -A)(H_2S+Q^{-1}H_1)$ // 这里注意到lambda的幂次，所以$H_2S+Q^{-1}H_1=0$
			- 所以 $I=T_2S$, 从而S是可逆矩阵
			- $\lambda I - B=S^{-1}(\lambda I - A)T_1=\lambda S^{-1}T_1-S^{-1}AT_1$ 同样 lambda的幂次对应相等
			- 有 $I=S^{-1}T_1,B=S^{-1}AT_1$
				- 即$B=S^{-1}AS$
		
---

例子 ： `A=[-1,1,0;-4,3,0;1,0,2]`

行列式因子

- $D_3(\lambda) = |\lambda I - A|=(\lambda-2)(\lambda-1)^2$
- $D_2(\lambda)=1$ 这种 随便取几个很快得到1
- $D_1(\lambda)=1$ 这种 随便取几个很快得到1

不变因子
- $d_1(\lambda)=D_1(\lambda)=1$
- $d_2(\lambda)=D_2(\lambda)/D_1(\lambda)=1$
- $d_3(\lambda)=D_3(\lambda)/D_2(\lambda)=(\lambda-2)(\lambda-1)^2$

初等因子
- $(\lambda -2)$
- $(\lambda -1)^2$

Jordan标准型

```
= diag(J_2(1),J_1(2))
1 1
  1
    2
```

## 9.9 线性变换的有理标准型

最小多项式，在F[lambda]中不能分解成一次因式的乘积，那么A的最简单形式的矩阵表示是什么样呢？

## 9.10 线性函数与对偶空间

V是域F上的线性空间，由于域F可以看成自身上的线性空间，因此自然可以考虑线性空间V到F的线性映射，我们把这种线性映射称为V上的线性函数

定义1. V是域上线性空间，V到F的一个映射f如果满足
- f(a+b)=f(a)+f(b),$a,b\in V$
- f(ka)=kf(a), $a\in V, k \in F$
- 那么称f是V的一个线性函数

例如 trace函数 ，有线性加和数量乘

线性函数空间

`dim Hom(V,F)=(dim V)(dim F)=n * 1 = n`

设V的一个基是 $a_1,\cdots,a_n$
- $\sigma: Hom(V,F)\to F^n, f\to (f(a_1),\cdots,f(a_n))$
- $\sigma^{-1}$也是一个同构映射
	- $F^n$中取标准基$\epsilon_1,\cdots,\epsilon_n$
		- $\sigma^{-1}(\epsilon_1),\cdots,\sigma^{-1}(\epsilon_n)$ 是Hom中的一个基，称作对偶基， Hom(V,F)称为V的对偶空间 记作$V^*$

定理1 V是域F上的n维线性空间
- 取两组基a_i,b_i,那么$V^*$中相应的对偶基有f_i,g_i
- a1->b1的过度矩阵为A,那么f_i->g_i的过度矩阵$B=(A^{-1})^T$
	- 证明
	- (b_i)=(a_i)A
	- $(a_i)=(b_i)A^{-1}$
	- $(g_i)=(f_i)B$
	- 注意到  Y = base x 的意义可以看成Y的j列的第i个分量，在 base基下的 坐标是 x[i,j]
	- $A^{-1}[i,j]=g_i(a_j)=B[j;i]=B^T[i;j]$

## 总结


- 9.1 幂等，投影，与 线性映射 本身也是一种线性空间
- 9.2 线性映射过程中：投影的结果是 0 的源叫做核Ker A，dim V/(Ker A) = dim (Im A), 其子空间关系
- 9.3 用矩阵来表示，建立 变换 <=> 矩阵 的关系， 所有变换构成的线性空间 和 矩阵构成的线性空间的 同构
	- 一个具体变换，在不同基选择下，对应的矩阵 是相似的！！！
	- 这是一个找相似矩阵的最简单形式的好理由
- 9.4 从这个引入 特征向量 和 特征值
- 9.5 不变子空间（任意 子空间内向量 经过 线性变换A后 依然属于子空间）
	- 对于可对角化的 表示成 特征子空间直和，注意到这些特征子空间中 的 向量经过变化后 还是在特征子空间中，考虑引出不变子空间
		- 0,V 这两个都是平凡不变子空间（显然的）
		- Ker 和 Im 也是不变子空间
		- 特征子空间 也是 不变子空间
	- 关系的研究 主要通过向量通过基的表示法
	- 多项式 可以拆分成互素子多项式的乘积，那么多项式的Ker也可以拆成对应 子多项式Ker 的直和
	- 零化多项式 f(A)=0
	- Hamiton-Cayley 特征多项式 是 A的一个零化多项式
- 9.6 最小多项式
	- 零化多项式，最小，
	- 是 特征多项式的因式，唯一
	- 特殊的零化多项式  和 jordan块 
- 9.7 幂零变换的jordan标准型
	- 结构是 强循环子空间: 取这样的基 可以产生 jordan块，
		- 可以分解成 dim W_0(特征值0的子空间)各 强循环子空间的直和
	- 一般的是由jordan块拼成的对角
- 9.8 线性变换的jordan标准形
	- $\lambda I - A$, 最小多项式 与 幂零建立联系，从而建立 线性变换和jordan块的联系
	- 初等因子
	- 不变因子（相抵标准型 主对角线） d_i
	- k阶行列式因子, D_i

脉络
- 这里其实就是，对角化（并不通用）
- 观察对角化 表示成 特征子空间的直和
	- 对角化是 n个线性无关的向量
- 也就是希望有一个基，在这个基下的 变换矩阵比较简单
- 如果能变成 这在矩阵书写形状上是对角分块，那么可以变成块之间的 直和
- 而 分块 的意义 就是“不变子空间”
	- 那么去哪里找这些不变子空间
	- 另一个启发是， AB=BA (如果可交换，那么ker B是A的不变子空间)
		- 那么可以考虑 A的幂次, => A的多项式， F[A]={A的多项式} \in Hom(V,V)， 是交换环
		- 所以 任何一个多项式 F[A]的 Ker 是A的不变子空间
	- 互素 f1,f2 以及f=f1f2 => 从而 uf1+vf2=I => 从而 可以去想 ker f = ker f1 + ker f2 通过表示法，和直和定义（交空，和能表示所有）
		- 再归纳法，拓展到f=多个 互素多项式的乘积，这样 ker f = ker fi 的直和
		- 我们希望整个V 分解成成A的不变子空间的直和
		- V = ker ? => 直和拆解
			- 而 ker 0 = V 引出 零变换 （V的每个向量 的 映射到 0），和零化多项式
	- f(A)=0 零化多项式 f[x]带入A
		- 矩阵 和 线性变换 同构，可以研究矩阵，线性变换零化多项式<=> 矩阵零化多项式
		- 一定存在： 抽屉原理 A^{n^2} 可得总能线性相关
		- gcd辗转相除 得到有最小，和都是倍数的性质 
		- Hamiton-Cayley 特征多项式 是 A的一个零化多项式
			- 书上是一个 伴随矩阵强行代数，然后的对应位置相等来完成证明了，视频是105，没有什么感受
			- 搜了下知乎和google, 一个观点是，可对角化=>n个不同向量 f(A)ai=f(lambda i)ai=0 所以是零化多项式, 然后可对角化稠密+连续性 => 不可对角化可以趋近，所以不可对角化也是零化多项式
			- V = ker f(A) = ker $A-\lambda_i I$ 们的直和，而特征多项式 可以分解成 方幂的乘积
	- 希望有各更“临界的状态”，希望有个临界的 零化多项式，而不只是特征多项式，同时和特征多项式建立联系
	- 引出 最小零化多项式m(\lambda)，（为了唯一 让最高次系数为1）
		- 又是 带余除法那一套，证明唯一性，倍数性
		- 和特征多项式关系，倍数性质，根显然也是特征多项式根，而特征多项式根对应特征向量有 m(lambda_i)a_i=(展开)a_i=替换成A=m(A)a_i=0a_i=0, 说明了 两边根相同（重数不保证）
	- 根据之前的 两个矩阵相似，可以看成同一个线性变换，在不同基下的 变换矩阵
		- 矩阵A 和 变换A 的 最小多项式 相同
		- 矩阵B 和 变换A 的 最小多项式 相同
			- 所以 相似矩阵 最小多项式相同
	- V=Wi们的直和
		- 每个W_i的最小多项式是m_i(lambda)
		- 可以证明 V的最小多项式 是 m_i(lambda)的倍数（通过零化关系证明）
			- 所以V的最小多项式是 所有m_i的最小公倍数 的倍数
			- 这边用 两边集合互相包含来证明相等 得到是最小公倍数。 {零化多项式} 互相包含 {m_i公倍数}
			- 感觉似乎可以直接推至少的幂次吗？吧？
		- 结论就是 V=W_i们的直和，那么m()=lcm(m_i)
			- 从书写上，就是对角分块，的每个分块的 最小多项式 的 lcm
	- 那么接下来就是研究 具体的小块的 最小多项式了
		- 复杂的难观察，先观察幂零变换，有特点是 幂次l时=0, 小于l时非0
		- $f(\lambda)=\lambda^l$
		- 可对角化 <=> 可分解成不同特征值的子空间的直和
			- 因为 向量属于 特征值$\lambda_i$的特征子空间中， 当且仅当 它  属于 ker $A-\lambda_i I$， 所以有 $V_{\lambda_i}=Ker (A-\lambda_i I)$
				- $\lambda-\lambda_i$是$A|V_{\lambda_i}$的一个零化多项式
				- 即 特征子空间的零化多项式lambda最高幂次为1
			- 所以 V = Ker(A-\lambda_i I) 们的直和
			- 可对角化 <=> 最小多项式每个特征值对应$\lambda-\lambda_i$最高幂次为1 , <- 一个有用的结论
				- 推论 如果有幂次 > 1则一定不可以对角化
				- 例子 幂等可对角化 ，最小多项式 lambda(lambda-1) 的因式
		- $m(\lambda)=\prod_i (\lambda-\lambda_i)^{l_i}$, 其中特征值两两不同，这里$l_i$ 表示原始矩阵的最小多项式的对应特征值的幂次
			- V= Ker $((A-\lambda_i I)^{l_i})$ 们的直和 （分块对角矩阵）
			- 下个目标就是
				- 希望 对于 $(A-\lambda_i I)^{l_i}$中找到一个基，使得在这个基下的坐标尽量简单
				- 如何 求 m_i(lambda)：
					- 找一个零化多项式，然后让它尽量小
				- $\forall a_j\in W_i=Ker((A-\lambda_i I)^{l_i})$ 有$(A|W_i-\lambda_i I)^{l_i}a_j=(A-\lambda_i I)^{l_i}a_j=0$
					- 所以 $(\lambda-\lambda_i)^{l_i}$ 是零化多项式，因为（上面把$A|W_i$带进入是零多项式）
					- 证明最小：和m()中分解出的m_i中的幂次一致
					- $B_i=A|W_i-\lambda_i I$, 是$W_i$上的幂零变换，幂次为$l_i$
		- 引出问题：幂零变换在什么样的基最简形式， 如果找到的话，$A|W_i=B_i+\lambda_i I$, 也就是最简单形式 + 对角线的lambda
			- 注意到$B^{l_i}=0,B^{<l_i}\neq 0$,所以存在 $a\in W_i$, $a,Ba,\cdots,B^{l_i-1}a$线性无关
				- 因为 $\sum k_jB^ja=0$ 只有$k_j=0$零解 （证明, 左边同时乘以$B^{l_i-1}$ 可以得到 $k_j=0$, 反复 降低乘的幂次可得所有k是0
				- 所以可以选作一组基
				- 同时也是不变子空间 
				- B 在基 {$B^{l-1}a,\cdots,Ba,a$ } 下的矩阵为 对角线右移一位全1,其它地方全1的矩阵 = Jordan_{l}(0)
					- 也就是前面学的  变换B (基)=基 * 矩阵B
					- 定义 a,Aa,...A^{t-1}a 线性无关, $A^t$ 属于它们的生成空间
						- 那么称作 循环子空间
						- 如果$A^t=0$ 称作 强循环子空间
			- 希望把 对于是r维线性空间V的幂零变换B,希望把W分解成 与 B-强循环子空间 有关 的直和
				- 对于空间的维数大小，用数学归纳法
					- 1维 <基>
					- n维 （这个构造的思路怎么冒出来的），小于n维可分解，对于幂零变换B，幂零指数为l
						- l=1, 那么W分解成 每个基向量子空间的直和
							- 也就是B=0, $B^1a=0^1a=0$ 所以每个基向量的子空间 是 0-强循环子空间
						- l > 1, $B\neq 0$, 有特征值, B的基于特征值0的特征子空间，$W_0\neq 0$
							- $1\le dim W/W_0 =dim W - dim W_0 < dim W = r$
							-  dim W/W_0 可以拆成
								- 每个拆的多一个 $B^{幂次_i+1}a_i$
								- 一方面 在W中 它们线性无关，一方面这些都是W_0中的，什么感觉呢 W=W_0直和 V, 然后V是 可以拆分成 强循环 的直和的，很巧V中每个强循环的 增加一个幂次，都在W_0中，又线性无关，那么W_0就可以拆分成它们 以及 扩充的基，这样 总个数 就是W_0各强循环，这里的“强”（也就是幂次增1会让结果是0)保证了 每个多一个幂次都在$W_0$中，
								- 个数是 dim W_0个
			- 所以 有 空间V和幂零变换B（上面选择的是Ker) 然后就可以拆直和，（既然是直和，那么完成了拆分+填满）
				- 幂零矩阵 相似于 jordan形矩阵
				- $B_i=A|W_i-\lambda_i I$ 是一个$W_i$上的幂零变换, 然后V取所有$W_i$对应基组成的，为jordan形矩阵
			- 如果 最小多项式，变换某个乘项幂次更大，根据拆分还是同样的基
				- 那么 我们就不一定要找最小多项式了，而是找特征多项式
				- $N_i=dim Ker(A|W_i-\lambda I ) = n-rank(A-\lambda_i I)$ 
				
		
- 最终证明是jordan型，表示成 特征子空间直和（可能有重复的特征值）
	- 而jordan型是所有都可以，那么对角化只是jordan型的一种特例


## 相关阅读

Hamiton-Cayley
- [哈密顿-凯莱定理为什么不用矩阵或线性变换直接代入？](https://www.zhihu.com/question/392031909)
- [哈密尔顿-凯莱定理的本质是什么？](https://www.zhihu.com/question/31557902)
- [聊聊凯莱-哈密顿(Cayley-Hamilton)定理](https://zhuanlan.zhihu.com/p/499834277)
- [Hamilton-Cayley定理的另证](https://zhuanlan.zhihu.com/p/265392174) 哎 内容还在 账号已注销
- [凯莱哈密顿Cayley-Hamilton定理的4个证明](https://zhuanlan.zhihu.com/p/7745376929)
- [Which proof of the Cayley-Hamilton theorem in linear algebra is the easiest and shortest to understand? And which proof is the most elegant?](https://www.quora.com/Which-proof-of-the-Cayley-Hamilton-theorem-in-linear-algebra-is-the-easiest-and-shortest-to-understand-And-which-proof-is-the-most-elegant)


Jordan 标准型
- [szmike - Jordan(若尔当)标准型知识梳理](https://zhuanlan.zhihu.com/p/470026382)
- [Lewis - Jordan标准形的推导，“空间分解”是关键](https://zhuanlan.zhihu.com/p/375021829)
- [名前 - 最凶最恶の矩阵相似——Jordan标准型](https://zhuanlan.zhihu.com/p/666594267)
- [霜夏 - 【抄书笔记】如何作 Jordan 分解](https://zhuanlan.zhihu.com/p/855821521)
- [圆规 - Jordan标准型的计算（北大数学系代数小组教材）](https://zhuanlan.zhihu.com/p/646886010)
- [仓鼠磨光 - Jordan标准形的本质是什么？](https://www.zhihu.com/question/37226720/answer/644040310)





吐槽：书上变换是粗体的A,矩阵是正常字体的A, 要是用笔写真的吐血
- 是不是这里完全可以先把这两个同构掉，然后就只用讨论一个了啊