---
title: MIT18.06线性代数
date: 2024-03-23
categories:
  - 线性代数
tags:
  - 线性代数
  - MIT
---


# MIT 线性代数公开课

http://web.mit.edu/18.06

https://www.youtube.com/playlist?list=PLE7DDD91010BC51F8

https://ocw.mit.edu/courses/18-06sc-linear-algebra-fall-2011/download/


<!--more-->

## 1 方程组的几种解释

问题：当我们小学学到鸡兔同笼时会用方程组，如果未知量更多变量更多的方程组有什么解决方案？

从2个未知量，2个方程开始

$1x+1y=2$ 头

$2x+4y=6$ 脚

此时为了简化书写,定义了矩阵

$\pmatrix{1 & 1 \\\\ 2 & 4 }\pmatrix{x \\\\ y}=\pmatrix{2 \\\\ 6}$

这里 在矩阵定义上扩充一下行列都$\ge 1$，定义多行多列的矩阵乘法运算为

$A_{m\times n}\cdot B_{n\times s}=C_{m\times s}$

其中$C_{i,j}=\sum_{k=1}^{n} A_{i,k}\cdot B_{k,j}$

原问题变成$Ax=b$

---

由这个定义可以 容易的得到

- 矩阵乘法有结合率
- 矩阵乘法**没有**交换
- 矩阵乘法可以块状乘法

---

- 把一`行`拿出来看 对应的函数图像是 线的交点求解
- 把一`列`拿出来看，对应的函数图像是 多个向量的线性组合方案求解

考虑 维度增加，那么
- `行`就是高维平面的交
- `列`就是高维向量的组合方案

## 2 矩阵消元（高斯消元）

初中解答鸡兔同笼，有的时候用的是用y表示x,再带入x

而还有一种方法，就是 整行做减法

把第二个方程变为 $(2x+4y)-2(x+y)=6-2\cdot2$

这里有性质：

- 原方程组的解一定是新方程组的解（假设先带入满足原方程则后续方程左右都是同样的操作）
- 新方程的解一定是原方程的解（当我们把方程i+=k倍方程j时，只需要逆向操作是 -=k倍 方程j 就可以还原）

所以 把方程的行变换（i行+=k倍j行，或交换行）操作对应到矩阵的上来看，这些操作最终不会影响结果

---

类似的 如果 做类似的列操作 相当于定义新的变量 `y_new=(y_old+kx)`

综上

- 基础行变化 是 在对方程之间加减
- 基础列变化 是 在对未知数之间加减

---

然后如果我们希望不要用文字描述操作而是矩阵描述的话，会发现 左乘是行操作，

当我们进行阶梯型变换时，全是左乘上下三角

## 3 乘法和逆矩阵

首先单位矩阵 $AI=A=IA$, 显然存在(对角是1)且唯一$I_1=I_1I_2=I_2$

那么考虑如果存在逆矩阵 $A^{-1}A=I$

注意矩阵乘法不满足交换率，所以还需要证明一下 左侧逆=右侧逆，

- 若左右逆存在 $A^{-1}_l=A^{-1}_l(AA^{-1}_r)=(A^{-1}_lA)A^{-1}_r=A^{-1}_r$ 根据结合率
- 若一侧逆存在，另一侧逆不存在  ??????????????????

---

用 gauss-jordan的 行变换 把$Ax=b$写成$A|b$的增广矩阵，然后把A通过多次行变换尽量变成单位矩阵

因此有 $x=A^{-1}b$

## 4 LU分解

$(AB)^{-1}=B^{-1}A^{-1}$

对于$Ax=b$对A进行向阶梯形变换时，左侧乘上的一直是 下(Lower)三角矩阵（长宽相等）

而 多个下三角矩阵的乘积显然还是 下三角矩阵(根据矩阵乘法定义易证)

所以 $A=LU$ 可以变成 下（Lower）三角矩阵 乘上 上（Upper）三角矩阵

注意到的是 $A$在向阶梯矩阵变换时，还可能因为行的主元位置是0,需要进行行交换

所以另$P$为预先完成目标行交换的 行交换矩阵，所以上面的变成

先完成行交换$PA=LU$再进行阶梯矩阵的行变换操作

## 5 转置

$A_{i,j}=A^T_{j,i}$

对称矩阵: $A=A^T$

显然$RR^T$ 是对称矩阵

行交换矩阵 的逆等于它的转置 $P^{-1}=P^T$,显然

---

## 6 列空间，nullspace

$A_{m\times n}$列向量是$n$条在$R^{m}$中的向量，它们的生成空间是$C(A)$, 是$R^{m}$的子空间

向量空间：需要加法，数乘封闭（所有线性组合还在空间中）

$Ax=0$ 对应的$x$的解叫做解的0空间 null space

## 7 Ax=0,主变量，特解

echelon form（阶梯形式）

计算$Ax=0$ 还是对A阶梯型，$A_{m\times n}$对于变换后

- 列数n
- 主元数,pivot variables: r， rank（秩）=行变换主元的个数
- 自由变量(free variables): n-r

对于主元不止后面行变换成零，前面行也边，主元再变为1, 就是 matlab 的`rref(A)`,(reduced row echelon form)

```
1 2 2 2        1 2 2 2       1 2 0 -2
2 4 6 8    =>  0 0 2 4  =>   0 0 1  2 (reduced)
3 6 8 10       0 0 0 0       0 0 0  0
```

```
主元列， 自由列
1 0    2 -2
0 1    1  2
0 0    0  0

是
I F
0 0
的形式

[I F]*[x_p,x_f]^T=0
```

那么 `nullspace维数=n-r`

$x_{pivot} = -Fx_{free}$

$x=c\pmatrix{-F \\\\ I}$

## 8 Ax=b，可解性和可解结构

类似的 阶梯化到reduced形，然后对于自由的设为0, 非自由的计算对应值 得到特解

然后加上 上面nullspace，也就是经过特定点（一个特解） 指定偏移形状（nullspace）的 子空间

---

$A_{m\times n}$

显然 $r\le m, r \le n$ 不会超过行列数

满列 $r=n \le m$时 无自由变量 nullspace为单点,$N(A)=\lbrace 0\rbrace$ 只有0向量，所以0个或1个解

满行$r=m \le n$时 有1个或多个解

$r=m=n$时1个解

这里结论: 

- 解 = 特解+nullspace
- 而 矩阵的rank决定了 特解存在性 与 nullspace的形状，也就决定了解的数目

## 9 线性相关性，基，维

- 线性相关/线性无关
- 生成（张成）空间spanning a space
- BASIS and dimension

$\sum_{a_i} a_i \alpha_i =0$ 只存在 全$0$的$a_i$解 则线性相关，否则线性无关

所以 矩阵A 的 nullspace 只有零解 当且仅当 A的列向量 线性无关（因为 线性相关 对应 $a_i$ 就对应到了 nullspace 的非零解），rank = n(列数)

---

span（生成，长成）：由向量组 线性组合得到的所有向量的集合， 向量组 生成 空间（space)

引出 “基”（Basis) 的概念：

- 基basis for a space is a sequence of vectors v1,v2,...,vd, with 2 性质:
	- 它们 线性无关（限制多了不行，多了些不必要的）
	- 它们 能生成span the 空间space, (限制少了不行，会无法完全表示)

给定一个空间，every basis for the space has the same number of vectors, 这个 个数 称作 空间的维数（dimension）

```
A =
1 2 3 1
1 1 2 1
1 2 3 1

列向量 能生成 space C(A)
列向量不是基，因为线性相关
nullspace 例如 N(A) = [-1,-1,1,0]^T，[1,0,0,-1]^T

{列1+列2} 可以作为基
```

rank(A) = 主元的列数 = C(A)的维数dim

dim(N(A)) = 自由变量个数 = n - rank(A)

## 10 四个基本子空间

对于$A_{m\times n}$ 是$m$行$n$列的矩阵

C(A): 列空间 column , in $R^m$

N(A): nullspace, in $R^n$

row space: 行的所有组合 => $C(A^T)$, in $R^n$

null space of $A^T$ => $N(A^T)$, 常用名字 left nullspace, in $R^m$


![[mit_la_10.png]]

---

$R^n$ 空间中： nullspace(n-r) 和 row space (r)正交，且维度和为n

$R^m$ 空间中： N(A^T) 和 C(A) 正交，且维度和为m

---

因为 basis for rowspace is first `r` row of `rref(A)`, 注意行变换后 C(A) 不一定等于 C(rref(A)), 但是行还是，

因为逆操作保证了rref(A)的行能表示原始A的行，所以$C(A^T)=C(\mathrm{rref}(A)^T)$

