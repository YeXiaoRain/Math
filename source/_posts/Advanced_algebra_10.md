---
title: 高等代数 十 具有度量的线性空间
date: 2022-08-20
categories:
  - 高等代数
tags:
  - 高等代数
---


视频121-144

# 具有度量的线性空间 

考虑在线性空间中 增加长度而概念

<!--more-->

## 10.1 双线性函数

a,b是向量，内积： $a\cdot b = |a||b| cos<a,b>$, ，内积有一 加法乘法 分配，数量乘法，于是在内积之前，引进 双线性函数

定义1. 设V是域F上的一个线性空间V, VxV到F的一个映射f, 如果满足一切的 a1,a2,a,b1,b2,b \in V, k1,k2 \in F 有
- $f(k_1a_1+k_2a_2,b)=k_1f(a_1,b)+k_2(a_2,b)$
- $f(a,k_1b_1+k_2b_2)=k_1f(a,b_1)+k_2(a,b_2)$
- 那么成为是V上的双线性函数
	- 说白了就是，两个入参，都可以“线性”拆开，而之前学的主要是入参只有一个（可以线性拆开），而之前的如果固定一个入参，那么也是线性函数

f(a,b)=f(按照基展开成$\sum$,按基展开成$\sum$)

$=\sum \sum a在基下的每个坐标*b在基下的每个坐标 * f(每个基向量,每个基向量)$

(a的坐标行向量) (n * n 的f(每个基向量，每个基向量)的矩阵) * (b的坐标列向量)，

那么 中间这个矩阵 称作 f在 给定基 下的 “度量矩阵”

---

反过来，对于$A\in M_n(F)$, 那么 可以构造一个$f(a,b)=X^TAY$ 就构造出一个双线性函数，（这里和前面不同的是，这里的 基 和 A决定f的，而前面是 f 和 基 决定 A)

---

定理1. f是域F上的n维线性空间V上的双线性函数，基b=基a * 矩阵C
- 在基a下的度量矩阵是A
- 在基b下的度量矩阵为B
- B = (f(bi,bj)) 矩阵 = ( (c的i列 行向量)A(c的j列 列向量)   ) = $C^TAC$， C是可逆的 ， rank(A)=rank(B)
- 称 A与B是合同的， 也就是合同意味着同一个双线性函数在不同的基下的度量矩阵
	- 自反，对称，传递 => 所以合同是一种等价关系
	- 之前 相似：同一个线性变换 在不同的基下是相似的$B=S^{-1}AS$
- $rank_{matrix}(f)$ 双线性函数的矩阵秩

---

定义3
- 左根 $rad_LV=$ {$a \in V | f(a,b)=0, \forall b\in V$}, 是V的一个子空间
- 右根 $rad_RV=$ {$b \in V | f(a,b)=0, \forall a\in V$}, 是V的一个子空间

定义4： V上的双线性函数f在V中的左根和右根都是0子空间，则称f是非退化的
- 左右根只有0解，那么 rank(V)=n

---

对称双线性函数 f(x,y)=f(y,x) 显然 矩阵是对称矩阵
- 斜对称,反对称 f(x,y)=-f(y,x) skew

同样，希望能选择一组好的基，让度量矩阵尽量简单

---

对于 “内积函数”的度量矩阵来说，如果选取了两两垂直的基来说，可以只有主对角线非零

那么如何找两两垂直的基，对于任意找的基a,b，可以b=b-(b在a方向的投影)，来到了（mit讲过的投影矩阵，然后写法上还有“点乘”，没有直接的矩阵乘法，这点感觉还是mit更好）

---

定理1. 对称双线性函数f，特征不为2，存在一个基，使得度量矩阵是 对角矩阵
- f=0 零函数是对称
- $f\neq 0$ 
	- 若任何f(a,a)=0,有 0=f(a+b,a+b)=f(a,a)+2f(a,b)+f(b,b) 即 f(a,b)=0， （这里需要特征不为2）
	- 所以存在$a, f(a,a) \neq 0$, 然后所有和a投影减去，变成子空间子问题，这里其实就是任选基中 完成一个基的等价变换，而剩余的span成的空间 和 a 的直和 = 原来空间


推论1. 特征不为2 的 域F上的n级对称矩阵A 合同于 一个对角矩阵A
- 合同标准型

定理2. f是特征不为2的 反/斜对称 矩阵 双线性函数，则V中存在一个基，使得f在此基下的度量矩阵是形如下述的分块对角矩阵
- 多个  `[0,1;-1,0]`的对角块

