---
title: 概率论基础教程
date: 2025-01-07
categories:
  - 概率论
tags:
  - 概率论
---


前置知识：微积分

9版

isbn 9787111447894

推荐：
- 专业名词出现时有对应英文
- 有小结
- 例题, 感觉选得也挺好的
- 习题 （部分有答案，感觉选题不算紧凑偏题海）
- 理论习题 (有提示)
- 自检习题 （部分有答案，感觉选题不算紧凑偏题海）

<!--more-->

## 1. 组合分析

计数基本法则:
- 两个试验，一个有m种可能，另一个n种可能，一共有mn种可能
- 推广多个试验, 每个m_i种可能，一共$\prod m_i$ 种可能

排列：
- n个元素 的排列方式个数是 n!

n个元素排列，其中n_i个元素相同
- 那么总方案数$\frac{n!}{\prod n_i!}$
- 这个退化到两种相同就是binom, 引出组合

组合：n个种选出r个，有多少种选法
- $\binom{n}{m}=\frac{n!}{m!(n-m)!}=\binom{n}{n-m}$
- 常用 $\binom{n}{r}=\binom{n-1}{r-1}+\binom{n-1}{r}$
- 另一方面 $(x+y)^n=\sum_{i=0}^n \binom{n}{i}x^iy^{n-i}$ 所以也称作二项式系数
	- 推广 多项式系数,n个分成r组，每组n_i个，有多少种分法
	- $=\frac{n!}{\prod n_i!}$
	- 记号 $\binom{n}{n_1,\cdots,n_r}$
	- 多项式定理$(\sum_{r} x_i)^n=\sum \binom{n}{n_1,\cdots,n_r} \prod x_i^{n_i}$

命题6.1 共有$\binom{n-1}{r-1}$个不同的正整数向量满足$\sum_r x_i = n$

命题6.2 共有$\binom{n+r-1}{r-1}$个不同的非负整数向量满足$\sum_r x_i = n$

## 2. 概率论公理

sample space 样本空间 （所有可能的结果）

event 事件
- 交 intersection
- 并 union
- 互不相容 mutually exclusive
- 补
- 运算
	- 基本的交换率
	- De Morgan law
		- 并的补= 补的交
		- 交的补 = 补的并

概率论公理：
- 有人认为 发生频率去定义概率论 会趋于一个值
- 公理1,$P[E]\in [0,1]$, 任何事件E概率在0到1之间
- 公理2,$P[S]=1$, 必然发生事件 概率为1
- 公理3,对任一列互不相容的事件 $P(\cup_{i=1}^{\infty} E_i)=\sum_{i=1}^{\infty} P(E_i)$, 任意一列互不相容的事件，至少有一事件发生的概率等于各事件发生的概率之和
	- 这里的一点是“序列” （在连续型里会讲到）
	- 如果样本空间是不可数集，那么P(E)仅仅针对那些所谓可测的事件进行定义
	- 可以推出 空集事件概率为0
- 随着试验的不断重复，事件E发生的概率以概率1趋近P(E),第8章强大数定律
- 常用命题:
- $P(E)+P(E^c)=1$
- $E\subseteq F$则$P(E)\le P(F)$
- $P(E\cup F)=P(E)+P(F)-P(E\cap F)$ 书上没有交符号，有点看着难受
- 容斥: $P(所有E_i)=\sum (-1)^r P(其中r个并 E_i)$

例5i 也出现了 生日重复概率问题，365种可能

例5m 错排问题/配对问题 ～e^{-1}
- 核心还是两个技巧
	- 容斥
	- $P(=N) = P(\le N)-P(\le N-1)$

例5o, 游程，我看得懂，定义 计算，和概率，但看不懂为啥说 wwwwwwwllll 说明状态在下滑

---

概率：连续集函数
- 递增序列 ,i < j $E_i\subset E_j$
- 递减序列 ,i < j $E_j\subset E_i$
- 如果是递增或者递减序列，那么 $\lim_{i\to \infty}P(E_i)=P(\lim_{i\to \infty} E_i)$
- 证明：
	- F_n表示属于E_n但不属于E_{n-1}前面并的部分
	- 那么 F_n的并 = E_n的并，但是好处是 F_n两两互斥, 互斥的好处就是可以 在P()括号里外穿梭

---

悖论:
- 方案1.
	- 距离1分钟，放入1,2,取出2
	- 距离1/2分钟，放入3,4,取出4
	- 距离1/4分钟，放入5,6取出6
	- 问 1分钟后 有多少个球
	- 会觉得里面有所有奇数球
- 方案2.
	- 距离1分钟，放入1,2取出1
	- 1/2 -> 放入3,4 取出2
	- 1/4 -> 放入5,6 取出3
	- 会觉得所有球都被取出了吗？
- 这里 有点测度论的东西？ 可列可数等势，偶数和正整数个数一样多
- 我们必须认识到上面两种不是悖论 也不违背数学原理
- 方案3
	- 还是每次放是一样的，但是取出是 等概率取出一个
	- 对于1号球，$P(E_n)=$表示n次操作后1号球还未被取走的概率
		- $\prod_n \frac{(k-1)i}{(k-1)i+1}, k=2$, k表示每次放进去的个数
		- $E_n$ 是一个递减事件 （包含关系）
			- P(lim E交)=$lim_{n\to \infty} P(E_{n})=\prod_{i\to \infty} \frac{(k-1)i}{(k-1)i+1}$
			- $\prod_{i\to infty} (1+\frac{1}{(k-1)i})$
			- $\ge \prod_{i=1}^m (1+\frac{1}{(k-1)i})$ 截断
			- $\ge \sum_{i=1}^m \frac{1}{(k-1)i}$ 展开
			- $=\frac{1}{k-1}\sum_{i=1}^m \frac{1}{i}$ 调和级数
	- 类似的 其它球为空的概率 也能得到0
	- $P(每个为空)\le \sum P(i个为空) = 0$