rref的过程 是行变换 相当于乘上 操作组合的矩阵E,而乘了以后，A变为rref(A)，它的倒数m-r全为0,正好说明了 E的后m-r行对应的 正是 left nullspace 的基，而且 因为E是单位矩阵  和 A相同的基础行变换得到，的所有E的行之间是线性无关的。

$R^n$ 延伸到 $R^{n\times n}$, 把矩阵看成向量

例如 $R^3$的所有对角矩阵的 集合（space），的基可以是

```
1 0 0
0 0 0
0 0 0

1 0 0
0 3 0
0 0 0

0 0 0
0 0 0
0 0 7
```

## 11 矩阵空间，rank=1矩阵，小世界图

- Base of new vector spaces
- rank one matrices
- small world graphs

因为矩阵，可以数乘，相加（线性要求的基础）

$R^3$ 的所有矩阵的 基，例如

```
1 0 0
0 0 0
0 0 0

0 1 0
0 0 0
0 0 0

0 0 1
0 0 0
0 0 0

...


0 0 0
0 0 0
0 0 1
```

类似的，对称矩阵(symm) 的基的个数是6个


```
100
000
000

010
100
000

001
000
100

000
010
000

000
001
010

000
000
001
```

S(对称矩阵) and U(上三角矩阵) = diag(对角矩阵)

dim(S交U) = 3

S并U => 不是一个空间，运算不封闭

S+U => 组合 而不是并，也就是 “不是两个空间之和，而是空间S中任意元素+U中任意元素“ = ”两者基的集合之和 再 span生成的空间”

dim(S+U) = 9

dim(S并U)+dim(S+U)=dim(S)+dim(U)

---

$y''+y=0$

$y=\cos x, \sin x, e^{ix}$ 找所有解, 也是解空间的基的线性组合

$y=c_1\cos x+c_2\sin x$

dim(解空间)=2

---

秩为1的矩阵 总可以表示成 $A=uv^T$, 一列乘上1行

这一章，主要就是用 更特殊的例子（把矩阵看作向量，来构成矩阵空间，用例子来再度回顾，什么是space,什么是基，什么是线性组合 ）

---

图论 和 线性代数 的关系，人与人之间的6步认识理论

## 12 图和网络

- graphs & networks
- incidence matrices （关联矩阵）
- kirchnoff's laws 

与实际应用相关的

Graphs: 点 和 边, 也可以表示电路系统，液压系统，桥系统

```
A = 
         列对应点
行对应 边 [        ], -1表示出，1表示入点
```

$Ax= [x入-x出...]^T=0$

---

对于“连通图”

零空间是 `[1,1,1,1,1,1]` 

看成电势能，可以选一个点接地（xi=0）

$N(A^T) = m-r$

$A^Ty=0$, Kirchoff's 基尔霍夫电流定律 KCL, 每一行 说明 节点上不累计电子

nullspace(A^T) = 那么 线性无关的 A^T 的列 对应的图中的边 不含环loop

连通图的不含回边含有所有点的图是树

dim N(A^T) = m - r = 独立loops个数 = edges - (点数-1) 

点数-边数+独立环数=1

Euler‘s 公式 视角：空间里 面对应这里的点，边对应这里的边，而点对应这里的 独立loops

$A^TCAx=f$ 稳定电流问题，

---

延伸：图论里还有生成树个数计算

## 13 复习1

- review for exam 1
- emphasites chapter 3

练习1. 是非题  $A^2=0 \to A=0$ ?, False, 我觉得这个很“反例，因为在线代之前都是单个的数，就算到了复数,只要结果是0,那么乘数一定有零，而这里的反例反过来再次强调了乘法规则的变化”

```
0 1
0 0
```

练习2. if C 是 可逆的， N(CD)=N(D), 左乘可逆不会改变nullspace

```
rref(A) =
  I   F  的形状
    O
解形状 = 
  -F
   O
```


解

```
[1 1 0][1 0  1 2]     1
[0 1 0][0 1 -1 1] x = 0
[1 0 1][0 0  0 0]     1
```

这里 nullspace用上面的N(CD)=N(D)来算

而`特解` 注意到 

```
[1 1 0] [1]   1
[0 1 0] [0] = 0
[1 0 1] [0]   1
只需要再解
[1 0  1 2]     1
[0 1 -1 1] x = 0
[0 0  0 0]     0
就好了，这样就很easy!?
```

练习3. 如果m=n,那么 行空间=列空间，错，相等的只是维数而生成空间不一定相等, `[0 1 ; 0 0]`

练习4. A和-A是否拥有相同的四个空间, True

练习5. 如果A和B的四个子空间相同,那么A是B的倍数? 错 反例`[1 0;0 1]`和 `[0 1;1 0]`

练习5. 为什么 一个向量 不能同时 是行向量 且 在 nullspace里？

想说 多个平方和吗？这样想的花 i,1 就可以

这里要引入零空间和行空间正交

## 14 正交向量与子空间

- orthogonal vectors & subspaces
- nullspace 正交 row space 和 column space 正交$N(A^T)$
- $N(A^TA)=N(A)$

毕达哥拉斯pythagoras, 勾股定理与正交: $x^Ty=0$

高维空间中

$||x||^2+||y||^2=||x+y||^2$

$x^Tx+y^Ty=(x+y)^T(x+y)=x^Tx+y^Ty+x^Ty+y^Tx$, 最后两项 点乘是一样的

---

向量正交 推广到 空间正交：A空间中的任意向量 和 B空间中的任意向量正交

// 这时候会发现3维不是一个很好的高维示例，因为当想拆两个子空间时，如果拆成 1维和2维，总有一个维度会显得不够灵活

---

row space和 nullspace 正交:

nullspace: $Ax = 0$, $x$所属的space

只需要展开A就能 看到 A的原始的row 乘上x 的到的 数值为0

所以A的行全部和x正交，所以行的生成空间（原始行的任意线性组合）

这里不止正交，而且一个r维,一个n-r维,所以一个是$R^n$中另一个的剩下所有垂直向量生成的空间

---

研究 $A^TA$ ，因为很多情况下$A$并不一定是方阵，而是长方形

- n阶方阵
- 角对称

$Ax=b$ 可变成 $A^TA\hat{x}=A^Tb$, 特别当$m > n$时

$x$的解一定是 $\hat{x}$的解, 而如果$A^TA$又可逆，那么一定有解

于是要用到 rank(A^TA) = rank(A), 第15章证明

hat $\hat{x}$表示最优,而不是准确
## 15 子空间投影

- projections， 从投影到1维，延伸到 投影到空间
- least squares and best straight line

从二维 向量a,b投影 谈起

也就是 a方向上的向量p=ka, 与 b-p垂直, 其中$k$是某个`数`,a,b是向量

$(k\vec{a})^T(\vec{b}-k\vec{a}) = 0$

即 $a^T(b-ka) = 0$

即 $a^Tb = ka^Ta$, 注意到这里 $a^Tb$和$a^Ta$都是数

即 $k = \frac{a^Tb}{a^Ta}$

$p=a\frac{a^Tb}{a^Ta}$

$P(b) = \frac{aa^T}{a^Ta} b$, 注意分子是矩阵 而分母是数 , 这里是"投影矩阵"，rank=1

两个好的性质

- $P^T= P$ 根据表达式显然
- $P^2 = P$ 幂等, 意义证明也就是投影的投影是不变的，代数证明根据结合律也显然

---

why project? 为什么做投影?

因为 $Ax=b$ 可能无解

变成找$Ax=p$, 其中$p$是$b$在$A$的列空间的投影

那么$b$ 关于$A$的每个列向量的投影都可以用类似上面的过程

$(A)^T(b-A\hat{x})=[0,\cdots,0]^T$, 左边是列向量的转置，右边是 $e=b-(p=A\hat{x})$, 这样说明$e$和$A$的所有列向量正交，也就和列空间正交

注 这里根据前面 子空间正交性和充满空间 有$e$在$N(A^T)$中

注 这里不能单独的和每个列向量正交再加起来，因为和一个列向量正交的同时可能和另一个列向量不正交，这里需要同时和所有列向量正交

$A^Tb = A^TA\hat{x}$

$\hat{x}=(A^TA)^{-1}A^Tb$ ?? 不需要保证 可逆性吗?????

$p = A\hat{x} = A(A^TA)^{-1}A^T b$

$P(b) = A(A^TA)^{-1}A^T b$, 这里的一个结论是，如果$A$是方阵且可逆，则 $P(b)=b$

性质 

- $P^T= P$, 这里要用到 对称矩阵的逆 是对称矩阵？啊？？？？？？
- $P^2 = P$，这个同样从意义上 投影的投影幂等，从表达式上结合律