推论2, 特征不为2的域F上的 斜对称矩阵一定相似于

---

几何空间 内积 a * a >= 0, 等号成立当且仅当 a=0


定义1. 实数域上的线性空间V上的对称双线性函数f, 对于任意 向量a,有 $f(a,a)\ge 0$, 等号成立当且仅当 a=0
- 称f是 正定的

命题1. n维实线性空间V上的对称双线性函数f是正定的：
- 当且仅当， f在V的一个基下的 度量矩阵A 满足
	- A是对称矩阵，且 任意x, $x^TAx \ge 0$, 等号成立当且仅当x=0

定义2. n级是对称矩阵A,若满足x!=0, $x^TAx >0$ 则A是正定对称矩阵，简称正定矩阵

定义3. 实线性空间V上的一个 正定的对称双线性函数f  称为V上的一个 内积

若是线性空间V,指定了一个内积，则称V是一个  实内积空间

有限维的  实内积空间  成为 欧几里得空间 

## 10.2 欧几里得空间

例1. 任给x,y,  $f(x,y)=x^Ty=x^TIy$
- 也就是在 基$\epsilon_{1\cdots n}$的坐标
- 是$R^n$上的一个双线性函数
- 称它为 标准内积

设V是实内积空间，

定义4 V中向量a的长度 $|a|=\sqrt {f(a,a)}$
- 根据 双线性函数性质,可证 $|ka|=|k||a|, k\in R,a\in V$
- |a|=1称$a$为 单位向量
	- $a\neq 0$, 则 $\frac{1}{|a|}a$ 是一个 单位向量

几何空间 $a,b$ 的$cos<a,b>=\frac{f(a,b)}{|a||b|}$

定理1. Cauchy-（俄文不会写）-Schwarz 不等式）
- $|f(a,b)|\le |a||b|$, 等号成立 当且仅当 a,b 线性相关
	- 一个是零向量时,(0,a)时证明
	- (a,ka)时证明
	- 对于不相关时 0 < f(ta-b,ta-b)= 关于t的二次多项式
		- 说明判别式 < 0 
		- 得到 上面的要证的部分


定义5 a,b 不等于0, `<a,b>` = arcos (f(a,b)/(|a||b|))
- 夹角 pi/2 <=> f(a,b)=0

定义6, f(a,b)=0, 称a与b正交


定义7. a与b的距离 d(a,b) = |a-b|
- 可以验证 d(a,b)=d(b,a)
- $d(a,b) \le d(a,c)+d(c,b)$ 三角不等式

推论， a，b正交，则 $|a+b|^2=|a|^2+|b|^2$ 勾股定理
- 的确在 向量空间里这些证明起来是快了不少


命题1. 实内积空间V中，由  两两正交的非零向量 组成的集合S一定是线性无关的
- 证， 任取S的一个有限子集 { $a_1,\cdots,a_n$  }
	- $f(a_j,\sum k_ia_i)=0$,  可证明 所有系数只能取0


n维欧几里得空间中，n个两两正交非零向量 是一个基，称作V的一个正交基
- 再加上单位向量，就是 标准正交基

定理1. `[a...]` 线性无关的向量组
- 然后 就开始 schmidt正交化了，很自然的逐个减去投影
- 主要的是证明 可线性表出？
	- 一点点归纳的感觉

推论2. 一定有 标准准正交基
- 取基
- schmidt 正交化
- 单位化 所有基向量


内积 在给定基 下的度量矩阵，称为 基a_{1..n}的度量矩阵

---

这里的最重要的是  定义度量矩阵，即使不是常见的点积，也有对应的 长度等的定义

性质1. $f(a,b)=x^TIy$

性质2. v在 标准基$a_i$ 下的第i各坐标为 $f(v, a_i)$, 这里有了用 标准正交基 和 内积 来反求坐标的下标

定理2. $a_i$ 是n维欧几里得空间的一个标准正交基
- (b_i) = (a_i) P
- 如果 (b_i) 是一个 标准正交基
	- <=> P的性质，$P^TP=I$,P是正交矩阵

性质1，I是正交矩阵

性质2，正交矩阵的乘积还是正交矩阵
- $(AB)^T(AB)=I$

性质3. A是正交矩阵，$A^{-1}=A^T$是正交矩阵

性质4. 正交矩阵 |A| = 1或-1

## 10.3 正交补，正交投影

定义2,S是实内积空间的一个非空子集
- S的正交补 = {$a\in V| f(a,b)=0, \forall b \in S$}
- 它 也是 实内积空间
- 注意 这里 S并不要求S是子空间
	- 但从感觉上 和 `span< S >` 就和 之前的直和感觉一样了


