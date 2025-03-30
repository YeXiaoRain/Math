---
title: Walter Rudin 数学分析原理 2 基础拓扑
date: 2025-01-27
categories:
  - 数学分析
tags:
  - 微积分
  - 数学分析
---


## 基础拓扑 Basic topology


### 有限集、可数集和不可数集

2.1 A,B 都是 sets, A中x和B中一个元素关联associated, f(x)表示，f is said to be a function from A to B(or mapping of A into B).
- the set A is called the `domain` of f(we also say f is defined on A)
- and the elements f(x) are called the values of f. the set of all values of f is called the `range` of f

<!--more-->

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