另一个 把 概率解释为确信程度
## 3. 条件概率和独立性

如果 P(F) > 0那么
- $P(E|F)=P(E\cap F)/P(F)$
- 推广 乘法规则 $P(E_1\cap E_2\cdots E_n)=P(E_1)P(E_2|E_1)\cdots P(E_n|E_1\cap\cdots \cap E_n)$

贝叶斯公式
- $P(E)=P(E\cap F)+P(E\cap F^c)$
- $=P(E|F)P(F)+P(E| F^c)P(F^c)$
- $=P(E|F)P(F)+P(E| F^c)(1-P(F))$
- 推广到多个互斥 $F_i$
	- $P(E)=\sum P(E\cap F_i)=\sum P(E|F_i)P(F_i)$


事件H优势比: $\frac{P(H)}{P(H^c)}$
- $\displaystyle \frac{P(H | E)}{P(H^c | E)}=\frac{P(H)P(E|H)}{P(H^c)P(E|H^c)}$
	- 说明 新的 证据E出现后，H的优势比 = 原来优势比 * （H成立E发生概率 比上 H不成立 E发生概率）

全概率公式 $P(E)=\sum_{i=1}^n P(E|F_i)P(F_i)$

$F_i$互不相容事件列，且并为全空间 贝叶斯公式
- $\displaystyle P(F_j|E)=\frac{P(E|F_j)P(F_j)}{\sum_{i=1}^n P(E|F_i)P(F_i)}$
- 一种视角 当证据E成立时，这些假设F_j的成立的概率的计算方式

独立independent事件：
- $P(E\cap F)=P(E)P(F)$ 独立事件有对称性

$P(\cdot | F)$ 是概率
- 也就是 条件概率 满 概率的三条性质 (范围[0,1]， P(S|F)=1, 不相容可加)

## 4. 随机变量

定义在样本空间上的实值函数成为随机变量（random variable）

这里写法P{事件}

对于随机变量X定义如下 $F(x)=P${$X\le x$}, 称为X的累积分布函数（cumulative distribution function）
- 分布函数 为 随机变量小于等于x的概率

离散型随机变量
- 最多 可数个 可能值
- p(a)=P{X=a} 称作 概率分布列(probability mass function)
- $p(i)=c\lambda^i/i!$
	- 利用和为1,可以得到c=$e^{-\lambda}$
	- 对于多段的累积分布函数，其连续区间是 `[,)` 形状的 每个点是右连续的（右极限=点值）

---

### 4.3 期望(expectation / expected value)
- 这块内容，我觉得 普利斯顿那本书的 矩出发的角度很好
- $E[X]=\sum xp(x)$
	- $E[\sum X_i] = \sum E(X_i)$ 来自于 求和的 线性性
- 所有可能值的加权平均
- 类似于质量分布的重心（center of gravity)这一物理概念

命题4.1 $E[g(X)]=\sum g(x)p(x)$
- 如果X是一个离散型随机变量，其可能取值为x_i, 概率p(x_i),那么  有上面表达式
- 证明 可以按照x展开：
	- $\sum g(x)p(x) = \sum_{j} \sum_{g(x_i)=y_j} g(x_i)p(x_i)$ 按照相同g(x_i)值合并
	- $= \sum_{j} \sum_{g(x_i)=y_j} y_i p(x_i)$ 
	- $= \sum_{j} y_i \sum_{g(x_i)=y_j} p(x_i)$ 
	- $= \sum_{j} y_i P(g(X)=y_i)$ 这是按照 事件 * 加权的 表述方式

### 4.5 方差

取值对于均值的偏离程度
- 这里的理由是 $E[|X-\mu|]$ 不方便观察, 所以考虑平方，这样看来的确是 二阶中心矩更 “数学上 顺畅感”
- $Var(X)=E[(X-\mu)^2]=E[X^2]-E[X]^2$
	- 均值类似于重心，而方差类似于惯性矩
	- 标准差(standard deviation) $StDev(X)=SD(X)=\sqrt{Var(X)}$

### 4.6 常见分布

- p成功1-p失败
- n次p, 概率(i) = $\binom{n}{i}p^i(1-p)^{n-i}$

大多服从泊松分布的：
- 一本书里一页或若干页中印刷错误的数量（p小
- 某地居民活到100岁的人数 （p小
- 一天中拨错电话号码的次数 （p小
- 一家便利店里每天卖出狗粮饼干的合数 （p小
- 某一天进入一个邮局的顾客数
- 一年中联邦司法系统中空缺位置数
- 某放射性材料在一个固定时期放射出来的 alpha粒子数
- 如果 n个事件 p小，独立或者弱相依，事件发生次数 近似于 $\sum p_i$的泊松分布


书上这里推$E[X^k]$  不像之前 普林斯顿具体的带入差分方程，而是推 $E[X^k]$和$E[(aY+b)^{k-1}]$的关系 感觉上更妙啊！！！！！！！！！！
- 但始终没提k阶矩