定理3. 设U是实内积空间V的一个 有限维子空间
- 则 V 能表示成 U  和  U的正交补 的直和

正交投影： $P_U(a)=a$在空间U的投影， 也就是拆直和时的表示

定理4. a 和 a到U的正交投影，是a到U所有向量的距离是最短的

定义2. a 到 U中最近的向量，称作 a 到 U中最佳逼近元

定义3，设V与V' 都是 实内积空间， 如果 V,V'之间有双射，且保持 加法，数量乘法，内积
- 那么 是 保距同构（线性同构+内积同构）
	- 把V的一个标准正交基 映成V'的一个标准正交基

定理5. 两个欧几里得空间同构
- <=> 有相同的维数
- <=> 本质上就是$R^n$


## 10.4 正交变换与对称变换

定义1. A是实内积空间V上的一个变换
- 如果A是满射，满足：保持内积不变 f(Aa,Ab)=f(a,b)
- 那么A是一个V上的一个  正交变换

性质， A是 实内积 空间V上的正交变换
- |Aa|=|a|
- < Aa,Ab > = < a,b >,
- 保持 垂直
- 正交变换 一定是线性变换
	- 想证明 保持 A(a+b)=Aa+Ab, 可以 去证明$|A(a+b)-Aa-Ab|^2=0$
	- 类似的 证明 A(ka)=kAa
- Ker A =0 所以是单射，加上满射 所以是双射
- 内积不变 距离不变
-  <=> 到自身的同构映射，保距的

正交变换的乘积还是正交变换

命题3. 对于有限维，保持内积，那么是V上的一个正交变换
- 保持内积 f(Aa,Ab)=f(a,b)

正交变换
- 把V的标准正交基 映成标准正交基
- 正交变换 在 标准正交基 下 是 正交矩阵

定理2 A是n维欧几里得空间V上的正交变换，则V中存在一个标准正交基，使得A在此基下的矩阵为下属形式 分块对角矩阵
- 小块是 `[cos,-sin;sin, cos]`, 非小块的对角是 特征值对角

---

定义1. A是实内积空间V上的一个变换，如果A对于任意a,b有
- f(Aa,b)=f(a,Ab) 那么称A是一个对称变换
- 例如 投影变换

命题1. 实内积空间上的 对称变换A,一定是线性变换

命题2 n维欧几里得空间V上的一个线性变换是 对称变换
- A在V的一个标准正交基下的矩阵
- $a_{ij}=f(A基_j,基_i)$
	- 如果A是对称变换 f(变换A a,b)=f(a,变换A b)
	- 即 $a_{ij}=f(基_j,A基i)$
	- $a_{ij}=a_{ji}$ 也就是 在标准正交基下矩阵是对称矩阵


命题3. n级实对称矩阵A 的 特征多项式 f(x)的复根都是实数
- 这里老师强调，实数域上的特征值 肯定是实数，而特征多项式的复根（如果有复数根，也不能称作它的复根，因为域的定义是在实数上）都是实数
	- 很多教材 在域上的描述出现了问题
- 证明 看成 复域上矩阵 $\lambda a^T\bar{a}=(Aa)^T\bar{a}=a^TA^T\bar{a}=a^TA\bar{a}=a^T(A\bar{a})=a^T(\bar{\lambda}\bar{a})=\bar{\lambda}a^T\bar{a}$

命题4. n级实对称矩阵A，不同特征值的特征向量是正交的
- 类似上面，构造$\lambda_0a_0^Ta_1=\lambda_1a_0^Ta_1$
- 这里 其实 就是 点积，mit 上更多是 $a^Tb$, 这里清华的是 f(a,b)


命题5. 设A是实内积空间V上的一个对称变换，如果W是A的一个不变子空间，那么W的正交补也一定是A的一个不变子空间


定理1. 设A是n维 欧几里得空间V 上的一个对称变换，则V中存在一个标准正交基，使它是对角矩阵
- 证明 对维数做数学归纳法
- 找单位特征向量，构成子空间，正交补也是不变子空间
	- 对正交补 归纳法，出来的 基和特征 都可以和前面的单位特征向量正交，组成标准正交基，也有 特征值构成对角

推论1. A是实对称矩阵，存在正交矩阵Q
- $Q^{-1}AQ=$对角矩阵， 此时称 A正交相似于对角矩阵
- 如何求Q
	- 求$|\lambda I - A|$的所有不同根（一定是实数）
	- 对于每个特征值，求 $(\lambda_i I-A)X=0$的基础解系
		- schmidt正交化

