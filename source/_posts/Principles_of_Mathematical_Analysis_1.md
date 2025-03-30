---
title: Walter Rudin 数学分析原理 1 实数系与复数系
date: 2025-01-20
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