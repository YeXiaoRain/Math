---
title: Walter Rudin 数学分析原理 1-4章
date: 2025-01-30
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

## 前言

受众：数学专业高年级，或一年级研究生

## 实数系与复数系

### 导引

有理数=m/n
- 不存在有理数 $p^2=2$ 这里普林斯顿那本应该也是抄这个例子的
	- 一方面不存在（ 偶数证明
	- 一方面没有 最近, p =(2p+2)/(p+2)

1.3 快速过了一下集合的概念

### 有序集 Ordered sets

1.5 集合中的 序order, is a relation
- 任何两个可按照 给定序比较 或相等
- 传递性, if x,y,z in S, if x < y and y < z then x < z

1.6 集合set+序(order is defined) => 有序集 ordered set

1.7 子集的上界定义, bounded above 上方有界, (中文书上翻译的 上有界)
- 有序集S的子集E, 任意E中元素，<= b \in S,那么b是上界upper bound of E
- 类似 Lower bound
	- 从翻译上 看起来英文的 bounded above是形容集合，而 upper bound of 是一个值的与集合的关系属性

1.8 上确界 least-upper-bound of
- a 是 上界 upper bound of
- 更小不是上界,b < a, b is not upper bound of
- 类似下确界 greatest-lower-bound property

1.10 最小上界性 least-upper-bound property
- $E\subset S$,E有上界时, $\text{sup} E \in S$ 
	- 有理数中 $A=\lbrace q| q^2<2\rbrace, B=\lbrace q | q^2 > 2\rbrace$, A的上界全在B中，但是B没有最小值 从而 $\mathbb{Q}$没有最小上界性
- 1.11 最小上界性 <=> 最小下界性
	- 这个的证明核心 就是 证明上面的定义的要素：是+更（小/大）不是

### 域 Fields

1.12 Deinition A field is a set F with two operations, called addition and multiplication, 满足两个所谓的 "field axioms"(域的公理)
- Axioms for addition
	- A1 x in F + y in F => x+y in F 封闭
	- A2 commutative x+y=y+x for all x,y in F 交换
	- A3 associative (x+y)+z=x+(y+z) for all x,y,z in F 结合
	- A4 F contains an elment 0 such that 0+x=x for every x in F, 在addition运算下的零元
	- A5 x in F, exist y in F, x+y=0, y 记作 -x, 逆元存在
- Axioms for mutiplication
	- M1 封闭
	- M2 交换
	- M3 结合
	- M4 乘法零元，且不等于加法零元，记作1, 1x=x for every x in F
	- M5 乘法逆元
- the Distribution law 分配
	- x(y+z)=xy+xz for x,y,z in F
- 注意一些地方的一些写法是简记
	- 例如 减法 是 加逆元，分数符号或除法是乘上逆元
	- 同等级 连加，连乘，是省去了运算括号，实际是从左到右侧
	- 整数次幂次 是 同个数连乘缩写
	- 这些“简记”并没有 额外定义性质

1.14 命题proposition 
- if x+y=y+z then y=z
- if x+y=y then y = 0
- if x+y=0 then y = -x
- -(-x)=x 逆元的逆元得到本身

1.15 命题 关于乘法
- x \neq 0 and xy=xz then y=z
- x \neq 0 and xy=x then y=1
- x \neq 0 and xy=1 then y=1/x
- x \neq 0 , 1(1/x)=x

1.16 命题 x,y,z in F
- 0x=0
- x\neq 0 and y \neq0 then xy\neq 0
- (-x)y=-(xy)=x(-y)
- (-x)(-y)=xy

1.17 定义 ordered field 有序域
- field F + ordered set
- x + y < x+z if x,y,z in F and y < z
- xy > 0 if x in F, y in F, x > 0 and y >0
- 这里 定义 positive ,negative

1.18 命题，因为我们对于实数域很熟，有一些实数域中的结论在 有序域中同样成立，例如
- if x > 0 then -x < 0,对称也成立
- if x > 0 and y < z then xy < xz
- if x < 0 and y < z then xy > xz
- if x \neq 0 then xx >0,特别的 1(乘法零元) > 0（加法零元）
- if 0 < x < y then 0 < 1/y < 1/x
### 实数域 the reald field

本章核心 存在定理: existence theorem

1.19 存在一个 有序域R,有 最小上界性
- 同时包含实数域Q 作为子域。
	- 这里没有直接说R是啥
	- 子域 是保持两者之间的运算映射一致
	- R的元叫做 实数, the members of R are called real numbers
	- 具体的R构造见1章附录