## 10.5 酉空间，酉变换，Hermite变换，正规变换

复内积空间

f(ia,ia)=-f(a,a), 这个和正定性矛盾

这里讲的修改看得一头包，感觉还是 f(x,x) = |x|

那么如果x=a+bi, 则需要 $x^Hx = |x|$

这样就更自然 $f(x,y)=x^Hy$,验证一下是双线性即可

然后观察矩阵 $A^H=A$ ,也就是$\overline{A^T}=A$

性质
- $f(a,b)=\overline{f(b,a)}$
- 第一个变量线性, 但注意乘法 $k\in C$
- f(a,a) >=0 等号成立当且仅当 a=0 （正定性
- 那么称它是V上的一个内积

酉(Unitary)空间 = 复 线性空间 + 指定内积

可推出
- 对第二个变量，半线性
- 加法线性，但乘上k,是提出来$\bar{k}$
- $f(a,kb)=\bar{k}f(a,b)$ 一个`半线性函数`

---

定义
- 长度 = sqrt(f(a,b))
- 定义夹角 cos = |f(a,b)|/(|a||b|)
	- 同样 要证明其范围 $\in [0,1]$
	- 一样的思路，先证明线性相关
	- 然后 $0 < f(a+tb,a+tb)=|a|^2+\bar{t}f(a,b)+t\overline{f(a,b)}+t\bar{t}|b|^2$
	- 这里不能用 判别式，然后 drop from sky了一个
		- $t=-\frac{f(a,b)}{|b|^2}$, 其实想法就是 把4项变2项，然后 导出 $|a||b| > |f(a,b)|$
		- $0 \le <a,b> \le  \pi/2$, 在物理里面有的用于 概率 而不是夹角（量子力学中应用小天地）
- 在酉空间中
	- 有了三角不等式
	- 勾股定理
	- 距离

研究 酉空间结构
- n维酉空间 的标准正交基，
- 命题1. 酉空间V中 两两正交的非零向量，组成的集合是 线性无关
- 定义4. n维 酉空间V中，n个两两正交的非零向量成为V的一个正交基，
	- 如果都是单位向量 ，则标准正交基
- 然后像上面提到的特殊的 $f(x,y)=y^Hx$ 称它为`标准内积`


定理2. n维 酉空间V上一定有标准正交基
- V中取 基 => schmidt正交化 => 单位化

定理3. n维酉空间V的一个组标准正交基(a_i), (b_i)
- $f(a,b)=y^Hx$, 在a,b同个标准正交基下的坐标，对于内积容易计算
- (b_i)=(a_i) 矩阵P 
	- 那么 $I=B^HB=(AP)^H(AP)=P^HA^HAP=P^HP$
- 说明 两个标准正交基的过度矩阵是 酉矩阵
	- 酉矩阵 和 单位矩阵区别就是 一个是转置，一个是转置+共轭

正交补
- 定理4. U是酉空间中有限维子空间，则V可以分解成U和U的正交补 的直和
- 有直和拆分，就可以定义正交投影(拆成 两个直和空间的唯一和)，
	- 然后 性质 到U中的投影距离最短

定义6. 酉空间V中的子空间U，a到U中最短的，称作a的最佳逼近元
- 上面 的正交投影 <=> 最佳逼近

定义7. 设V是复（实）内积空间
- 若V中每一个Cauchy序列 （距离可以定义极限），都在V中有极限，则成V是一个 Hilbert空间 
	- 完备化（取极限）

定理5. V是一个Hilbert空间
- 若U是V的一个闭子空间
- 则V中任一向量a在U上都有最佳逼近元，从而V=U直和 U的正交补
	- 证明： 见群表示论， 6.9

两个有限维酉空间同构 => 保持加法 数量乘法 内积，（线性同构+保距）
- 充要条件： 维数相同

定义1. 酉空间V上的一个变换A如果是满射，且满足保持内积，那么称，A是V上的一个酉变换

命题1. 酉空间V上的变换
- <=> A是V到自身的一个同构映射

命题2. n维酉空间V上的变换 A
- 若(Aa,Ab)=(a,b) 则是V上的一个酉变换

命题3. n维酉空间V上的酉变换A的特征值性质：
- 模为1 : $f(a,a)=f(Aa,Aa)=f(\lambda a,\lambda a)=()^H()=|\lambda|^2f(a,a)$ 