| -                                                           | 描述                                   | E[X]                   | Var(X)                       | P(X=i)                                                               |
| ----------------------------------------------------------- | ------------------------------------ | ---------------------- | ---------------------------- | -------------------------------------------------------------------- |
| 01分布                                                        | 1次操作 成功(=1)p,失败(=0)1-p概率             | p                      | p(1-p)                       | p                                                                    |
| 二项式                                                         | n次独立的0-1操作                           | np                     | np(1-p)                      | $\binom{n}{i}p^i(1-p)^{n-i}$, 先增后减                                   |
| 泊松分布                                                        | n足够大p足够小，而np保持适当大小=$\lambda$ 的二项随机变量 | $\lambda$              | $\lambda$                    | $e^{-\lambda}\frac{\lambda^i}{i!}$上面表达式$np=\lambda$,然后对n取极限          |
| 几何geometric分布                                               | 二项分布直到首次成功                           | $\frac{1}{p}$          | $\frac{1-p}{p^2}$            | $p(1-p)^{n-1}$                                                       |
| 负二项negativ binomial分布                                       | 持续实验直到累计成功r次                         | $\frac{r(r-p+1)}{p^2}$ | $\frac{r(1-p)}{p^2}$         | $\binom{n-1}{r-1}p^r(1-p)^{n-r}$                                     |
| 超几何hyper geometric分布                                        | N球，m白，N-m黑，无放回取出n个，X表示白球数            | $\frac{mn}{N}$         | $np(1-p)(1-\frac{n-1}{N-1})$ | $\frac{\binom{m}{i}\binom{N-m}{n-i}}{\binom{N}{n}}$ 注意这里超界的二项式系数定义为0 |
| zipf分布, 来源于黎曼函数$\zeta(s)=\sum (\frac{1}{i})^s$ 给定国家的家庭收入的分布 |                                      |                        |                              | $\frac{C}{k^{a+1}}$                                                  |

---

### 4.10 分布函数性质

- 非降$a < b, F(a)\le F(b)$
- 左极限0,右极限1
- 右连续（这个普利斯顿教材没提到？）
	- P {a < X <= b} = F(b)-F(a),  

## 5. 连续型随机变量

连续型（continuous）随机变量
- P{$X\in B$} = $\int_B f(x) dx$
- f称为概率密度函数 probability density function
- 单点值概率都为0 （根据微积分知识）

期望
- $E[X] = \int_{-\infty}^{\infty} xf(x)dx$
- $E[g(X)] = \int_{-\infty}^{\infty} g(x)f(x)dx$
	- 类似离散的证明，证明按照x积分 和 按照g(X)算权重是一样的

### 常见例子

#### 均匀分布 uniformly distribution
- f(x)=1,0 < x < 1 ，根据微积分知识 这里左右有没有等号都可以
- f(x)=0 其它
- (a,b)上均匀分布 $f(x)=\frac{1}{b-a}, a < x < b$ 其它位置概率为0
	- 累积分布$F(x)=\frac{x-a}{b-a},x\in[a,b]$
	- E[X]=(a+b)/2
	- Var(X)=(b-a)^2/12

#### 正态随机变量
- $f(x)=\frac{1}{\sigma\sqrt{2\pi}}e^{-\frac{(x-\mu)^2}{2\sigma^2}}$
- 未来中心极限定理会见到
	- 标准化 $Z=\frac{x-\mu}{\sigma}$ 分母是 标准差 不是 方差
- $E[X]=\mu$
- $Var(X)=\sigma^2$
- 哇一张大表

1733年槺莫弗 引入的 ，后面高斯天文中位置预测高斯分布

槺莫弗-拉普拉斯极限定理，n次独立重复实验中，每次成功概率为p,记成功的总次数为S_n, 那么对任意a < b有 当$n\to \infty$ 时
- P{$a\le \frac{S_n-np}{\sqrt{np(1-p)}}\le b$}$\to \Phi(b)-\Phi(a)$
- 证明见 八章中心极限定理，这是一个特例
- 从 图像上能 感觉出这个东西
- 普利斯顿的书上建议的是 >=30次可以用 正态分布估算

#### 指数随机变量

$f(x) = \lambda e^{-\lambda x}, x\ge 0$
- 通常用来描述某个事件发生的等待时间的分布。
- 累积分布 $F(x)=1-e^{-\lambda x}$ 
- 这里书上同样是计算出 $E[X^k]=\frac{n}{\lambda} E[X^{n-1}]$
- $E[X]=\frac{1}{\lambda}$
- $Var(X)=\frac{1}{\lambda^2}$
- 特点：无记忆性
	- P{X>s+t|X>t}=P{X>s}
	- 任意一个零件的寿命，的分布，对于任意t,剩余寿命同一个新的零件的寿命的分布是一样的
	- 失效率$_t=\frac{f(t)}{1-F(t)}$ 危险率函数
		- 指数函数是唯一失效率为常数的分布，（解微分方程）

#### Gamma分布

- $\displaystyle f(x)=\frac{\lambda e^{\lambda x}(\lambda x)^{a-1}}{\Gamma(a)},x\ge 0$
- 有地方也常称为 n-Erlang分布
- 看作是某个事件 总共发生n次 的等待时间分布
	- P{T_n<= t}, 第n个事件发生时刻不超过t
	- =P{N(t) >= n}, t时刻内 发生事件个数大于等于n
	- =$\sum_{j=n}^{\infty}$ P{$N(t)=j$} 对于t时刻内放生次数 进行划分（不相交，并为所有）
	- =$\sum_{j=n}^{\infty} \frac{e^{-\lambda t}(\lambda t)^j}{j!}$ , [0,t]时刻内发生事件数 服从参数为$\lambda t$的泊松分布
	- 两边求导 可以得到 f(t)表达式
- $\Gamma(a)=\int_0^{\infty} e^{-y}y^{a-1}dy$
	- $\Gamma(n)=(n-1)!$

#### 韦布尔分布

- 最初在解释疲劳数据时提出的
- 有关生命线性的领域中 应用广泛
- 当某对象适合“最弱链”模型的时，其寿命就服从 韦布尔分布
	- 很多部分组成 任何一个部分毁坏 生命就终结，