---

应用: 最小二乘法 拟合直线 Least squares fitting by a line

3个点: (1,1),(2,2),(3,2)

直线$y=b+kx$

那么对应

```
b+k=1
b+2k=2
b+3k=2
```

显然是无解的

```
[1 1]       [1]
[1 2] [b] = [2]
[1 3] [k]   [2]
```

下节课

## 16. 投影矩阵,最小二乘法

- projections
- least squares and best straight line

$P=A(A^TA)^{-1}A^T$ 投影矩阵

如果 b 在 列空间中,那么 Pb = b 投影是自己

如果 b 垂直于 列空间,那么 Pb = b 投影是0， $b \in N(A^T)$

其它情况 b,即不在列空间，也不垂直列空间

对于b

- 把b投影到 列空间 的部分称作p
- 投影到N(A^T)的部分叫做e
- b = p+e (因为 列空间 和 N(A^T)正交！ 不正交的话投影和就不一定等)
- p=Pb
- e=(I-P)b
- 这里小p是投影，大P是投影矩阵

---

回到best line fitting, 那么要评价best line需要指标？

指标 $\min ||Ax-b||$ 这里描绘的是 y方向的差的平方最小，并不是点到直线的投影，（线性回归 linear regreation)

$=\min (b+k-1)^2 +(b+2k-2)^2 +(b+3k-2)^2$

微积分视角 偏导数，也会得到下面的方程

```m matlab
A = [1 1; 1 2;1 3];
A = [1;2;2];
ata = A' * A;
atb = A' * b;
x = ata\atb; // [2/3;1/2] => 最优 直线 y = 2/3 + 1/2 x
p = A * x;
// 3  6  | 5
// 6 14  | 11
// normal eqn
```

```
    [1]             [7 /6]       [-1/6]
b = [2] = (p = Ax = [5 /3]) + (e=[ 2/6])
    [2]             [13/6]       [-1/6]

p 垂直 e
e 垂直 原来列向量 [1;1;1],[1;2;3]
```

这里核心要导出的结论是: 如果A的列 线性无关, 那么$A^TA$是可逆的

也就是要证明 $A^TAx=0$ 只有零解

那么 $x^TA^TAx=0$

那么 $(Ax)^TAx=0$ 这里是  $列向量^T列向量 =0$, 所以

即是 $Ax=0$， 列向量线性无关所以只有零解，所以$A^TA$可逆

---

columns definitely independent if they are (perp.unit vectors/orthogornal vectors) , 列如果恰好单位向量/相互垂直，那么它们线性无关

`[-sin cos]`和 `[cos sin]`

## 17. 正交矩阵,Gram-Schmidt 正交化

- orthogornal basis, q1,...,qn, n条正交基
- orthogornal matrix Q
- Gram-Schmidt A->Q

orthog-normal vectors: 基两两正交，且每个基长度为1

$Q=[q_1,\cdots,q_n]$ 

正交矩阵:
- $Q^TQ = I$, 注意 虽然名字里没有 normal,只有orthog,但正交矩阵是要求normal的

如果$Q$是 方阵, 那么$Q^T=Q^{-1}$


```
例子
[0 0 1]
[1 0 0]
[0 1 0]

[cos -sin]
[sin  cos]

adhermar matrix, 全是1,-1组成的，还有系数的

    [1 -2  2] 
1/3 [2 -1 -2]
    [2  2  1]
```

如果$Q$的列是 标准(normal 单位长度)正交的

$P=Q(Q^TQ)^{-1}Q^T = QQ^T$

- 再次,如果Q是方阵,那么$P=I$
- 再次 对称
- 再次 幂等

这种情况下 $\hat{x_i} = q_i^T b$ 

---

Gram-Schmidt 正交化

- 把一般的矩阵的线性无关的列向量 转化为正交列向量

从两个向量开始 $(a,b) \to (a_1=a,b_1=b-\frac{aa^T}{a^Ta}b)$, 上面学的投影，完成后，再进行单位化$(q_1=\frac{a}{||a||},q_2=\frac{b}{||b||})$， 

- 这里视频上是$\frac{a^Tb}{a^Ta}a$的形式，这表现出是向量$a$的某个倍数，而且更容易计算
- 因为“数”可以交换位置 $\frac{aa^T}{a^Ta}b = \frac{a^Tb}{a^Ta} a$

三个向量 $(a,b,c) \to (a_1=a,b_1=b-\frac{aa^T}{a^Ta}b,c)$, 

$\to (a_1=a,b_1=b-\frac{aa^T}{a^Ta}b,c_1=c-\frac{a_1a_1^T}{a_1^Ta_1}c-\frac{b_1b_1^T}{b_1^Tb_1}c)$, 这里因为前两项已经完成了正交，所以后面的减法才能合并成立

整个操作 列空间没有变化，也就是保持列空间不变的情况下，选了一组normal 正交基

回过头来看

- $A=LU$ 描述 之前的 rref阶梯化
- $A=QR$ 描述了这里 ,A$列变化提出normal正交列向量, R是上三角矩阵

## 18 行列式 及其性质

- Determinants det A = |A|, 而 determinate的英文是确定的
- properties

eigen values(固有值， 特征值)

本章 重要结论之一 可逆 <-> 行列式非零

由3条性质基础得到行列式，而不是先行列式有什么性质

- 性质1. det I = 1
- 性质2. 交换行，影响行列式的 符号
	- 任意的 置换矩阵 det P = 1 or -1
- 性质3. 每行都是可以独立考虑线性性质的，也就是固定其它行 有数乘和加法
	- 3.1. 单行乘上t, 结果乘上t
		- $\det kA = k^n \det A$
	- 3.2. 两个矩阵n-1行相同, 那么它们的行列式相加 = 这相同的n-1行以及 对应的对位相加 的 矩阵的行列式.  

虽然直接上代数式更代数，但这里3个性质更 直观，但这样的性质有一些潜在的风险，例如 性质2
	- 这里 数学一点 需要证明如果行两两不同，那么奇数次交换 和 偶数次交换 无法得到同样的矩阵， 而隐藏在里面的 正是排列数的内容，

---

根据基础性质有

- 性质4. 相等的两行 det = 0, （根据性质2)
- 性质5. 行i -= k * 行j $(j\neq i)$, 行列式不变，根据性质4和性质3
- 性质6. 有全零行, 则 det A = 0, 根据性质3 乘上 0
- 性质7. U(上三角矩阵)行列式 =对角线上的乘积, 根据1,5,3,以得到
- 性质8. 当A is singular(奇异 不可逆), det A = 0
	- 前面 可逆 <-> rref后每行有主元 <-> U , det U!= 0
	- 对于2维 |[a,b;c,d]| = ad-bc, 根据上面推出的而不是定义的！
	- 对于n维的同样 推出 代数式 ！！！！（不过同样的在下一章）

---

- 性质9: det (AB) = det(A) det(B)
	- 若不可逆，和0的关系易证
	- 那么对于 A,B 均可逆，证明？？？？？？？？？？？？
		- 代数式倒是易证，然而是第19章
		- 首先特别的 对于简单的行变化 R, det (RA) =  det(R)det(A)
		- 这里是 只看B的行向量，而通过对A进行变换（是左，那么左右同步同样变化，直到A完全变成 对角矩阵，得证
	- 推论 det $A^{-1}$ = 1/det A
- 性质10: $\det A^T = \det A$
	- 证明: $|U^T||L^T| = |A^T| = |A| = |L||U|$, 用上面性质
	- 推论 零列 => det 0
	- 推论 det Q = 1 or -1, 因为$Q^TQ=I$

// 这样看来3x4的行列式，主要是性质1难以满足，而且本身长矩阵 无可逆一说，这样的值没有用处，后续9,10也不行，而想满足其它有些性质还真可以

## 19 行列式公式, cofactors代数余子式

`[a,b;c,d] = [a,0;c,d]+[0,b;c,d] = [a,0;c,0]+[a,0;0,d]+[0,b;c,0]+[0,b;0,d]` 简单的利用性质3，一直拆就行了

amazing比 先走表达式，漂亮多了，从我们需要的性质去导出一个满足的

$\det A = \sum_{(t_i,\cdots)排列} \pm \prod_{i=1}^n a_{i{t_i}}$

下个问题 是这里$\pm$的具体取值能否 通过排列判断出

上面的性质 是 列号 = 经过多少次 交换能变成 (1,...,n) 那就决定了-1的奇偶

---

cofactors 代数余子式, 啊这因为字面意思是 co-(共，伴随) factors因子， 有的时候这种 中文就太别扭不精确