命题4. A是酉空间V上的一个酉变换，W是A的一个不变子空间，则 W的正交补，也是A的一个不变子空间
- 任取 b \in W正交补，要证明 任意a\in W, f(Ab,a)=0, 也就是b经过变换后依然在正交补里
	- W中A|W 单射，满射，找原相c。f(Ab,a)=f(Ab,Ac)=f(b,c)=0

定理1. A是n维酉空间V上一个有变化内，则V中存在一个标准正交基，使得A在基下的矩阵是对角矩阵
- 对于 维数 归纳法
	- 特征值 单位向量，子空间，正交补，归纳

推论1. n级酉矩阵A
- $A=Q^{H}\Lambda Q$, （酉相似）于对角矩阵, 注意这里是酉相似不是正交相似 $^H$


---

Hermite 变换：相当于实内积空间的对称变换
- 一定是线性变换
- f(Aa,b)=f(a,Ab)
	- 思路一样，把a,b换成正交基中的向量，从而证明$A^H=A$,， （充要的）
	- 此时称A是一个 Hermite矩阵 或 自伴矩阵


命题3。 n维酉空间上的 Hermite 变换 的特征值

命题4。类似的，不变子空间的正交补也是不不变子空间

---

## 10.6 正交空间与辛空间

物理空间中：

(t,x,y,z)

- 宏观低速 Calieo时空变换 保持内积 $R^4$
- 接近光速 的 Lorentz 变换 不保持 内积
	- 新内积 $f(a,b)=-c^2t_1t_2+x_1x_2+y_1y_2+z_1z_2$
	- 是一个非退化的 对称双线性函数
	- 称作 Mikowski 空间(俄国数学家)
		- $\sigma$是 不同坐标系中的映射
		- $f(\sigma(a),\sigma(b))=f(a,b)$ 保持新的内积
		- $f(a-b,a-b)$称为 a与b的时空间隔平方


定义1. 域F上线性空间V的一个非退化对称化 双线性函数f
- 称为V上的一个内积
- 没有正定性，没有夹角，有正交性

指定了一个内积的域F上的线性空间V 为一个正交空间

辛空间：（反对称）

## 10.7 正交群，酉群，辛群

TODO 视频课没有

## 速览

有一说一，这课在一些抽象程度上比MIT更抽象化，挺好，但是在符号使用上，MIT的$Q,\Lambda$ 带来的体验更好

- 注意到的是
	- 这里定义的“内积”和“常用的内积”是不一样的，这里只要求一些关系，而“常用的内积”是 其中一个特例 称作“标准内积”
	- 如果描述有n维，那么意思是“有限维”
- 双线性函数 f(a,b) = a,b都是向量，可以线性拆到f外
	- 从而 引出 $f(a,b)=x^TAy$, 
	- 其中x,y是a,b在所选基下的坐标
	- 而A叫做度量矩阵
- 实线性空间V上的一个 正定的对称双线性函数f  称为V上的一个 内积
	- 若是线性空间V,指定了一个内积，则称V是一个  实内积空间
	- 有限维的  实内积空间  成为 欧几里得空间 
	- 而 定义了内积f(a,b)，也就基于内积定义了长度，和前面线性空间 相比 多了内积，在研究同构时，会需要内积相等 f(变换A a,变换A b) = f(a,b)
- 正交矩阵:
	- $Q^{T}Q=I$
	- a到  a在U的投影 距离最短
	- 正交补： 类似于之前的 直和的补的部分，但原始的不要求是空间，（其实可以span一下）
- 正交变换
	- 定义是保持 内积
	- 性质是，变换矩阵 是 正交矩阵，空间效果就是无放缩的旋转
	- 最优基下的表示是 对角分块的 小旋转标准型 `[cos,-sin;sin,cos]`
- 对称变换
	- 定义是 f(变换A a,b)=f(a,变换A b)
	- 性质是，对应矩阵 是 实对称矩阵
	- 特征多项式的 复解 全是实数
	- 特点是 $A=Q^{-1}\Lambda Q$,其中Q是标准正交矩阵
	- 求法 和 之前 对角化类似，只是需要标准正交化
- 酉空间
	- 这玩意儿 有啥可视化方法吗？
	- = 复 线性空间 + 指定的 Hermite性 的内积
	- 其核心就是 从实 变 复，然后内积的定义要变一下
	- 然后对应照搬很多前面正交变换相关的内容
	- 酉变换，也就是 复线性空间保距 的变换（某种旋转）
- Hermite变换 （相对于 实空间的对称变换）
	- 类似的定义和性质
	- 特征值 全是实数
	- $A=Q^{H}\Lambda Q$
	