- 分布函数 $F(x)=1-exp(-(\frac{x-v}{a})^b), x > v$
- 求导后得到概率密度函数

#### 柯西分布

$f(x)=\frac{1}{\pi} \frac{1}{1+(x-\theta)^2}$

例6b
- (0,1)处 有一束光，夹角服从 -pi/2 ~pi/2的均匀分布，照到y=0也就是x轴上的点的x坐标的X随机变量
- $F(x)=\frac{1}{2}+\frac{1}{\pi} arctan(x)$
- $f(x)=\frac{1}{\pi(1+x^2)}$

#### beta 分布

$f(x)=\frac{1}{B(a,b)}x^{a-1}(1-x)^{b-1}, x\in(0,1)$
- $B(a,b)=\int_0^{1}x^{a-1}(1-x)^{b-1}dx$
	- $B(a,b)=\frac{\Gamma(a)\Gamma(b)}{\Gamma(a+b)}$
- 对于 一段 [c,d]随机先现象建立模型，
	- a=b时关于 (c+d)/2对称
	- b>a时 向左侧偏移（取小值可能性更大）
	- a>b时 右侧偏移 取大值 可能性更大
- $E[X]=\frac{a}{a+b}$
- $Var(X)=\frac{ab}{(a+b)^2(a+b+1)}$

## 6. 随机变量的联合分布

联合概率分布函数 joint cumulative probability distribution function

F(a,b)=P{X<=a,Y<=b} 
- $F_X(a)=F(a,\infty)$ 称作边缘分布 marginal distribution
- p(a,b)=P{X=a,Y=b} 联合概率分布列 joint probability mass function

联合连续的 jointly continuous 
- 存在一个定义于任意实数x和y上的函数f(x,y)满足，任意实数对集合C
- P{(X,Y)\in C} = $\int\int_{(x,y)\in C} f(x,y) dx dy$

联合密度函数 joint probability density function
- C={X\in A, y \in B}
- P{X\in A,Y\in B}=$\int_B\int_A f(x,y) dx dy$
- $f(x,y)=\frac{\partial^2}{\partial a\partial b} F(a,b)$

独立的independent,
- P{$X\in A,Y\in B$}=P{$X\in A$} P{$Y\in B$}
- $F(a,b)=F_X(a)F_Y(b)$
- $p(x,y)=p_X(x)p_X(y)$

独立变量之和
- $f_{X+Y}(x)= f_X与f_Y的卷积 = \int f_X(a-y)f(y)dy$
- 对于累积分布 $F_{X+Y}(x)=\int F_X(a-y)f_Y(y)dy$, 注意这里积分部分一个是累积分布一个是概率密度，不如上面的概率密度的那么好看
- 这要是出现在 上面具体分布之前就好了，每次分布可以讨论
- 这里 很特点很重要的一个就是正态分布, 多个独立的正态分布的随机变量和 的分布还是正态分布，且满足 期望和方差都是对应的和
	- $\sum X_i \sim N(\sum \mu_i,\sum \sigma_i^2)$
- 泊松分布之和 $\sim 泊松(\sum \lambda_i)$
- 二项分布之和 $\sim 二项(\sum n_i,p)$

例5c t分布, $Z\sim N(0,1), Y\sim \mathcal{X}^2_n$
- $T=\frac{Z}{\sqrt{Y/n}}$ 自由度为n的t分布
	- 卡方分布 $f_Y(y)=\frac{e^{-y/2}y^{n/2-1}}{2^{n/2}\Gamma(n/2)}$
	- t分布 $f_T(t)=\frac{\Gamma(\frac{n+1}{2})}{\sqrt{\pi n}\Gamma(\frac{n}{2})}(1+\frac{t^2}{n})^{-(n+1)/2}$

例5d 二元正态分布
- TODO

---

6.6 次序统计量 order statistics
- X_i 是n个独立同分布, 概率密度函数f(x)
- $X_{(i)}$ 是它们排序后的值
- $f_{次序统计量联合密度}(x_1,\cdots,x_n)=n! \prod f(x_i)$ 其中$x_i$单调

---

6.7 随机变量函数的联合分布

$X_1,X_2$是联合连续的随机变量，具有联合密度函数$f_{X_1,X_2}$, $Y_1,Y_2$为$X_1,X_2$的函数，有时我们需要求$Y_1,Y_2$的联合分布
- 具体说 $Y_1=g_1(X_1,X_2),Y_2=g_2(X_1,X_2)$
	- 1. 由方程组 $y_1=g_1(x_1,x_2),y_2=g_2(x_1,x_2)$ 可以唯一的解出$x_1,x_2$来
	- 2. $g_1,g_2$对于一切$(x_1,x_2)$有连续偏导数，J(x1,x2)=$\frac{\partial g_1}{\partial x_1}\frac{\partial g_2}{\partial x_2}-\frac{\partial g_1}{\partial x_2}\frac{\partial g_2}{\partial x_1}\neq 0$ 也就是$|\frac{\partial g_i}{\partial x_j}|$的行列式
	- $f_{Y_1,Y_2}(y_1,y_2)=f_{X_1,X_2}(x_1,x_2)|J(x_1,x_2)|^{-1}$
		- 证明原理 就是 统计累积 相等 从而偏微商相等
	- 对于 n维 到 n维度的转换同理
		- $f_{Y_i\cdots}(y_i\cdots)=f_{X_i\cdots}(x_i\cdots)|J(x_i\cdots)|^{-1}$

---

6.8 可交换，交换后 联合累积分布不变
- 对于离散的来说，交换后对称具体点 概率相等
- 对于单个变量 分布相同
## 7. 期望的性质