把第一行 的每个数拆出来

$= a_{11}(a_{22}a_{33}-a_{23}a_{32})+a_{12}(-(a_{21}a_{33}-a_{23}a_{31}))+a_{13}(a_{})$, 括号里的就是代数余子式

$\det A =a_{11}C_{11}+a_{12}C_{12}+\cdots+a_{1n}C_{1n}$

回到上面的问题, cofactor of $a_{ij}$的 符号问题，容易猜出 再证明$(-1)^{i+j}$

```
+ - + - +
- + - + -
+ - + - +
- + - + -
+ - + - +
```

代数余子式的想法的拆解，能对于一些有规律的大矩阵得到递推公式

```
1 1 
1 1 1 
  1 1 1
    1 1 1
      1 1 ...
```

## 20 Cramers Rules 克拉默法则


1. Formula for $A^{-1}$
2. Cramers Rules for x=$A^{-1}b$
3. 行列式应用 |Det A| = volume of box

对于2阶矩阵 $[a,b;c,d]^{-1} = \frac{1}{|[a,b;c,d]|} [d,-b;-c,a]$

本章 重要结论$A^{-1}=\frac{1}{\det A} C^T$, 其中$C$是上一章的 代数余子式

证明:

就是 乘法展开，会发现$AC^T$的对角 是$\det A$, 而 非对角$i,j$，相当于把$A$的$j$行 换成$i$行 再去求$\det$,而我们知道 有两个相同行的$\det$为0, 所以得证

这个公式也帮助理解 原矩阵变化 对 逆矩阵的影响


---

Cramers Rules: $x=A^{-1}b=\frac{1}{\det A}C^T b$

看向量$x$的每个 分量

$x_{i}=\frac{\det B_i}{\det A}$, 其中 $B_i =$ 把$A$的第i列换成$b$, 这也是 从 余子式 和 行列式 的关系 得到的

感觉算法竞赛里 常见的还是高斯消元，但那偏应用，而这里是数学性质的推导

这个的主要价值 是 提供了一个表达式，但不易于计算

---

行列式应用： 求体积

命题：行列式的值 = 箱子的体积

箱子的三条边，三个行向量，（行列式的值可能为负（告诉我们手性），则取绝对值）

直觉的证明 如果能证明上面18章的3个基础性质 和体积变化同步，那么就可以证明

- 性质1. det I = 1 对应 单位标准立方体
- 性质2. 行交换 乘上-1, 对应空间的维度交换
- 性质3. 固定其它维度，单行的加和乘满足线性关系。 对应箱子单边的伸缩！！

延伸，2维的det 求面积

延伸，三角形面积 非原点 用三维det, 因为 做两次 行相减，就能让非1的部分回到原点。

```
1/2 * det(
x1 y1 1
x2 y2 1
x3 y3 1
)
```

## 21 eigenvalues特征值 与 eigenvectors特征向量

- eigen values , eigen vectors
- $\det (A-\lambda I) = 0$
- trace = $\lambda_1+\lambda_2+\cdots+\lambda_n$

还是对于方阵

eigen(自身的)

看成函数 $f(x)=Ax$

那么希望研究其中, 运算后和x平行的, parallel to x (eigen vectors)

$Ax= \lambda x$, 其中$\lambda$ 是数值，eigen values

if A is Singular, 存在非零x, $A x = 0 x$, 也就是0是它的特征值,

这里要研究所有特征值.

---

what are the x's and \lambda 's for project matrix? 投影矩阵的 特征值 和 特征向量 是什么？

根据之前的内容，不在空间外的 到子空间的投影 一定不是平行的(parallel)

而在空间中的向量到空间的投影，就是它本身$Px=x$, 这里$\lambda = 1$

正交于空间的，投影都是0, 所以$Px = 0$, 这里$\lambda = 0$

所以只有1 和 0

---

置换矩阵 `[0,1;1,0]`, 因为交换顺序， 所以只有交换前 平行

- $x=[1;1],\lambda = 1$
- $x=[1;-1],\lambda = -1$

而且 两个$x$是正交的

---

性质:

- n个 特征值, 因为 上面会变成n次方程
- trace $= \sum_i \lambda_i = A_{ii}$
	- 证明 注意 特征方程 的$n-1$次方只能来源于对角线, 而$\prod_i (\lambda - \lambda_i)$的$n-1$ 次系数 对应$\sum_i$, 因此得证
- $\det = \prod_i {\lambda_i}$
	- 其实 右边是$\prod_i (\lambda - \lambda_i)$的零次系数，那么直接把$\lambda =0$带入就是左边

---

how to solve $Ax=\lambda x$?

$(A-\lambda I)x =0$ 如果存在非零向量$x$,那么左侧一定是奇异的，所以$\det (A-\lambda I) = 0$, 所以变成关于$\lambda$的$n$次方程 (特征方程)

可能相同，也可能不同

如果有$\lambda$, 那么只需要带回去 高斯消元 求nullspace就能有x

简单例子

```
3 1
1 3
显然有2,4
而上面例子
0 1
1 0
的特征值-1,1， 对矩阵的对角同时增加k，那么特征值同时增加k，而特征向量不变
```

$Q=[0,-1;1,0]$， 90度旋转矩阵，会遇到$\lambda^2 = -1$, 会出现 复数

上三角矩阵的特征值 就在 对角线上 显然

```
3 1
0 3
特征值3, (lambda -3)(lambda - 3) =0

(A-3I)x = [0 1] = [0]
          [0 0]   [0]

degenerate matrix(退化矩阵，重复的特征值 可能造成 特征向量短缺，只有[1;0]）
```

## 22 对角化, A的幂

- Diagonaliging a matrix $S^{-1}AS=\Lambda$
- Powers of A / equation $u_{k+1}=A u_{k}$

假设A有n个线性无关 特征向量

S是特征向量 组成的矩阵（必定可逆）

$AS=A[特征向量列]=A[\lambda_i x_i...]=S [\lambda_i 特征值对角矩阵] = S\Lambda$

$S^{-1}AS = \Lambda$

$A=S\Lambda S^{-1}$， 这里也可以得到 如果 $\forall |\lambda_i| < 1$那么 $k\to \infty, A^k\to O$

$A^n=S\Lambda^n S^{-1}$ 这就很amazing了，，，我还是隐约觉得fft 转化过程 有这种类似的感觉，转化成一个高效计算的，然后转化回来

不走这一步的话 也能得到 $A^n$的特征值有$\lambda^n$, 通过最开始的特征值定义

---