1.20 
- archimedean property of R 欧几里德性 x,y in R, x > 0 , then there is a positive integer n such that nx > y
	- 不成立y是上界，有界，最小上界性 a=sup nx, a-x不是最小上界, 存在m使得a-x < mx, a < (m+1)x ,a不是上界，不是最小上界
- Q is dense(稠密) in R.  x,y, in R x < y ,exists p in Q such that x < p < y, 任意两个实数之间有有理数
	- 利用1, n(y-x)>1 划缝，让x,y必然落在 1/m切割的不同区间中

1.21 $x^n=a$ 存在1个正实数解
- y = sup x | x^n < a。 因为上确界性
- 那么 y^n = a, 即是 y^n < a或者 y^n > a都会矛盾（注意不要弄错成 ~~y的n次方都比a小，大于y的n次方都比a大~~
- 这里的想法和开篇的 y^2=2 的想法类似，插入一个 y^n ~ a 之间的数，而且它的n次方是直接可以y表示的
	- (y+h)^n-y^n < a-y^n, 0 < h < 1
	- h(\sum (y+h)^? y^?) < a-y^n
	- h(\sum (y+1)^{n-1}) < a-y^n
	- h(n(y+1)^{n-1}) < a-y^n
	- 我们能得到h 关于 a,y,n的 只有乘除加减没有开根的表达式，从而能凑，就能有之间的数，从而就能有矛盾
-  推论 (ab)^{1/n}=(a^{1/n})(b^{1/n})

1.22 小数 => 实数
- 无穷小数，看成 逐渐截断的 10的幂次 系数的和 的集合的 sup E
- since we shall never use decimals ,we do not enter into a detailed discussion

### 广义实数系 the extended real number system

这里英文是 extended, 多了 正无穷和负无穷两个 符号
- 在 extended 里， 正无穷是 所有的上界，每个非空集合至少一个上界
- 一些还能用的四则运算

### 复数域 complex field

有序对(a,b)
- 相等 对位相等
- 复数运算的 新加法，和新乘法
- (a,b)+(c,d)=(a+c,b+d)
- (a,b) * (c,d)=(ac-bd,ad+bc)
- 在新加法乘法的定义下满足 加法5条，乘法5条，交换1条，所以是个 域 field
- 实数 对应的是第二维为零，实数和复数有相同的运算性质，因此可以看作子域 the real field as a  subfield of the complex field

其它记法 a+bi
- 新记法下的运算，实部Re(z) real part，虚部Im(z) imaginary
- 共轭相关运算 (在普林斯顿那书笔记中有)
- $z\bar{z}$ 是实+正，只有=0时=0
- absolute value $|z|=\sqrt{z\bar{z}}$

Schwarz inequality
- $|\sum a_i\bar{b_i}|^2 \le (\sum |a_i|^2)(\sum |b_i|^2)$
- 书上这个神奇的起手怎么想到的真不知道，drop from sky
- 一个办法 $f(t)=\sum |a_i+tb_i|^2$ 这个思路是去找判别式靠，在 高代第10章 就是类似这个思路

### 欧氏空间 Euclidean spaces

n维坐标, 坐标值都是实数
- 线性
	- 加法 addition of vectors
	- 数乘 , multiplication of a vector by a real number (a scalar)
- 内积 inner product
	- x y = sum x_i y_i
	- 范数 norm of x, |x|=(x x)^{1/2}
- 性质1.37
	- |x|>=0
	- |x| =0 if and only if x =0
	- |ax|=|a||x|
	- |x y | <= |x| |y| 是 Schwarz inequaliy的结果
	- |x+y| <= |x|+|y| 三角不等式
		- |x-z| <= |x-y|+|y-z|

### 附录，从有理数域 为了最小上界性 构造出实数域

对于1.19，要从Q构造出R

Step 1. The members of R will be certain subsets of Q, called cuts. A cut is, by definition, any set S \subset Q with following three properties
- S is not empty and S \neq Q, 非空 非全，真子集
- if p in S, q in Q, and q < p, then q in S, Q中某个元素比S中某个元素小，那么同时在S中
	- 含有：不在S中的 都比S中的大，否则会在S中
	- 比 不在S中的大的，同样不在S中
- if p in S,then p < r for some r in S,每个S中元素能找到更大的, 没有最大化

p,q,r表示有理数，S,T,U表示分化 cuts

Step 2. S < T 表示S是T的真子集
- 这里主要是要表达，集合之间，在上述的cuts, 真子集 是一种有序关系
	- （注意普通的集合之间的不是“任意两个都有序的”
	- 这里至多 一个>=< 成立显然
	- 证明一下至少一个成立，这里用元素属于分类讨论去证明