- 可以看成加权平均
	- 所以如果 $P(x\in[a,b])=1$ 那么 $E[X]\in [a,b]$

二元函数:
- $E[g(X,Y)]=\sum_{y}\sum_{x} g(x,y)p(x,y)$
- $E[g(X,Y)]=\int_{y}\int_{x} g(x,y)f(x,y) dxdy$

样本均值 $\bar{X}=\sum \frac{X_i}{n}$

boole不等式 P(事件并) <= P(事件)的和

二项随机变量的期望 E[X]=n个 0-1分布=np

负二项分布变量均值，成功概率p,直到r次成功总次数
- $X=\sum X_i$, 其中$X_i$ 表示 从$i-1$次成功以后到i次所需要的次数，都是 1/p
- 所以 $E[X] = r/p$

超几何随机变量的均值，N球，m白，取出n, X=白球的个数期望
- $X_i=$ 第i个白球被取出
- $X=X_1+\cdots+X_m$
- $E[X_i]=\frac{n}{N}$
- $E[X]=nm/N$

配对数： n人n个帽子，拿到自己帽子期望
- X_i 第i个人拿到自己帽子期望 = 1/N
- $E[X]=1$

每次获得 1~n中一个数，问 1~n全部获得至少一次的期望数
- X_i已经获得i-1个，再获得下一个所需要的 次数, 
- P{X_i=k}=$\frac{N-i}{N}(\frac{i}{N})^{k-1}$
- $E[X_i]=\frac{N}{N-i}$

这里好几个例子看似有关联，但实际上的确可以看作独立事件，好神奇

---

7.3 试验序列中 事件发生次数的 矩
- 事件 $A_1,\cdots,A_n$
- 示性变量 $I_i=bool(若A_i发生)$
- $X=\sum I_i$
- $E[X]=E[\sum I_i]=\sum E[I_i]=\sum P(A_i)$
- 从意义上看 $E[\binom{X}{2}]=\sum_{i< j}P(A_i\cap A_j)$ 成对发生的次数
- $Var(X)=E[X^2]-E[X]^2=\sum P(A_i\cap A_j)$
- 类似的 $E[\binom{X}{k}]=\sum_{k个从小到大}P(A_{i_1}\cap\cdots\cap A_{i_k})$ k对发生的次数
- 这种方法 也可以算k阶矩 $E[X^k]$
	- 二项随机变量的矩 $E[X(X-1)\cdots(X-k+1)]=n(n-1)\cdots(n-k+1)p^k$
	- 超几何随机变量的矩 $E[X(X-1)\cdots(X-k+1)]=n(n-1)\cdots(n-k+1)\frac{m(m-1)\cdots (m-k+1)}{N(N-1)\cdots (N-k+1)}$
	- 配对问题中的矩 $E(X(X-1)\cdots(X-k+1)]=1$

---

命题4.1 X,Y相互独立，那么对于任何函数h,g 有
- $E[g(X)h(Y)]=E[g(X)]E[h(Y)]$

#### 协方差

- 定义：$Cov(X,Y)=E[(X-E[X])(Y-E[Y])]$
- 独立 => 协方差  =0
- 协方差 = 0 => 不一定独立
- Cov(X,Y)=Cov(Y,X) 对称性
- Cov(X,X)=Var(X) 上面的成对问题
- Cov(aX,Y)=aCov(X,Y) 变量数量倍数
- Cov(\sum X,\sum Y)=\sum \sum Cov(X,Y) 线性加
- Var(\sum X_i)=\sum Var(X_i) + 2 \sum \sum_{i<j} Cov(X_i,X_j)
- $Cov(\bar{X},X_i-\bar{X})=0$
- 相关系数 $\rho(X,Y)=\frac{Cov(X,Y)}{\sqrt{Var(X)Var(Y)}}$

样本均值 $Var(\bar{X})=\frac{\sigma^2}{n}$

样本方差$S^2$
- 自由度 n-1
- $E[S^2=\sum \frac{(X_i-\bar{X})^2}{n-1}]=\sigma^2$
- $\frac{n-1}S^2/\sigma^2 \sim \chi^2_{n-1}$ (通过矩母函数证明)

---

#### 条件期望
- $E[X|Y=y]=\sum_x xp_{x|y}(x|y)=\sum_x x\frac{p(x,y)}{p_Y(y)}$
- $E[X|Y=y]=\int x p_{x|y}(x|y) dx=\int x\frac{p(x,y)}{p_Y(y)} dx$
- 类似的 条件下的方差定义
	- $Var(X|Y=y)=E[(X-E[X|Y=y])^2|Y=y]$
		- 条件方差公式 $Var(X)=E[Var(X|Y)]+Var(E[X|Y])$ 


$E[X|Y]$表示随机变量Y的函数，本身是一个随机变量不是值
- 在Y=y处的值为 $E[X|Y=y]=\sum_x xP(X=x|Y=y)$

命题5.1 $E[X]=E[E[X|Y]]$
- $E[X]=\sum_y E[X|Y=y]P(Y=y)$
- $E[X]=\int E[X|Y=y]f_Y(y) dy$

#### 条件期望及预测
- 观测到X,基于X对第二个随机变量进行预测，
- 预测值 g(X) 希望 最接近Y
- $E[(Y-g(X))^2]$ 来度量
- 要证明的结论 $g(X)=E[Y|X]$ 是最优的