A is Sure to have n indep evectors (and be diagonaligable) if all the $\lambda$ are different (no repeated \lambda's) 如果A有n个不同的特征值，那么它有n个线性无关特征向量(对角化), 这里是充分不是充要，prove：

- 搜了不少内容，很多都在说 两个不同特征值对应的特征向量线性无关
	- 两个很好证，因为 第一个对应的 组合 成$\alpha_1$,第二个组合成$\beta_1$,那么有 $\alpha_1 = \beta_1$, $\lambda_1\alpha_1 = A\alpha_1 =A\beta_1= \lambda_2 \beta_1$ 矛盾
	- 但这里我需要的是 要组成$A=S\Lambda S^{-1}$,也就是$S$的部分，需要证明的是所有个，而不是其中两个，如果三个特征值对应的三个特征向量是`[1;0;0],[1;1;0],[0;1;0]`,它们的确两两无关，但是3个是相关的
	- 一个是归纳法 对于s-1成立 若 $\sum_{i=1}^s k_i\alpha_i=0$ 有非零解
		- $\times (A-\lambda_s)$ 有$0=\sum_{i=1}^s k_i(A-\lambda_s)\alpha_i=\sum_{i=1}^s k_i(\lambda_i-\lambda_s)\alpha_i$
		- 则有 找到一个s-1有非零解，矛盾
	- 另一个是空间意义的反证法
		- 如果 特征向量 和前面的特征向量集合线性相关，那么就是在前面向量的生成空间中，而前面的可以看作生成空间的基（不一定正交）的放缩，容易证明在基的生成空间中，每个基的放缩不同时，对于非平行于基的点的变化一定带有旋转，
	
		


当有重复特征值时
- 不满足的例子 `[1,1;0 1]`
- 满足的例子 `[1,0;0,1]`

---

给定初始向量和地推式$u_0$, $u_{k+1}=Au_{k}=A^{k+1}u_0$

把$u_0=\sum_{i} c_ix_i$ 拆分成 $A$的特征向量的组合。 (一定可拆分吗？？？？？？？

那么有$u_{k} = A^k (\sum_i c_ix_i)= \sum_{i} c_i \lambda_i^k x_i = \Lambda^k S C$, 注意 最后的 Lambda,S(特征向量组成的矩阵),C(拆分的系数向量)， 三者的i的顺序要对应一致

---

例子 Fibonacci

$F_{k+2}=F_{k+1}+F_k$

$u_k=[F_{k+1};F_k]$

$A=[1 ,1;1 ,0]$

也就是 经常用到的线性递推转幂次 $\lambda =\frac{1\pm \sqrt{5}}{2}$

$\lambda^2-\lambda-1=0$ 和原始递推式非常像，TODO ??? 应该可以延伸吧

另一方面 $F_{100} \sim c_1 (\frac{1+\sqrt{5}}{2})^{100}$, 较大的特征值描述了区域无限时的增长趋势

这里 注意到$[1-\lambda,1;1,-\lambda] [\lambda;1]= [0;0]$ 所以两个特征向量 $[\lambda_1;1],[\lambda_2;1]$

## 23 微分方程, Exp(At)

- Differential Eqns $\frac{du}{dt} = Au$
- Exponential $e^{At}$ of Matrix

$u(0)=[1;0]$

$\frac{du_1}{dt}=-u_1+2u_2$

$\frac{du_2}{dt}=u_1-2u_2$

$A[-1,2;1,-2]$

$\lambda =0,-3$

$\lambda_1=0, x_1=[2;1]$

$\lambda_2=3, x_1=[1;-1]$

solution: $u(t)=c_1e^{\lambda_1 t}x_1+c_2e^{\lambda_2 t}x_2$, drop from sky

check:  $\frac{du}{dt}=c_1\lambda_1 e^{\lambda_1 t}x_1+c_2\lambda_2 e^{\lambda_2 t}x_2 = \lambda_1 x_1 c_1 e^{\lambda_1 t}x_1+\lambda_2 x_2 c_2e^{\lambda_2 t} = A(c_1e^{\lambda_1 t}x_1+c_2e^{\lambda_2 t}x_2 )=Au$ 
带入得 $u(t)=c_1\cdot 1 [2;1]+c_2e^{-3t}[1;-1]$

利用$u(0)=[2;1]$

解得$c_1=\frac{1}{3},c_2=\frac{1}{3}$

$u(t)=\frac{1}{3}[2;1]+\frac{1}{3}e^{-3t}[1;-1]$

$u(\infty)=\frac{1}{3}[2;1]$

这也能描绘 系统是否趋于稳定性

- 如果$\lambda=-3+6i$, 而$i$的部分虚数意义是旋转 不影响大小， 实部 < 0
- 稳态: $\lambda_1 =0$ 其它$\lambda$实部<0


2阶 稳定性，两个特征值 都 < 0, 那么 trace < 0, det > 0

`[a,b;c,d]` 即 a+d < 0, ad-bc > 0

---

$\frac{du}{dt}=Au$

令$u=Sv$, S是 e vectors

$S\frac{dv}{dt} = ASv$， 带入

$\frac{dv}{dt} = S^{-1}ASv=\Lambda v$

$v(t)=e^{\Lambda t}v(0)$， 等下解释幂次的矩阵， drop from sky

$u(t)=Se^{\Lambda t}S^{-1}u(0)$

$e^{At}=Se^{\Lambda t}S^{-1}$, 根据下面的展开 也能得到， 这里处理的也是能够对角化的

解释:

$e^{At}=I+At+\cdots+\frac{(At)^i}{i!}+\cdots$ 泰勒级数展开

类似的$(I-At)^{-1}=I+At+\cdots+(At)^i+\cdots$

$e^{\Lambda t}=$对角矩阵，对角线上$e^{\lambda_it}$

---

例子: y''+by'+ky=0

如何把二阶微分方程 转化成 方程组

$u = [y';y]$

$u'=[y'';y']$

$\frac{du}{dx} = u' = [-b,-k;1,0] u$

## 24 特征值应用，马尔可夫矩阵，傅里叶级数投影

- Fouries series projections
- steady state
	- lambda = 1
	- lambda = 0, 得到 $e^{0t}$
- Markov matrix


马尔可夫矩阵(与概率论有关)
- 例子`A = [.1,.01,.3;.2,.99,.3;.7,0,.4]`
- 所有元素非负
- 所有列的和 = 1
	- 保证了 1是它的一个特征值，因为$A-I$进行行变换 n行相加 是0
		- 这里视频似乎还没有使用 行秩 = 列秩一类的，用的行线性相关 => det((A-I)^T) = 0, 又有 det((A-I)^T)=det(A-I)
	- 所有 其它特征值 $|\lambda_i| < 1$, prove???
	- $u_k=A^ku_0 = c_1\lambda_1^kx_1+\cdots$, 这样一个特征1,其它无限迭代趋于0， 是一个 steady state 稳态
- 用途一般用来表示 多个状态变化迁移（所以总和是1）
	- 因为特征值是1,和绝对值小于1的，那么再无穷多步以后有“趋于的稳态”的性质

例子

$u_{k+1}=Au_k$

$[c;m]_{k+1}=[.9,.2;.1,.8][c;m]_k$

$u_0=[c;m]_0=[0;1000]$

特征值特征向量 $1,[2;1],.7,[1;-1]$

$u_{k}=c_1 1^k[2;1]+c_2(.7)^k[-1;1]$

通过$u_0$可得到$c_1 = \frac{1000}{3},c_2=\frac{2000}{3}$

---

projections with orthonormal basis, $q_1,\cdots,q_n$

要拆解 $v = x_1q_1+\cdots+x_nq_n$

如何得到$x_1$, 利用q的正交性

$x_1 = q_1^Tv$

也就是$Qx=v$的解是$Q^Tv=x=Q^{-1}v$

---

fourier series 函数 $f(x) = a_0+a_1\cos(x)+b_1\sin(x)+a_2\cos(2x)+b_2\sin(2x)+\cdots$

这里是无穷多个正交的函数，而函数正交的定义类似向量

- 向量 内积 $u^Tv=\sum_{i} u_iv_i$
- 函数$f^Tg = \int_0^{2\pi}f(x)g(x)dx$, 因为上面研究的周期是$2\pi$
	- 例如 $\int_{0}^{2\pi}\sin(x)\cos(x) dx = \frac{1}{2} (\sin(x))^2 |_0^{2\pi} = 0$
- 那么类似上面分解$v$到$q_i$计算系数$x_i$, 同样的想法，这里要做的 乘上对应正交基，$\int_0^{2\pi} f(x)\cos(x) dx$
	- 那么注意到 $\int_0^{2\pi}(cos(kx))^2 dx=\pi$, 所以上面系数再乘上$\frac{1}{\pi}$, 其中 $\int_{0}^{2\pi} dx = 2\pi$ 所以$a_0$的系数是$\frac{1}{2\pi}$

```m
f = @(x) (cos(x)).^2;
q = integral(f,0,2*pi);
```

---

？？？ 感觉这两章有些公式 drop from sky, 例如 $e^{\lambda t}$, 例如

## 25 复习 2

总览

标准正交矩阵 $Q=[q_1,\cdots,q_n]$, $Q^TQ=I$

- Projections-Least Squares, 无解的投影解，以及最小二次
	- 投影矩阵的对称性和幂等性
- Gram-Schmidt, 一个向量减去它投影到另一个向量的部分来逐渐建立正交系
	- 当 另一组 向量内部是两两正交的，那么就可以互不影响的相减了
	- $\displaystyle a_{i_{new}}=a_i-\sum_{j<i} \frac{a_{j_{new}}^Ta_i}{a_{j_{new}}^Ta_{j_{new}}}a_{j_{new}}$

行列式， 3个基础性质，导出
- 延伸性质
- 公式
- 定义代数余子式
	- 导出 逆矩阵公式
	- 利用代数余子式求一些有规律的大矩阵的递推式

特征值，特征向量
- 特征向量
- sum = trace, prod = det
- 对角化
	- 幂次 
- 差分/递推 方程
	- fib
	- 周期的递推，在特征值视角上 也是 复平面的单位圆
	- 微分方程

---

例题：

`a = [2;1;2]`, 任意向量到a的投影矩阵P $=\frac{aa^T}{a^Ta}$, 空间是$A(A^TA)^{-1}A^T$

 $P = 1/9 [4,2,4;2,1,2;4,2,4]$, 
 
 特征值: 维度是1,所以现有有两个是0, 另一个 = $trace - 0-0=1$

特征值 对应的特征向量是a,因为$Pa=a$

$u_{k+1}=Pu_k$, $u_0=[9;9;0]$

$u_{k+1}=u_1=Pu_0=[6;3;6]$, 幂等性质

$u_0=c_1x_1+c_2x_2+c_3x_3$的展开

$u_k=A^ku_0=c_1\lambda_1^kx_1+c_2\lambda_2^kx_2+c_3\lambda_3^ku_3$

---

例题： 拟合最好y=kx直线 (1,4),(2,5),(3,8)

```
 1       4
 2 [k] = 5
 3       9   
```

$a^Ta \hat{k}=a^Tb$

$14\hat{k}=38$

$\hat{k} = \frac{38}{14}$

最小二乘法，看作 把 目标向量 投影到 列向量空间的结果是“最好”

---

4x4 矩阵 $\lambda_{1,2,3,4}$

- $\forall \lambda_i \neq 0$<=> 可逆
- $det(A^{-1}) = \prod \frac{1}{\lambda_i}$
	- $x=Ix=A^{-1}Ax=A^{-1}\lambda x$
		- $A^{-1}x=\frac{1}{\lambda}x$, 总感觉之前和现在一直没证明 有重复存在时的一些对应关系
- $trace(A+I) = \sum_i (\lambda_i+1)$ 

---

```
A4 = [
0,1,0,0;
1,0,2,0;
0,2,0,3;
0,0,3,0
]
det A4=9
```

P=? $A(A^TA)^{-1}A^T$ 可逆矩阵的投影矩阵都是$I$,因为占满了$R^n$

哈哈 "not difficult"


## 26 对称矩阵， 正定性

- symmetric matrices 对称矩阵
- positive definite matrices
- 特征值，和特征向量有何特殊之处

$A=A^T$ 性质
- 特征值 是 实数 （下面证明）
	- 稍后证明
- 特征向量， **是** 垂直的（perpendicular(老师写墙上了黑板不够长)
	- 证明
		- $x_1^TAx_2=x_1^T\lambda_2x_2=\lambda_2x_1^Tx_2$
		- $x_1^TAx_2=x_2^TA^Tx_1=x_2^TAx_1 = x_2^T\lambda_1 x_1$
		- 那么有 $\lambda_1 x_1^Tx_2=\lambda_2 x_2^Tx_1$, 要么正交，要么 相等
			- 这里还说明 $A$和$A^T$ 的不同特征值的特征向量 正交
		
来自复习3 特征向量正交+特征值实数 => 是对称矩阵 prove ???？？？

通常$A=S\Lambda S^{-1}$

那么 对于 对称矩阵，根据上面垂直的性质, $A=Q\Lambda Q^{-1}=Q\Lambda Q^T$, spectral theorem , 力学上 主轴定理

---

why real eigenvalues? 为什么 对称矩阵的特征值一定是实数

$Ax=\lambda x$ 对两边取共轭，有$\bar{A}\bar{x}=\bar{\lambda}\bar{x}$

这里$A\bar{x}=\bar{\lambda}\bar{x}$说明实矩阵 的特征值共轭是成对出现的

转置 $\bar{x}^TA=\bar{\lambda} \bar{x}^T$

$\bar{x}^TAx=\bar{\lambda} \bar{x}^Tx$

$\bar{x}^T \lambda x=\bar{\lambda} \bar{x}^Tx$, 注意到 向量点积是数, 那么取决于$\bar{x}^Tx$的值非0, 只要$x$非全零 显然
- 同时这里知道$\bar{x}^Tx$表示 有复数的向量的长度
- $(\lambda-\bar{\lambda})\bar{x}^T x=0$
	- 得证
- 根据同样的过程也知道如果是复矩阵，只要$A=\bar{A}^T$ 有一样的性质


$A=Q\Lambda Q^T$展开看

$=\sum \lambda_i q_i q_i^T$, 注意每个后面是 投影矩阵，所以 实对称矩阵是 投影矩阵的组合

---

正主元(???)的个数 = 正 lambda的个数 sign of pivot same as sign's of lambda's ????

---

positive definite symmetric matrix 正定对称矩阵

- 所有 特征值 是正的
- 所有 pivots 是 positive
	- $\det = \prod pivots > 0$ 
- all subdeterminants are positive, 所有 余子式非负
- 上面 这三条 是相互可推的？prove？？？？？？

```
5 2 
2 3
主元, 5, 11/5
特征值, 4\pm sqrt(5)
```

## 27 复数矩阵，FFT 傅里叶矩阵
 
相当于一个插入的分支章节

- complex vectors matrices
- inner products
- DISCRETE Fourier FAST Transform
	- Fourier matrix F_n
	- 算法竞赛里 现在NTT更多（数域变为mod 998244353)


$z=[z_1;z_2,\cdots;z_n] \in C^n$ 复数域里的向量 如何算长度

上面有提到$z^Tz$ 不再好 not good

而是 $\bar{z}^Tz$

Hermition写法$z^Hz$ 表示 `共轭`+`转置`, inner product

symmetric $A^T=A$ no good if A complex

$\bar{A}^T=A$或者$A^H=A$ 例如 $[2,3+i;3-i,5]$ 

同时 重新 定义 正交, 也重新定义 $Q$

- $q_i^Hq_j=0,i\neq j$
- $q_i^Hq_j=1,i =j$

unitary matrix酉矩阵, 幺正举证，厄米(Hermitian)共轭， 其中unitary是归一或单位的意思
- “酉”是Unitary的音译，据说是华罗庚的建议_。中英文都有“一”和“元”的意思。同样，后来对“Simplectic”的翻译也遵循了同样的做法，音译为“辛”

---

傅里叶矩阵

It's just math starts counting with one, and electrical engineers start counting at zero. Actually they're probably right So anyway, we'll give them -- humor them

```
0-index Fn = []
1 1       1          ... 1
1 w       w2         ... w^{(n-1)}
1 w^2     w4         
...
1 w^{n-1} w^{2(n-1)} ... w^{(n-1)(n-1)}
```

$(F_n)_{ij}=w^{ij}$

want $w^n=1$, so $w=e^{\frac{i2\pi}{n}}$

对于 n = 4, $w=e^{\frac{2\pi i}{4}}=i$

$F_4=$

```
1  1  1  1      1  1  1  1
1  i  i2 i3  =  1  i -1 -i
1  i2 i4 i6     1 -i  1 -1
1  i3 i6 i9     1 -i -1  i
```

这个矩阵 各列正交，因此 $Q_4 =\frac{1}{\sqrt{4}} F_4, Q_4^HQ_4=I$

$F_4^{-1}=\frac{1}{\sqrt{4}} Q_4^{H}=\frac{1}{\sqrt{4}}Q_4^{-1}=\frac{1}{\sqrt{4}}Q_4^{T}=\frac{1}{\sqrt{4}}Q_4=\frac{1}{4}F_4$, 所以逆举运算和正运算核心一样

这只是离散的傅里叶变换

那么问题是如何快速，也就是降低计算量

```
[F8] = [I  D][F4  O][P  ]
       [I -D][O  F4][   ]

P 的形状: (奇偶穿插矩阵)

1
  1
    1
      1
 1      
   1
     1
       1
D 的形状
1
  w
    w2
       w3
         ...
例子
1  1  1  1  [1    1   ][1 1    ][1    ]
1  i -1 -i =[  1     i][1 i    ][   1 ]
1 -1  1 -1  [1   -1   ][    1 1][ 1   ]
1 -i -1  i  [  1    -i][    1 i][    1]
```

matlab

```
I=[1,0;0,1];

D=[1,0;0,i];

O=[0,0;0,0];

F2=[1,1;1,i];

P=[1,0,0,0;0,0,1,0;0,1,0,0;0,0,0,1];

F4=[I,D;I,-D]*[F2,O;O,F2]*P;
```

伪代码+复杂度

```
f_8(x): F_8 * x
	最右侧矩阵
	px = p_8 * x, n次计算（换奇偶
	px_0,px_1 = px, 分成前一半和后一半
	中间矩阵
	tmp_x_0 = f_4(px_0)
	tmp_x_1 = f_4(px_1)
	最左矩阵
	res_x_0 = tmp_x_0 + D * tmp_x_1, n次计算
	res_x_1 = tmp_x_0 - D * tmp_x_1, n次计算
	return concat(res_x_0,res_x_1)

f_n(x) 的运算量 = 3n + 2*f_{n/2}(x) 所以总运算量是n log n
```

算法竞赛中，因为浮点数准确问题，采用了NTT,其核心原理就是

- fft的数域是复数域，用的F_n中的w 是满足 $w^n=1,w^{<n} \neq 1$的也就是$e^{\frac{i2\pi}{n}}$
- NTT的数域是mod p(p是质数，最常见的是$998244353$ 因为p-1含有p原根的较高次幂的因数),用的F_n中的w也是满足 $w^n\equiv 1 \pmod{p},w^{< n}\equiv 1 \pmod{p}$ 所以两个是“一致逻辑”的，而NTT全是整数运算，不用担心精度，作为算法正确性校验更友好

## 28 正定矩阵

- 正定 首先是对称矩阵 $A=Q\Lambda Q^T$

- Positive Definite matrix(Tests) 如何判断正定矩阵
- Tests for Minumum (x^TAx >0) Ellipsoids in $R^n$， 找极小值

why什么对正定性感兴趣，椭圆/双曲线

从2x2矩阵开始`[a,b;b,c]`

判定方式
- 特征值均正 $\lambda_1 >0, \lambda_2 >0$, 有等于零 则 是semi半正定
- 从左上角的子det均正 $a >0,ac-b^2>0$ 
- rref以后的主元为正，pivots $a > 0, \frac{ac-b^2}{a} > 0$
- $x^TAx > 0$

```
2 6
6 (那么这里要 大于 6^2/2 = 18)
```

如果18,那么 半正定 pos semidefinite,

- 有特征值0
- only 1 pivots
- $x^TAx=2x_1^2+12x_1x_2+18x_2^2$


matlab 

```
f=@(x,y) 2*x.^2+12*x.*y+1*y.^2;

fsurf(f,[-10,10,-10,10]);
```

非正定：二维向量$x=[x_1;x_2]$那么$y(x_1,x_2)$马鞍面：某个点 一个方向的极大值，另一个方向的极小值

正定 $x^TAx$除了$0,0$处处为正

- 微积分： 最小值 二阶导数为正
- 18.06： matrix 是 pos def(正定)

$2x^2+12xy+24y^2$ 在 >0的横截面 还是椭圆

$=2(x+3y)^2+4y^2=1$是个椭圆， 这里(2,4)是主元，而3是消元时的倍数

```
[2 6]
[6 24]

= LU
= [1  ][2 6]
  [3 1][  4]

2阶导矩阵 一定程度上是，这里还有额外的幂次2
[fxx  fxy]
[fyx  fyy]
```

---

例子3x3

```
 2 -1  0
-1  2 -1
 0 -1  2

dets: A_1 = 2, A_2 = 3, A_3 = 4

pivots 2,3/2,4/3 (因为 prod pivots = det, 所以pivot_i = det_i/det_{i-1})

eigenvalues: 2-sqrt(2),2,2+sqrt(2)
```

关联函数 $x^TAx = 2x_1^2+2x_2^2+2x_3^2-2x_1x_2-2x_2x_3 > 0$

在大于 0 的位置切割，得到椭圆体（3个主要方向（3个特征值不同））

## 29 相似矩阵，Jordan form 若尔当形

- $A^TA$ is positive definite
- similar matrices A,B， $B=M^{-1}AM$, Jordan form

正定矩阵:
- 与最小二乘法有关
- $x^TAx >0,x \neq 0$

A是正定矩阵,A的逆是什么？
- 特征值 = 1/原矩阵的特征值，所以$A^{-1}$也是正定的

A,B是 正定的
- A+B: $x^T(A+B)x > 0$ 所以也是正定的

A是长方形 $A^TA$ 是正定的吗？
- $x^TA^TAx = (Ax)^T(Ax)$ 非负，半正定的
	- 如果 A的列线性无关，则是正定的

---

A,B相似，意味着,存在$M$

$B=M^{-1}AM$
- 性质： 相似矩阵有相同的特征值，因为她们都能变化为 特征值的对角矩阵, 但这个性质不充分，见下
- 
- $Ax=\lambda x$
	- $(M^{-1}AM)(M^{-1}x)=\lambda(M^{-1}x)$
	

核心依然是 $S^{-1}AS=\Lambda$, $S$是特征向量矩阵

$A=[2,1;1,2], B=[-2,-15,1,6]$

它们有相同“特征值”

---

bad case, 如果有重复的特征值，可能无法对角化

```
4 0
0 4
和
4 1
0 4
不属于同一类 （不相似）
```

注意到第一个 $M^{-1}AM=A$ 相似的 只有它自己

第二个是，jordan form 最接近标准型 但是又不相似于标准型

例如

```
 5  1
-1  3
相似于
4  0
17 4
```

Jordan block(每个block有一个 evector)

```
0100
0010
0000
0000
和
0100
0000
0001
0000
不相似
```

Jordan定理： 每个方阵A 相似于 Jordan matrix J
- 也就是解决 特征值重复的问题
- 现在 主要关注还是上面的可分解型，没有关注这种形式

```
J1
   J2
      J3
         ...
J的数量 = evector的数量
```

## 30 奇异值分解

- Singular Value Decomposition (SVD)
- $A=U\Sigma V^T=U\Sigma V^{-1}$, 两边是 正交矩阵，中间是对角矩阵
	- A=(orthog)(diag)(orthog) every A
	- 对角一定非负（视频33）
		- 下面计算过程表示了Lambda一定是正的，这里开根 不能取负号吗？？

回顾之前

- 对于一般可逆矩阵有$A=S\Lambda S^{-1}$ 这个的缺点就是$S$的列不是正交的，
- 对于实对称矩阵（包含 正交矩阵），有$A=Q\Lambda Q^T$

希望 $AV=U\Sigma$

- A乘上 来自行空间的基列向量V, = 来自列空间的基列向量U * 对角乘数因子Sigma
- 因此 $Av_i = u_i\sigma_i$
- 目标： to find an orthogonal basis in the orthonormal, even basis in the row space and an orthonormal basis in the column space

例子

```
 4 4
-3 3
找 v1,v2 in row space R^2， v1,v2 标准+正交
找 u1,u2 in col space R^2， u1,u2 标准+正交
以及 sigma_1,sigma_2 > 0
```


$A=U\Sigma V^{-1}=U\Sigma V^{T}$

$A^TA=V\Sigma^TU^TU\Sigma V^{T}=V\Sigma^2V^T$

$AA^T=U\Sigma V^{T}V\Sigma^TU^T=U\Sigma^2U^T$

- 它们 特征值相同, AB和BA特征值相同

因此 $V,U$分别为$A^TA,AA^T$的 正交化的特征向量组成的矩阵, 注意两边的Sigma中的特征值顺序要一致, 另外的 注意上面的 U,V的正负号 因为平方的原因 没有影响， 所以需要“指定”夷夏政府 再回到 $Av_i=u_i \sigma_i$ 确定符号

$\Sigma$为 $A^TA,AA^T$的特征值开根

```matlab
A=[4,4;-3,3];

ATA=A'*A;

[V,D1]=eig(ATA); % D1是特征值对角矩阵, V是norm 特征向量矩阵

AAT=A*A';

[U,D2]=eig(AAT); % D2 == D1

S=sqrtm(D2); % Sigma = sqrt(

U*S*V'; % = A
```

---

例子2, rank=1

```
A=
4 3
8 6
```

row space: k[4;3]

col space: [4;8]

`v_1 = 1/5[4;3]= [.8;.6]`

`u_1 = [1/sqrt(5);2/sqrt(5)]`

```
4 3          [1  2][sqrt(125)  ][.8  .6]
8 6 =(1/sqrt5[2 -1][          0][.6 -.8]
A     U            Sigma         V^T
```


## 31 线性变换 及 对应矩阵

Linear transformations
- without coordinates: no matrix
- with coordinates -> matrix

线性变换
- T(v+w)=T(v)+T(w)
- T(cv) = cT(v)

例1: projection 投影

T: $R^2\to R^2$

例2: shift whole plane, 平移整个面点。不是线性变换

例3: T(v)=||v||^2不是线性变换

例4: 旋转45度,是线性变换

例5: T(v)=Av,是线性变换

例6: $T(v)=A_{2\times 3}v$ 这里$T:R^3\to R^2$,是线性变换,

那么对于一个线性变换T的“关键要素有什么”
- 其实是 对输入进行基的拆解，然后T只关心对 基的变换，变换后再组合（而这可以拆分与组合 正式因为T是线性变换）
- 那么 coordinates是 所选定基的拆分结果而已

那么目标，对于给定的 $T:R^{n}\to R^m$,希望找一个$A_{m\times n}$来描述

所以 A的第i列表示输入的第i个基 变为的新的基的 坐标

---

例子 求导， $T=\frac{d}{dx}$

输入 $c_0+c_1x+c_2x^3$, 基$1,x,x^2$

输出 $c_1+2c_2x$, 基$1,x$

```
  c0
A c1 =   c1
  c2    2c2 

A= 0 1 0
   0 0 2
```

## 32  基变换 图像压缩

应用

- change of basis
- compression of Images
- Transformation <-> matrix

lossy compression: 有损压缩

图像存储 = 像素个数 * 颜色 大小的长向量

JPEG = Joint Photograpihc Experts Group

标准基 = $I_n \in R^n$的列向量

better basis

```
1  1      1 
1  1     -1
1 -1      1
1 -1 ... -1
```

JPEG用了 Fourier basis,  $w=e^{\frac{i2\pi}{n}}$

```
signal x
    无损 change basis
coeffs c  <-  线性代数能帮助 系数的计算
    lossy compression
    丢掉肉眼看不见的帧
hat{c}
    复原
hat{x} = sum hat{ci} vi, 不再是64个基向量
```

视频， sequence images, 期望上 连续的图像高度相关，

---

傅里叶基的竞争对手， 小波基 wavelets, FWT, 全是0,-1， 正交的， 也和 傅里叶那样可以快速计算

```
1  1  1  0
1  1 -1  0
1 -1  0  1
1 -1  0 -1
```

change of basis

标准基中坐标x= P新基 c新基中的坐标

$c=P^{-1}x$

然后$P^{-1}$的具体计算要足够快，比如 之前学过FFT的 快速计算 方法

总结：不论是 fft还是fwt
- 能扔掉维度 对视觉影响小
- 快速运算


---

对于一个变换， 如果用 （A和基v...）能表示，用(B和基础w...)能表示，

那么 A和B相似，坐标+相似 乘上M得到另一个里的坐标，同一个东西，那么一定存在可逆$M$$ ????

---

如果 我们的选的 正好是 eigenvector basis, 特征向量基

那么 就会发现 原来的向量就是 各个角度的 特征值倍数的放缩

再换句话说 ，这是 A就是 $\Lambda$


## 33 复习3

大纲

- lambda ,x 特征值和特征向量
	- 解 det lambda-AI
	- 例如 投影矩阵因为幂等性，特征值 只能是0或1
	- 用du/dt=Au解微分方程, e^{At}
	- A=A^T 对称矩阵
		- 特征值 实数
		- 总是存在足够的特征向量 prove?????
		- 特征向量可以构成正交矩阵
			- 一定可以对角化 成 A=Q Lambda Q^T, Q是norm特征向量列
		- 正定矩阵
			- 多种判别法
				- 所有 特征值正
				- rref主元全正
				- $x^TAx >0$
				- 最常用： 主(左上角开始的i * i)子行列式 全正
		- 相似矩阵
			- 特征值一致（必要不充分），且可以转化
			- $A^n 相似于 B^n$
			- 意义 通过不同的基表示同样的东西
		- SVD: $A=U Sigma V^T$ 对于非对称矩阵的 正交矩阵 对角矩阵 正交矩阵 的分解
			

---

题目1: $du/dt=Au=[0,-1,0;1,0,-1;0,1,0]u$

$u(t)=c_1e^{\lambda_1t}x_1+c_2e^{\lambda_2t}x_2+c_3e^{\lambda_3t}x_3$

找特征值: $0, \pm \sqrt{2}i$

$u(t)=c_1x_1+c_2e^{\sqrt{2}it}x_2+c_3e^{-\sqrt{2}it}x_3$

---

orthogonal evectors什么时候 特征向量正交

如果 满足$AA^T=A^TA$，则特征向量正交
- 例如 $A^T=A$，A=Q, $A^T=-A$

---

解的形状 $u(t)=e^{At}u(0)$

if $A=S \Lambda S^{-1}$
- $e^{At}=Se^{\Lambda t}S^{-1}$, 中间 看成 $e^{\lambda_i t}$的对角矩阵


---

A 对称 且 正交矩阵
- 特征值？
	- $|\lambda|=1$
		- $Qx=\lambda x$两边同时求长度$a^Ta$ 可得
- 证明 1/2 (A+I) 是一个投影矩阵
	- 特征值 只有0,1
	- 对称:显然
	- 幂等: 1/4(A^2+2A+I) = 1/2(A+I)? 
		- 因为$A=A^T=A^{-1}$ 得证

## 34 左逆，右逆，伪逆

- Left-inverses
- Right-inverses
- Pseudo-inverses


2-sided inverse

$AA^{-1}=I=A^{-1}A$
- 当 $r=m=n$时 有 这个完美的逆矩阵

列向量线性无关，0/1个解，

$(A^TA)^{-1}A^TA=I$

$A_{\mathrm{left}}^{-1} = (A^TA)^{-1}A^T$ 称作 $A$的左逆矩阵，A可以不是方阵

类似的 ，行向量线性无关

$AA^T(AA^T)^{-1}=I$

$A_{\mathrm{right}}^{-1}=A^T(AA^T)^{-1}$

但是 $AA_{\mathrm{left}^{-1}} =A(A^TA)^{-1}A^T$ 是 投影矩阵！！ 向列向量投影

$A_{\mathrm{right}}^{-1} A$是 向行向量空间的投影矩阵

所以对于可逆矩阵 $Ax$可以看成把一个行空间中的 向量x 投射到列空间中
- 左逆的意思是(列线性无关时） 列空间向量到行空间（更大），再到列空间不变
- 右逆的意思是(行线性无关时） 行空间向量到列空间（更大），再到行空间不变

---

所以理解Ax实际是行空间 到列空间一一对应的转化，只是 不属于行空间的，例如nullspace, 属于大$R^n$的 也会 被映射到列空间罢了
- 也就是，只看定义域（行空间）和值域（列空间））那么A就是一一映射
- 而如果定义域$R^n$,值域$R^m$ 那么就不是一一映射了
- 而这个视角看，那么在缩小定义域和值域的时候，那么映射逆就是 一个很优雅的逆
- 从而 这样去看 转置的意义就哇哦了

既然都是rank(row)=rank(col) 那么有期望 是 row space和col space 中向量一一对应

- x,y 在行空间中，且不同，那么 列空间中$Ax\neq Ay$
	- 理解
	- 如果 Ax = Ay, 有 A(x-y)=0, 说明x,y在nullspace不在行空间，说明 了 不同行空间向量映射到不同列空间向量

---

find the pseudoinverse $A^{+}$

然而是从SVD思考

$A=U\Sigma V^T$

$A^{+}=V\Sigma^{+}U^{T}$ ,其中  所有$\sigma_i$变成$1/\sigma_i$

$\Sigma \Sigma^{+}$  是个对角矩阵，11110000

## 35 期末复习

举例 有正交向量组，但是非实对称的矩阵

- skew-symmetric 反对称: `[0,-1;1,0]`
	- 一般性吗?
		- 同样的方法能得到 当 $\lambda_1 + \lambda_2\neq 0$时特征向量是正交的
		- 那么根据 $x^2-9=x^2-25+16$
			- 容易构造矩阵$[5,4;-4,-5]$ 特征值是$3,-3$			- 而特征向量是`[-2;1];[1;-2]` 果然不正交
- 正交矩阵: `[sin,-cos;cos,sin]`
	- 特征值是1,-1对应两个特征空间，两个特征空间里取分别的正交系
	- 不同特征值 通过 $x_2^Tx_1=x_2^TQ^TQx_1=(Qx_2)^T(Qx_1)=-(x_2)^T(x_1)$ 可以证明只能正交

```
A=[[1;1;1]/sqrt(3),[1;-1;0]/sqrt(2),[1;1;-2]/sqrt(6)]
[V,D]=eig(A)
V'*V;
```


## 想法随记

[matlab](https://matlab.mathworks.com/) 比py的numpy更香，现在还有网页版了, 还有[官方中文入门文档](https://ww2.mathworks.cn/help/matlab/index.html?s_tid=hc_panel)

有些内容用代码 或者 matlab代码可以更好的表述

从多元一次方程组开始，逐个拆分，从小到大，从特例到一般

每次都是例子先行！！相比于定义先行，更intuition！！

习题 的检验反馈环很重要，虽然这个笔记没记录什么习题。

3维作为高维空间，进行子空间关系讲解，拆分的1维空间缺少灵活感

大小写字母在“表现值，向量，矩阵”也有“局限感", 要是有小，中，大 写就好了

所以“有限的练习题”会误以为掌握，所以应该设计无限的练习题，不要依赖于数量来认为是否掌握

矩阵的一些证明，有一种反除法习惯的感觉。

全部学完以后，感觉 中间的4个子空间 非常关键

当一个新的“定理理论”出现时，可以举一个满足的和一个不满足的双向加深理解
## TODO

TODO 相关的???  ？？？prove补充

TODO 自己整理一个速通关键记要