- 传递性容易证
- 因此 所有cuts 集合 构成的集合 是有序集

step3 有序集R有最小上界性
- R={cuts的集合}
	- 每个cut是 有理数集合 满足step1的性质
- 那么取任意R非空子集 A
- 假定B in R是它的上界
- 令$A_1=$ 所有 S in A的并 （cut的并）
	- 那么要证明 $A_1$ 属于R
		- 且$A_1=\sup A$, 也就是 最小上界性（能在R中找到最小上界
	- 证明 属于R: 也就是证明A_1 满足step1的3条性质,
		- 元素关系证明非空，$S \subset A \subset B \neq R$ 证明不等
		- 后两条，对于元素p,能找具体的集合S,再在S中找元素q,
	- 证明 是 上确界：
		- 上界显然
		- 证明 比他小的不是上界，靠元素属于关系 拉扯

step4 如果 $S,T \in R$, 定义S+T=所有 a+b,a in S,b in T 的元素组成
- 定义 集合的 `加` 运算
- 那么证明 加法5条，封闭（证明 step1 cut三条），交换，结合，
	- 零元($0^*$定义为 所有负有理数组成的集合, 证明相对用互相包含证明)，
	- 逆元 $A\in R,B=\lbrace p | \exists r > 0, -p-r\not \in A \rbrace$ 比-p小一点的有理数不在A内，这样的B就是A的逆元
- 这里核心证明思路都是通过元素属于关系证明的
- 至此 这样定义下 有了 加法 运算性质
- step 5
	- 基于 加法 和 序 定义的一些性质
	- 如消去律 1.14, a+b=a+c 则b=c

step 6 处理乘法
- $R^+ =${a|$a\in R, a > 0^*$}
- 先类似加法的方式 通过元素构成定义乘法
- 从而类似的有了乘法零元: $1^*$

step 7 利用 逆元 零元 和 （正数乘法）的定义把乘法的定义扩展到全体R上
- $A0^*=0^*$
- 至此新的加法和新的乘法都有了

step 8 用类似的形式，给现有有理数对应的 “分化”
- 注意现在还是只有有理数，和上面的集合R，（而不是实数）
- 对于任意$r\in \mathbb{Q}$
- $r^*=\lbrace p| p<r ,p\in\mathbb{Q}\rbrace$
	- 验证step1的3条性质,它是一个分化
	- 然后我们需要证明的是 有理数加法$(r_1+r_2)^*$，和上面集合的 新加法$r_1^*+r_2^*$ 同构（=） ,乘法也是

step 9
- 根据上面 同构
- 我们把 构造出的R看作实数

回顾
- 第1步 完成构造
- 第2步 证明构造东西的有序性
- 第3步 证明最小上界性
- 第4~7步 新的构造中 定义新的加法和乘法
- 第8~9步 证明现有有理数以及加法乘法运算，与新定义的同构，从而证明了“实数”的构造


---

戴德金分割，感觉像在所有有理数中间切分，而其“文字描述下”，和可数性又不冲突，
- 例如 每个有理数按照有理数的可数排列 同样可以贴着“每个有理数”完成切割，但这种情况，你会发现  A={x^2 < 2}, B={x^2>=2} 这种“切割”，又不在按可数排列的切割里
- 在 可数 稠密 下 的 切割，和有限比很怪
- 而且另一方面，的问题是，和中小学学的：有理数（可以表示成 m/n 或者 有限，循环小数），无理数（无限不循环），或者连分数，有理数：有限，无理数：无限。 那这样 A的上确界不在A中，如何能保证取完所有 无理数

## 基础拓扑 Basic topology

### 有限集、可数集和不可数集

2.1 A,B 都是 sets, A中x和B中一个元素关联associated, f(x)表示，f is said to be a function from A to B(or mapping of A into B).
- the set A is called the `domain` of f(we also say f is defined on A)
- and the elements f(x) are called the values of f. the set of all values of f is called the `range` of f

2.2 $E\subset A$, f(E) is defined to be the set of all elements f(x),for x in E. we call f(E) the `image` of E under f.
- f(A) is the `range` of f
- $f(A) \subset B$, if f(A)=B ,we say that f maps A `onto` B
	- onto is more specific than into
- `inverse image` of E under f: $F\subset B,f^{-1}(F)=\lbrace x| x\in A,f(x)\in F \rbrace$
- for each y in B, if $f^{-1}(y)$ 至多一个, then f is said to be `1-1(one-to-one)` mapping of A `into` B
	- f is a 1-1 mapping of A into B provided that f(x1) neq f(x2) whenever x1 neq x2