命题6.1： 
- $E[(Y-g(X))^2]\ge E[(Y-E[Y|X])^2]$
- 证明 $E[(Y-g(X))^2 | X]= E[(Y-E[Y|X]+E[Y|X]-g(X))^2 | X]$
- $= E[(Y-E[Y|X])^2|X]+E[(E[Y|X]-g(X))^2|X]+2E[(Y-E[Y|X])(E[Y|X]-g(X))|X]$
- 对于最后一部分 $E[(Y-E[Y|X])(E[Y|X]-g(X))|X]$ 
	- 因为 $E[(E[Y|X]-g(X))|X]=(E[Y|X]-g(X))$ 
	- $E[(Y-E[Y|X])(E[Y|X]-g(X))|X]$ 
	- $=(E[Y|X]-g(X))E[(Y-E[Y|X])|X]$ 
	- $=(E[Y|X]-g(X))(E[Y|X]-E[Y|X])$ 
	- $=(E[Y|X]-g(X))\cdot 0$
	- $=0$

---

#### 矩母函数: $M(t)=E[e^{tX}]$


- $M(t)^{(n)}=E[X^ne^{tX}]$ 求导
	- $M(0)^{(n)}=E[X^n]$ 求导
- 重要的性质
	- 随机变量矩母函数 唯一地确定它的分布（普林斯顿 说 有限制 在0点附近邻域可微，否则需要傅里叶分析更）
	- $M_{\sum X_i}(t)=\prod M_{X_i}(t)$ 对于独立的分布的和
		- 利用矩母函数 容易证明 几个稳定分布：正态，泊松，Gamma 分布
		- 类似的 当给定一个 随机变量X， 想要证明 g(X)满足什么分布，可以用矩母函数作为工具
- 正态分布$M(t)=e^{\mu t +\sigma^2 t^2/2}$
	- 标准正态分布$M(t)=e^{t^2/2}$

P285 有个整理表

## 8. 极限定理

重要的理论结果
- 大数定律：建立 P(事件 与 常数) 与 均值，方差 的 关系
	- 马尔可夫不等式：a > 0, X 非负, 只用了 均值 $E[X]$
		- P(X >= a) <= $E[X]/a$
			- 证明 $[x >= a] = I指标函数 <= X/a$， 两边取期望
	- 切比雪夫不等式：用了 均值 与 方差， 均值方差都有限
		- $P(|X-\mu|\ge k)\le \frac{\sigma^2}{k}$
		- 多用了 方差，会更“准确”，但对于一些具体的 实例会看到依然只是个很远的上界，（通常情况下，得到的概率上界与实际概率相差较大
		- 一些科学家 会用这个来说 9?% 的估计 在 多少范围
		- 单边切比雪夫不等式 $P(X \ge a) \le \frac{\sigma^2}{\sigma^2+a^2}$
- 中心极限定理：足够多独立同分布的 大多数分布 都将收敛于 正态分布
	- 独立同分布 $P(\frac{\sum X_i - n\mu }{\sigma\sqrt{n}}\le a) \to \frac{1}{\sqrt{2\pi}}\int_{-\infty}^a e^{-x^2/2} dx$ 当$x\to \infty$ 这里的a的作用是闭区间，因为这证明用的是0点展开？
	- 相互独立$P(\frac{\sum (X_i - \mu_i) }{\sum \sqrt{\sigma_i^2}}\le a) \to \frac{1}{\sqrt{2\pi}}\int_{-\infty}^a e^{-x^2/2} dx$ 当$x\to \infty$ 这里的a的作用是闭区间，因为这证明用的是0点展开？
	- 证明核心 可以 矩母+极限（泰勒展开）
	- 历史注记： 拉普拉斯

---

8.4 强 大数定律
- 独立同分布的随机变量序列的均值，以 概率1 收敛到分布的均值
- $X_i$独立同分布
- 以概率1 成立$n\to \infty$时 $\bar{X} \to \mu$, 
- 换句话说，如果我们无法知道内在的概率，而可以做实验，那么实验次数无限大时，实验结果的均值就是其内在不可直接知晓的均值
	- 注意到用内在概率 定义事件的发生函数，从而 可以实验的 发生函数的期望 趋于 内在概率

---

其它 不等式
- 标准正态 切尔诺夫界$Z\sim N(0,1),M(t)=e^{t^2/2}$
	- $P(Z\ge a)\le e^{-ta}e^{t^2/2}$
	- 其中$t=a$时 达到极小值$P(Z\ge a)\le e^{-a^2/2}$
- 泊松 切尔诺夫界
	- $M(t)=e^{\lambda(e^t-1)}$
	- $P(X\ge a)\le e^{\lambda(e^t-1)e^{-at}},t>0$
	- $e^{t}=a/\lambda$时达到最小值$P(X\ge a)\le \frac{e^{-\lambda}(e\lambda)^a}{a^a}$
- 詹森不等式， f(x)凸函数，$E[x]$存在且有限
	- $E[f(X)]\ge f(E[X])$, 证明 泰勒展开

## 9. 概率论的其他课题

泊松过程

某一事件在任一时刻发生
- $N(t)$表示在时间段$[0,t]$内发生的事件数
- 随机变量集合 {N(t),t>=0}称为具有强度$\lambda$的泊松过程$(\lambda >0)$
	- 如果 N(0)=0 从0时刻开始
	- 在不相交的时间段内发生的事件数是相互独立的
	- 在给定时间段上发生的事件数的分布只跟该时间段的长度有关，而与时间段位置无关
	- $P(N(h)=1)=\lambda h + o(h)$
	- $P(N(h)\ge 2)=o(h)$
- 是服从 参数为$\lambda t$ 的泊松分布

引理 1.1 对于强度$\lambda$的泊松过程
- $P(N(t)=0)=e^{-\lambda t}$
- $P_0(t+h)=P(N(t+h)=0)$ 令
- $=P(N(t)=0,N(t+h)-N(t)=0)$ 状态分解
- $=P(N(t)=0)P(N(t+h)-N(t)=0)$ 利用独立性
- $=P(N(t)=0)P(N(h)=0)$ 利用只与长度有关
- $=P_0(t)P_0(h)$ 变形
- $=P_0(t)[1-\lambda h + o(h)]$ 利用 性质4 的补

即 $\frac{P_0(t+h)-P_0(t)}{h}=-\lambda P_0(t)+\frac{o(h)}{h}$
- 令h趋于0, $P_0'(t)=-\lambda P_0(t)$, 右边是高阶无穷小 趋于0
- 微分方程解 = $P_0(t)=Ke^{-\lambda t}$
	- 带入特解$P_0(0)=P(N(0)=0)=1$得到$P_0(t)=e^{-\lambda t}$
	- 看起来像指数型随机变量 无记忆性
- $T_n$ 表示第n-1个事件 到 第n个事件发生的时间间隔
	- $P(T_1 > t)=P(N(t)=0)=e^{-\lambda t}$
		- 也就是 $T_1$具有均值 $1/\lambda$ 的指数分布

命题 1.1 强度为$\lambda$的泊松过程的时间间隔 $T_i$ 相互独立，且服从均值为$1/\lambda$的指数分布
- $S_n=\sum_n T_i$ 具有 参数为$n, \lambda$的Gamma分布
	- 概率密度函数$f(x)=\lambda e^{-\lambda x}\frac{(\lambda x)^{n-1}}{(n-1)!}$

定理1.1 对于强度为$\lambda$的泊松过程
- $P(N(t)=n)=\frac{e^{-\lambda t}(\lambda t)^n}{n!}$
	- =P(N(t)>=n)-P(N(t)>=n+1)
	- =P(S_n <= t) - P(S_n <= t+1)
	- = 两个概率密度函数积分差

---

马尔可夫链：下一个状态只由上一个状态和概率函数决定，对于更早的不关心，很像动态规划，只是概率的
- $X_i$ 表示i时刻的状态
- $P(X_{t+1}=j|X_{t}=i)=P_{ij}$ 表示不论时刻的，当前状态是i,那么下一个状态是j的概率
	- $(\sum_j P_{ij})=1$
- 设所有可选状态 是 0~m中的整数
- 因此 可以有 m * m 的概率转移矩阵

命题2.1 查普曼-科尔莫戈罗夫方程
- $(P^{n})_{ij}=\sum_{k=0}^M (P^r)_{ik} (P^{n-r})_{kj}$
- 注意 这里书上$P_{ij}^n$, 它并不是 $P_{ij}$的n次方，而是n次移动$P^n$，从$i$到$j$的概率
	- $(P^n)_{ij}=P(X_{n+m}=j | X_m=i)$

定理2.1 对于遍历的(?)马尔可夫链，
- $\pi_j=\lim_{n\to \infty} (P^n)_{ij}$ 也就是 无论初始是什么i, 无限大移动后，收敛到只和j有关的数，从线性代数的观点上看，转移矩阵最后会达到一个稳态
- 存在，并且 是 $\sum \pi_j =1, \pi_j=\sum_{k=0}^M \pi_kP_{kj}$ 的 唯一非负解
	- 从极限角度看 稳态会有这个结果
	- 但这个方程组，是 M 元，M+1个等式 的线性方程组, 如何唯一非负解？

---