2.3 if `1-1 mapping` A `onto` B, we say that A and B can be put in 1-1 correspondence
- or that A and B have the same `cardinal number` 基数
- or, briefly, that A and B are `equivalent`  等价
- 写作 A~B
	- reflexive 自反性 A~A
	- symmetric 对称性 A~B then B~A
	- transitive 传递性 A~B,B~C then A~C
	- 同时满足这三个，称作 equivalence relation 等价关系

2.4 正整数n, 令$J_n=${1,...,n},令$J$表示全体正整数
- finite有限, A~$J_n$ 对于某个n ，空集合也是有限集合
	- infinite 无限： 不是有限
- countable 可数, if A ~ J
- uncountable 不可数, neither finite nor countable
- at most countable if A is finite or countable

2.6 有限集无法和它真子集(proper subsets)等价
- 如果一个集合和自己的真子集等价，那么它是无限的

2.7 序列 sequence, $f(n)=x_n$, 定义在J上的，有时会用下标从0开始

2.8 定理 可数集A的每个无限子集也是可数集

2.9 定义 A, B 是集合, A中任意元素a is associated a subset of B which we denote by $E_a$
- 记作 {E_a}
- instead of speaking of sets of sets, we shall sometimes speak of a collection of sets, or a family of sets
- union of E_a: $S=\cup_{a\in A}E_a$
- intersection of E_a: $S=\cap_{a\in A}E_a$
- 注意的是 如果A可数/可列，那么可以写成 下标的形式，例如$\cup_{i=1}^n$
- intersect: $A\cap B$ is not empty
	- otherwise they are `disjoint`

2.11 一些 交并运算

2.12 可数集的可数并是可数集：斜对角法+定理2.8
	- 2.13 {a_i}可数,  由其元素构成的n元组可数
		- 有理数可数

2.14 Let A be the set of all sequences whose elements are the digits 0 and 1 then set A is uncountable
- Cantor 对角矛盾反证法（这在证明无理数不可数时也出现过，
- 二进制表示法的一个理解

### 度量空间 Metric space

2.15 距离distance: d(p,q)
- 同点0,非同点正
- 对称性
- 最近性: d(p,q)<=d(p,r)+d(r,q)
- distance function 满足上述三个条件，或者称作metric(度量)

2.17 segment(a,b) we mean the set of all real numbers x such that a < x < b
- 其它 中括号小括号记法
- convex凸: x,y in E,0 < lambda < 1 则 lambda x + (1-lambda) y \in E

2.18 度量空间中
- neighborhood 邻域, 通过 点 半径 距离函数来定义
	- 例如$R^1$中开区间
	- $R^2$中圆内部
- limit point 极限点, E的极限点p：p的任意邻域有E中非p的点q
	- 记作 E'
	- 非 limit point, 称作isolated point of E孤立点
	- closed闭集 every limit point of E in E
- interior point内点, 存在r,使得邻域全属于E
	- open: 所有点都是内点
- complement of E($E^c$) 补集, 通过点的属于来定义
- perfect 完全的（完备集？） closed and 所有点都是极限点
- bounded, 某点+某半径覆盖所有点
- dense 稠密: E在X中稠密，X的每个点都是 E的极限点或E的点

2.19 邻域是开集

2.20 极限点任意邻域有无穷多点
- 定义是任意邻域有非自身的点，而有限能取min, 
- corollay. 有限集没有极限点

2.22 并的补 = 补的交

2.23 开的补是闭，闭的补是开

2.24 
- 开的任意并是开
- 闭的任意交是闭
- 开的有限交是开
- 闭的有限并是闭
	- 见普林斯顿那本书的笔记，核心还是有限时有min可取，无限会破坏这个min，从而破坏 “一致性”
	- $[0,1/n)$

2.26 closure(E), 闭包
- $\bar{E}=E\cup E'$ ，E和E的极限点集的并
	- 可以看成对E进行一个运算后的结果
- 性质
	- 闭包 是 闭集
	- $E=\bar{E}$当且仅当E是闭集
	- F是闭集, $E \in F$则 $\bar{E}\subset F$ ，也就是 闭集的子集的极限点不会超出原来的闭集

2.28 非空 实数集E 且 bounded above , y = sup E , then $y \in \bar{E}$, 也就是从有序集合角度看上去的上确界，是在拓扑角度看上去的闭包中

2.29 开区间在R1上是开集，在R2上不是开集，`open relative to`
- E subset Y subset X
	- 开区间 subset R1 subset R2
- X 度量空间, Y有着和X同样的度量函数/距离函数, 那么可以用 距离函数 定义在Y上的相对开集