惊奇 不确定性，熵
- S(p 概率)
- 公理1. S(1)=0 一定发生的事件 不会 惊奇
- 公理2. p < q则S(p) > S(q), 随着概率增大 越来越不惊奇
- 公理3. S(p) 连续
- 公理4. S(pq)=S(p)+S(q), 这里希望的满足后验概率的转移情况
- 定理3.1 若S() 满足 公理1~3 则 $S(p)=-C\log_2P$
	- 证明 $S(p^x)=xS(p)$ 可`加 => 整数 => 1/n 整数倒数 => m/n 有理数 => 稠密+连续 所有非负实数
	- 那么希望 $S(p)=xS(v)$, 其中v是常数, $p=v^x$, $S(p)=\log_v p S(v)$
		- 例如$v=1/2$ 有$S(p)=-S(v)\log_2p$
		- 通常情况 令C=1, 
- 观察到随机变量X的值，引起的平均惊奇 $H(X)=-\sum_{i=1}^n p_i\log p_i$ 也就是 惊奇值的加权平均
	- 信息论中称作 熵
	- 多变量 联合不确定性 $H(X,Y)=-\sum_i\sum_jp(x_i,y_j)\log p(x_i,y_j)$
		- $=-\sum_i\sum_j p_{Y}(y_j)p(x_i|y_j)[\log p_Y(y_j)+\log p(x_i|y_j)]$
		- $=-\sum_i p_{Y}(y_j)\log p_Y(y_j)\sum_j p(x_i|y_j)-\sum_i p_{Y}(y_j)\sum_j p(x_i|y_j)\log p(x_i|y_j)$
		- $=H(Y)+H_Y(X)$

引理3.1 $\ln x \le x-1$ 只有x=1时等号成立

定理3.2 $H_Y(X)\le H(X)$, 等号成立条件是$Y,X$相互独立
- 做差

---

编码定理与熵
- 编码本身的要求：唯一解码
- 额外期望：基于概率期望上的尽量短

引理4.1 X的可能取值为$x_1,\cdots,x_n$ 为了把它们编成长度为$n_1,\cdots,n_{N}$的0-1序列（不能让其中任何一个序列 是其它序列的前缀）
- 充要条件 $\sum (\frac{1}{2})^{n_i}\le 1$
	- 长度i的编码个数 $w_i$
	- $w_1 \le 2$
	- $w_2 \le 2^2-2w_1$
	- $w_n \le 2^n-2w_{n-1}-2^2w_{n-2}-\cdots-2^{n-1}w_1$

定理4.1 无噪声编码定理
- X取值 $x_1\cdots x_n$
- 概率$p(x_i)$
- 编码为长度$n_i$二进制串
- $\sum n_ip(x_i)\ge H(X)=-\sum p(x_i)\log p(x_i)$
	- 分配权重 $2^{-n_i}$,用 $q_i=\frac{2^{-n_i}}{\sum_N 2^{-n_j}}$ 表示 这个权重占比
	- $\sum n_ip(x_i) \ge -\sum p(x_i)\log q_i \ge -\sum p(x_i)\log p(x_i)$

## 10. 模拟

用试验的方式 + 强 大数定律 来计算概率 的方式，称作模拟

伪随机数生成器 $X_{n+1}=(a X_n+c) \mod m$

$X_n/m$ 近似在（0,1）上均匀分布

例1a 产生随机排列
- 初始化`a[i]=i`
- 执行n次, 第i次 在$[i,n]$ 中 随机一个位置，和`a[i]`交换
- 首先 排列的总个数是 n!, 那我们可以把它看成一个神奇的变进制！，上面每次操作都是 选定最高位

10.2 模拟连续型随机变量的一般方法

10.2.1 逆变换方法
- U 是(0,1)上均匀随机变量，F为任意一个连续分布函数
- 定义随机变量$Y=F^{-1}(U)$
	- $g_Y(a)=P(Y\le a)=P(F^{-1}(U)\le a)=P(U\le F(a))=F(a)$
	- 因此 Y具有分布函数F
- 指数随机变量
	- $F(x)=1-e^{-x}$
	- $F^{-1}(U)=-\ln(1-U)$
	- $=-\ln(U_1)$, 因为1-U也是 (0,1)上均匀分布
- $\Gamma(n,\lambda)$
	- 利用Gamma和指数分布之间关系
	- $=\sum_n -\frac{1}{\lambda} \ln U_i$
	- $=-\frac{1}{\lambda} \ln(\prod_n U_i)$
	- $\chi^2_{2k}\sim \Gamma(k,1/2)$

---

10.2.2 舍取法
- 如果有能模拟密度函数 g(x)的随机变量，首先产生这样一个Y
- 正比于 f(Y)/g(Y)的概率采用Y的值
- 常数c, $\forall y, \frac{f(y)}{g(y)}\le c$

- 第一步 模拟有密度g的Y,同时产生U
- 第二步 若 $U \le f(Y)/[cg(Y)]$ 则X=Y否则回到第一步
- 由这个步骤产生的 随机变量 具有密度函数f

证明： N 是次数
- $P(X \le x)=P(Y_N\le x)$
- $=P(Y\le x| U\le \frac{f(Y)}{cg(Y)})$
- $=\frac{ P(Y\le x, U\le \frac{f(Y)}{cg(Y)})}{P(U\le \frac{f(Y)}{cg(Y)}))}$ 注意到分母是与x无关的常数 令它为K
- 分子化成积分形式，注意到 U和Y独立，联合分布$f(y,u)=f_Y(y)f_U(u)=f_Y(y)=g(y)$
	- 从而 可得表达式
	- 还能得到$cK=1$

模拟正态分布：
1. Y 模拟 均值为1的指数函数 ，其密度函数 $g(x)=e^{-x}$
2. $f(x)/g(x) \le  \sqrt{\frac{2e}{\pi}}=c$
3. 所以接受条件为 $U\le e^{-(Y-1)^2/2}$

---

模拟 离散分布：
- 核心还是 U + 逆变换

---

10.4 方差缩减技术
- $X_1,\cdots,X_n$ 具有给定的联合分布，希望计算$\theta=E[g(X_1,\cdots,X_n)]$
	- 函数g已知
	- k轮
		- 每轮 都是模拟n个X,计算出$Y_{1\cdots k}$
		- $\theta = E[\bar{Y}]$
		- $Var(\bar{Y})=  E[(\bar{Y}-\theta)^2]$

10.4.1 对偶变量
- $Var(\frac{Y_1+Y_2}{2})=\frac{1}{4}[Var(Y_1)+Var(Y_2)+2Cov(Y_1,Y_2)]=\frac{1}{2}Var(Y_1)+\frac{1}{2}Cov(Y_1,Y_2)$
- 为了方差减小，我们希望负相关而不是独立
- 先假定$X_1,\cdots,X_n$ 相互独立
- 那么$X_1^{(2)},\cdots X_n^{(2)}$ 的产生方法用$g(F^{-1}_i(1-U_i),\cdots)$ 的方法产生，因为1-U_i也是均匀分布，而且与U_i负相关

10.4.2 利用条件
- 7.5.4 $Var(Y)=E[Var(Y|Z)]+Var(E[Y|Z])$
- 如果存在Z,能计算$E[Y|Z]$ 
	- 那么因为$Var(E[Y|Z]) \le Var(Y), E[Y]=E[E[Y|Z]]$ 是更好的估计
	- 也就是，我们能对每个细分场景的内容进行估计

10.4.3 控制变量
- 希望模拟来估计$E[g(X_i\cdots)]$, 已知$E[f(X_i\cdots)]=\mu$ 
- 对任何常数a， 用$W=g(X)+a[f(X)-\mu]$, 分析学中的导数为零来找点的想法

## 碎片

TODO
- 这 1章习题做得我觉得 组合恒等式需要cheatsheet了


- 我感觉这书的定理讲解比 普林斯顿读本好啊,
	- 更值得反复阅读
- 普林斯顿的 矩，差分恒等式不错
- 联合分布的确该放到具体分布前面讲