2.30 theorem 若 $Y\subset X$  , a subset E of Y is open relative to Y if and only if E = Y cap G for some open subset G of X
- 利用2.24 开的任意并是开 以及 邻域选点+半径，构造 G=cup X中邻域(p,按照Y要求选的半径)

###  紧集 compact sets

2.31 开覆盖open cover: E subset cup E_a

2.32 紧compact: every open cover of K contains a finite subcover
- 任意 开覆盖 有 有限 子覆盖
	- 注意 任意 而不是存在
	- 后面是 有限

2.33 $K\subset Y\subset X$ , K关于X是紧的当且仅当 K关于Y是紧的

2.34 度量空间紧子集是闭集
- 证明其补是开集，找r= 1/2 距离再三角不等式

2.35 紧集的闭子集都是紧集
- 闭子集任意开覆盖 加上 `闭子集的补` 覆盖紧集，存在一个有限子覆盖，其中不含 闭子集的补的部分覆盖了闭子集

2.36 {紧子集} 任意有限交 非空，那么 {紧子集} 的任意交非空
- 反证：k1 中任意点都不存在于所有集合中，其它的补对k1形成开覆盖，紧所有有限个其它的补对k1开覆盖，这些与k1交为空

2.37 E是紧集K的无限子集，那么E在K中有极限点
- 反证：如果没有极限点，那么K中所有点可以开一个半径至多含有一个E中的点，从而有有限开覆盖覆盖了无穷多点的E,而每个开覆盖又只覆盖了一个点，

2.38 R1中可数闭区间套的可数交非空
- sup 左端点 显然属于其中
- 2.39 $R^k$ 中的 可数闭区间套的可数交非空
	- 每个维度是独立的

2.40 每个k-方格(k-cell)是紧集
- 反证法：无限格子套 + 1/2 切割长度 + 邻域控制
- 从而 k-方格 任意开覆盖总是有有限子覆盖，所以紧

2.41 heine-borel定理
- $\mathbb{R}^k$中
	- 闭+有界
	- 紧
	- E的每个无限子集 在 E 内有极限点
	- 这三个等价

2.42 weierstrass定理 $\mathbb{R}^k$中每个有界无限子集在$\mathbb{R}^k$中有极限点

###  完备集，完全集perfect sets

2.43 $\mathbb{R}^k$中非空完全集P 不可数
- 无限显然
- 如果可数，那么有排列
- 那么按照顺序，构造嵌套邻域（如果 不在上次构造的邻域中，那么跳过这个点），排除上一个点
	- 这样我们可以构造出 新邻域的闭包 属于 旧邻域，的无限嵌套，相对于P的交也是无限嵌套，
	- 因为每次排除点，认为无限交应该是空，但另一方面嵌套非空紧集无限交非空

(勘误?) 这里中英文书感觉，都漏了一步叫做 $K_n = \bar{V_n} \cap P$ , $\bar{V_n}$是有界闭集，所以紧
- $K_n$ 的每个无限子集E, 是 $\bar{V_n}$的 无限子集 => 在$\bar{V_n}$ 中有极限点(2.41), 另一方面E属于P,所以极限点也属于P
- 所以该极限点属于$K_n$
- 根据2.41 $K_n$ 紧
- https://book.douban.com/subject/1230288/discussion/616834625/


2.44 cantor set
- 每次 3等分去掉中间段
- 无限交是无限多点集合
- 是紧的
- 不含任何线段
- 无孤立点
- 不可数的0测度集的例子

### 连通集 connected sets

2.45 separated 分开的 $\bar{A}\cap B=\varnothing ,A\cap \bar{B}=\varnothing$
- connected: 不是分开的

2.47 R1中 connected 当且仅当 x,y in E，那么 x,y之间的in E
## 数列与级数 numerical sequences and series

### 收敛序列 convergent sequences

3.1 数列收敛converge，能找到p，对于任意给定距离需求，可以通过N来控制 $|a_{n>N}-p|<$距离需求
- 否则  diverge

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

## 连续性 continuity

### 函数的极限 limit of functions

4.1 X,Y是度量空间, $E\subset X$,f maps E into Y，p是E的极限点. We write $f(x) \to q$ as $x \to p$, or 
- $\lim_{x\to p} f(x)=q$
- 这里是 可以在度量空间X通过控制p的距离（邻域）$0<d_X(x,p) < \delta$，来控制在度量空间Y中$d_Y(f(x),q) < \epsilon$的距离
- 注意1: $p\in X$ 不一定$p\in E$, 
- 注意2: 关注的是邻域 不含中心点的 $0 < d_X(x,p)$, 所以 $f(p)\neq \lim_{x\to p}f(x)$ 也是可能的

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
