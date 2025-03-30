---
title: Walter Rudin 数学分析原理 10 微分形式的积分
date: 2025-03-24
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

## 微分形式的积分 integration of differential forms

本章致力于积分理论中的欧几里得空间 的几何紧密相关的各方面，

### 积分 integration

10.1 定义设$I^k$是$R^k$中的k-方格, 它由满足 $a_i \le x_i \le b_i$的一切, $x=(x_1,\cdots,x_k)$组成
- $I^j$是$R^j$中的$j-$方格, 前j个不等式确定, $f$是$I^k$上的实连续函数
- $f=f_k$
  - $f_{k-1}(x_1,\cdots,x_{k-1})=\int_{a_k}^{b_k} f_k(x_1,\cdots,x_{k-1},x_k)d x_k$, 
- $f_k$在$I^k$上的一致连续性表明$f_{k-1}$在$I^{k-1}$上连续
- 因此重复这样能得到$I^j$上的连续函数
- $f_{j-1}$是$f_j$关于$x_j$在$[a_j,b_j]上的积分$ 这样$k$步以后, 得到一个数$f_0$, 我们就把这个数叫做$f$在$I^k$上的积分，并写成下面这种形式$\int_{I^k} f(x) dx$或 $\int_{I^k}f$
- 感觉上可能与积分的顺序有关， 用$L(f)$表示一个顺序的积分结果$L'(f)$表示另一个顺序的积分结果

10.2 定理 对每个$f\in \mathscr{C}(I^k), L(f)=L'(f)$, 也就是连续则积分结果不受到积分顺序影响
- 证明 如果 $h(x)=h_1(x_1)\cdots h_k(x_k)$ 那么
  - $L(h)=\prod \int_{a_i}^{b_i} h_i(x_i) d x_i=L'(h)$
  - 而这种要求 h是可以拆分成关于 不同入参x_i的函数的乘积的
  - 令$\mathscr{A}$表示一切 这样的h的集合，那么只要$g\in \mathscr{A}$就必定 $L(g)=L'(g)$
  - $\mathscr{A}$又是$I^k$上函数构成的代数，Stone-Weierstrass定理 能用到这上, (这个定理 真的6 让代数 到连续的性质的)
    - 令$V=\prod (b_i-a_i)$ 如果$f\in \mathscr{C}(I^k)$且$\epsilon > 0$ 必有$g\in \mathscr{A}$ 使得$||f-g|| < \epsilon /V$
      - 其中$||f||=\max |f(x)|,x\in I^j$, 于是 $L(f-g)| < \epsilon$, $|L'(f-g)| < \epsilon$
      - 又$|L(f)-L'(f)|=|L(f-g)+L'(g-f)| < 2\epsilon$ (因为L,L'是 线性的)

10.3 定义 $R^k$上一个 (实或复)函数f的 支撑集(support of),是使 $f(x)\neq 0$的一切点的集的闭包，如果f是 a continuous function with compact support, 令$I^k$ be any k-cell which contains the support of f and define $\int_{R^k}f=\int_{I^k}f$
- 这样定义的积分显然与$I^k$的选择无关，只要嘉定$I^k$包含f的支撑集
- （这support，支撑集，意思是 所有使得值非0的点？？？）
- 现在试图把在$R^k$上的积分的定义，扩充到带有紧支撑集的连续函数（在某种意义下）的极限函数上去，我们不去讨论在什么条件下能这样推广
- 正当地解决这问题的地方是Lebesgue积分，目前，只描述一个在Stokes 定理中要用到的极简单的例子

10.4 例$Q^k$是由$R^k$中 使得$x_1+\cdots+x_k \le 1$并且 $x_i > 0$的一切点 $x=(x_1,\cdots,x_k)$组成的k-单形
- 例如$k=3$时，$Q^k$是顶点在 $0,e_1,e_2,e_3$的四面体
- 如果 $f\in \mathscr{C}(Q^k)$,令$Q^k$外都为0来补充定义, 且定义$\int_{Q^k}f=\int_{I^k}f$
- 这里$I^k$是$x_i\in[0,1]$确定的单位立方体
- 因为f在I^k上可能不连续，所以 上面定义积分右端的存在性需要证明
- 另外的还需要证明和k个单积分次序无关
- $0 < \delta <1$
- $\varphi(t)=\frac{1-t}{\delta}, t\in (1-\delta,1]$, 左侧为0，右侧为01
- $F(x)=\varphi(x_1+\cdots+x_k)f(x)$, 那么$F\in \mathscr{C}(I^k)$
- 令$y=(x_1,\cdots,x_{k-1})$有$x=(y,x_k)$,对于每个$y\in I^{k-1}$来说，能使$F(y,x_k)\neq f(y,x_k)$的一切$x_k$的集，或者是空集，或者是长度不超过$\delta$的开区间，因为$0\le \varphi \le 1$所以
- $|F_{k-1}(y)-f_{k-1}(y)|\le \delta ||f||,y\in I^{k-1}$
- 当$\delta \to 0$时， 表示$f_{k-1}$为连续函数序列的一致极限，所以$f_{k-1} \in \mathscr{C}(I^{k-1})$ ,而再进一步积分没有什么问题了
- $|\int_{I^k} F(x) dx - \int_{I^k}f(x)dx| \le \delta||f||$, 不论这个k个单积分是按什么次序进行的，这总是正确的，因为$F\in \mathscr{C}(I^k)$ 不论怎么变换积分次序 $\int F$不变，因此$\int f$也是这样的

### 本原映射 primitive mappings

下一个目标是定理$10.9$中所说的变量替换公式,为了 容易懂，先来讨论所谓本原映射 及 单位的分割，
- 本原映射 将是我们对于带有可逆导数的$\mathscr{C}‘$映射的局部的形状有个清晰的图景
- 单位的分割是使我们能在全局中利用局部信息极为有用的方法

10.5 G把开集$E\subset R^n$映入$R^n$内,又设有正整数 m 及实函数g(定义域是E)使得
- $G(x)=\sum_{i\neq m} x_i e_i + g(x) e_m, x\in E$
- 就把G 叫做 本原映射 primitive mappings, 也就是至多改变一个坐标
  - 需要注意的是：虽然这里改变的是一个坐标，但是这个被改的坐标的函数g的定义域是在E中 而不是$x_m$的范围
- 因此可以写作 $G(x)=x+[g(x)-x_m]e_m$的形状
- 如果g在 $a\in E$可微,那么G也在a可微, $G'(a)$的矩阵$[\alpha_{ij}]$的第m行是 $(D_1g)(a),\cdots,(D_mg)(a),\cdots,(D_ng)(a)$
- 当$j\neq m$时 有$\alpha_{jj}=1$
- 当$i\neq j$时$\alpha_{ij}=0$
- 于是$G$在a出的函数行列式 $J_G(a)=\det[G'(a)]=(D_mg)(a)$
- 那么 它 非0时 $G'(a)$可逆

10.6 定义 在$R^n$上，只把标准基standard basis的某一对成员交换，而其他成员不变的线性算子B叫做 对换 flip
- 例如$R^4$上交换$e_2$和$e_4$,
  - $B(\sum x_ie_i)=x_1e_1+x_4e_2+x_3e_3+x_2e_4$
- 也可以看作交换两个坐标，而不是交换基
- 后面要用到$R^n$中的投影$P_{0\cdots n}$, 其中$P_m(x)=\sum_{1}^m x_ie_i$, 那么$P_m$的值域和零空间分别由$e_1,\cdots,e_m$和$e_{m+1},\cdots,e_n$生成

10.7 定理 F把开集$E\subset R^n$映入$R^n$内 的$\mathscr{C}'$映射, $0 \in E, F(0)=0, F'(0)$可逆
- 那么 在$R^m$中有一个0点的邻域，在其中
- $F(x)=B_1\cdots B_{n-1} G_n \circ \cdots \circ G_1(x)$ 这个表示法representation能成立valid
- 其中$G_i$是在0的某领域中的本原$\mathscr{C}'$映射，$G_i(0)=0,G_i'(0)$可逆，而每个$B_i$是对换 或者是单位算子（恒等算子）
- 简单的说 把F局部地表示成 本原映射与对换的复合
- 证明:
  - 令$F=F_1$ 假设$1\le m \le n-1$而做下面的归纳假定, $V_m$是0的邻域， $F_m\in \mathscr{C}'(V_m), F_m(0)=0, F'_m(0)$可逆，并且 $P_{m-1}F_m(x)=P_{m-1}x,x\in V_m$
  - 那么 $F_m(x)=P_{m-1}x+\sum_{i=m}^n \alpha_i(x)e_i$
    - 拆解成 前m-1子空间中的向量，和剩余的正交子空间中的向量和
    - 其中$\alpha_i$是$V_m$中的实$\mathscr{C}'$函数
  - 因此$F'_m(0)e_m=\sum_{i=m}^n (D_m\alpha_i)(0)e_i$
  - 因为$F'_m(0)$可逆, 左端非0，所以有一个k($m\le k \le n$)使得$(D_m\alpha_n)(0)\neq 0$成立
  - 令$B_m$是交换$e_m$和$e_k$的对换，如果$m=k$则是恒等算子
  - $G_m(x)=x+[\alpha_k(x)-x_m]e_m,x\in V_m$
  - 于是$G_m\in \mathscr{C}'(V_m)$, $G_m$是本原的，并且由于$(D_m\alpha_n)(0)\neq 0$，$G_m'(0)$可逆
  - 因此，反函数定理说明，存在着包含0的开集$U_m \subset V_m$,使得$G_m$是把$U_m$映满0的某邻域$V_{m+1}$的1-1映射, 在$V_{m+1}$中$G_m^{-1}$连续可微，
  - 令$F_{m+1}(y)=B_mF_m\circ G^{-1}_m(y),y\in V_{m+1}$
  - 于是$F_{m+1}\in \mathscr{C}'(V_{m+1}),F_{m+1}(0)=0$且由链式求导法$F'_{m+1}(0)$可逆,
  - 当$x\in U_m$时,
  - $P_mF_{m+1}(G_m(x))=P_mB_mF_m(x)$
  - $=P_m(P_{m-1}(x)+\alpha_k(x)e_m+\cdots]$ 按照 正交分解
  - $=P_{m-1}x+\alpha_k(x)e_m$ 投影运算规则
  - $=P_mG_m(x)$ 根据$G_m$定义
  - 因此$P_mF_{m+1}(y)=P_my,y\in V_{m+1}$
  - 所以用归纳法得证
  - 因为 $B_mB_m=I$, 由于$y=G_m(x)$而等价于
    - $F_m(x)=B_mF_{m+1}(G_m(x)), x\in U_m$
  - 如果取 $m=1,\cdots,n-1$ 这公式相继推演，可以在0的某个邻域得到
  - $F=F_1=B_1F_2\circ G=B_1B_2F_3\circ G_2 \circ G_1 = \cdots=B_1\cdots B_{n-1} F_n \circ G_{n-1}\circ\cdots\circ G_{1}$，其中$F_n$是本原映射


### 单位的分割 partitions of unity

10.8 定理, K 是$R^n$的紧子集，{$V_\alpha$}是K的开覆盖, 那么必有函数$\psi_1,\cdots,\psi_s\in \mathscr{C}(R^n)$使得
- a. $0\le \psi_i \le 1, x\in R^n, 1\le i \le s$
- b. 每个$\psi_i$的支撑集属于某个$V_\alpha$
  - 时常把 说成是{$\psi_i$}是覆盖$V_\alpha$的从属函数组
- c. 对于每个$x\in K$来说,$\psi_1(x)+\cdots+\psi_s(x)=1$
  - 把{$\psi_i$} 叫做单位的分割,
- 推论 如果 $f\in \mathscr{C}(R^n)$并且f的支撑集位于K内，那么
  - $f=\sum_{i=1}^s \psi_i(x)f(x)$
  - 每个$\psi_i f$的支撑集位于某个$V_\alpha$内
  - 证明:
    - 对于各每个$x\in K$联系上一个指标$\alpha(x)$, 使得$x\in V_{\alpha(x)}$ ,于是存在着中心在x的开球B(x)及W(x)使得
    - $\overline{B(x)}\subset W(x) \subset \overline{W(x)} \subset V_{\alpha(x)}$
    - 因为K紧，所以在$K$中存在着点$x_1,\cdots,x_s$使得
    - $K\subset B(x_1)\cup \cdots \cup B(x_s)$，一方面用紧+所有点开来实现有限，另一方面开的选择控制在先给的某个$V_\alpha$的内部
    - 存在函数$\varphi_1,\cdots,\varphi_s \in \mathscr{C}(R^n)$ 使得在 $B(x_i)$上$\varphi(x)=1$, 而在$W(x_i)$之外 $\varphi(x_i)=0$, 并且在$R^n$上$0\le \varphi_i(x)\le 1$定义$\psi_1=\varphi_1$而且当$i=1,\cdots,s-1$时 定义, 这里是为了满足b
    - $\psi_{i+1}=(1-\varphi_1)\cdots(1-\varphi_i)\varphi_{i+1}$
    - 性质a,b是显然的（被构造指定了）
    - $\psi_1+\cdots+\psi_i=1-(1-\varphi_1)\cdots(1-\varphi_i)$
    - 因此$\sum_{i=1}^s \psi_i(x)=1-\prod_{i=1}^s(1-\varphi_i(x)),x \in R^n$
    - 如果$x\in K$那么x属于某个$B(x_i)$因此$\varphi_i(x)=1$ 而上面$\prod$为0，证明了c
  - 这个证明的，首先紧做出有限邻域，每个邻域B subset W subset某指定V，另一方面 用B内是1，W外是0，之间可以连续，再利用连续的乘积能保持连续

### 变量代换 change of variables

仅限于讨论具有 紧支撑集的连续函数；虽然这对于许多应用来说，是限制太多了（习题19~23）

10.9 定理 设T是把开集 $E\subset R^k$映入 $R^k$内的1-1 $\mathscr{C}'$映射, 并且对于一切$x\in E$, $J_T(x)\neq 0$ 如果$f$是$R^k$上的连续函数，它的支撑集是紧的并且位于$T(E)$内，那么
- $\int_{R^k} f(y)dy=\int_{R^k} f(T(x)) |J_T(x)|dx$
- 回想一下, $J_T$是T的函数行列式， 根据反函数定理， 由题设$J_T(x)\neq 0$推知$T^{-1}$是$T(E)$上的连续函数，这就保证了 上式右端的被积函数在E中取得紧支撑集（定理4.14: f是把紧度量空间X映入Y的连续度量空间f(X)是紧的）
- 上式中$J_T(x)$的绝对值的出现，要做些解释，就k=1的情况二轮，假设T是把$R^1$映满$R^1$的1-1 $\mathscr{C}'$映射。于是$J_T(x)=T'(x)$, 如果T是递增的，那么由定理6.19,6.18对于具有紧支撑集的一切连续函数f，有
  - $\int_{R^1}f(y)dy=\int_{R^1}f(T(x))T'(x)dx$
- 如果T是递降的,$T'(x) < 0$，这时如果f在它的支撑集内部是正的话，那么上式左端是正的而右端是负的，所以加绝对值才能得到正确的等式
- 这问题在于，我们考虑的积分是$R^k$上的一个子集的积分，而我们却没有给这些子集配置方向或定向。等到在曲面上对微分形式积分时，将采用其他的观点
- 证明：
  - 如果T是 本原$\mathscr{C}'$映射（见定义10.5），那么上式正确
  - 如果T是 只交换两个坐标的线性映射，上式正确
  - 如果定理对于变换P，Q正确并且S(x)=P(Q(x)) 那么
  - $\int f(z)dz=\int f(P(y)) |J_P(y)|dy$
  - $=\int f(P(Q(x))) |J_P(Q(x))| |J_Q(x)|dx$
  - $=\int f(S(x)) |J_S(x)| dx$
  - 因为根据行列式的乘法定理及链导法，可以得到
    - $J_P(Q(x))J_Q(x)=\det P'(Q(x))\det Q'(x)$
    - $=\det P'(Q(x))Q'(x)$
    - $=\det S'(x)=J_s(x)$
    - 所以对于 复合函数也正确
  - 对于每个点$a\in E$有邻域$U\subset E$在U中
    - $T(x)=T(a)+B_1\cdots B_{k-1}G_k\circ G_{k-1}\circ\cdots\circ G_1(x-a)$ 根据（10.7）
    - 令$V=T(U)$那么就当f的支撑集在V中时成立，所以
    - 每个点$y\in T(E)$必在这样的开集$V_y\subset T(E)$里，使得对于支撑集在$V_y$中的一切连续函数f， 上式成立
    - 现令f是具有紧支撑集$K \subset T(E)$的连续函数，因为{$V_y$}覆盖了K，定理10.8的推论说明$f=\sum \psi_i f$这里每个$\psi_i$连续，并且每个$\psi_i$的支撑集在某个$V_y$内，这样对于每个$\psi_i f$来说，上式成立，因此有限和也成立

### 微分形式 differential forms

n维 微积分基本定理需要它，通常定理叫做stokes定理，Stokes定理的原始形式，起因于向量分析对电磁学的应用，而且是用向量场vector field的环流curl来叙述的。Green定理及散度divergence定理是另外的特殊情形，这些论题在本章末有简短讨论

stokes定理的稀有特色，在于它只有一个难点，那就是叙述这个定理时，必须用到一些定义的精心制做的结构，这些定义涉及微分形式，它们的倒数，边界以及指向。

直到现在，我们只讨论了开集上定义的多变量函数的倒数，这样做是为了避免在边界点上所遇到的困难，但是现在在紧集上讨论可微函数才方便，所以采取下面的约定
- 说f是紧集$D\subset R^k$到$R^n$内的$\mathscr{C}'$映射(或$\mathscr{C}''$映射)，就表示存在着开集$W\subset R^k$到$R^n$的$\mathscr{C}'$映射(或$\mathscr{C}''$映射)g, 使得$D\subset W$并且当$x\in D$时$g(x)=f(x)$ 
- 也就是 有包裹的开集W，而在D中是一样的

10.10 定义 E是$R^n$中的开集,E中的k-surface曲面 是从紧集$D\subset R^k$到$E$内的映射$\Phi$,(勘误 这里中文书写了个$E^n$)
- D叫做Phi的参数域, D中的点记成$u=(u_1,\cdots,u_k)$
- 我们限定D或为k-方格, 或k-单形$Q^k$这种简单情况，理由是我们以后要在D上积分，但是还没有讨论在$R^k$的更复杂的子集上的积分，我们将看到，对D的这个限制（今后不再每次明说），在微分形式的最后理论中不会失去重大的一般性no significant loss of generality in the resulting theory of differential forms
- 我们强调, E中的k-surface曲面的定义是到E中的映射，而不是E的子集，这与我们早先对于曲线的定义(定义6.26)是一致的，其实1-曲面刚好与连续可微曲线是一样的

10.11 定义 设E是$R^n$中的开集. E中的 $k\ge 1$ 次微分形式，简称为E中的(k-form in E)是一个用和式$\omega =\sum a_{i_1\cdots i_k} (x) dx_{i_1} \cdots d x_{i_k}$, (指标$i_j$各自从1到n独立变换) 作符号表示的函数，它给E中的每个k-surface曲面$\Phi$ 按照规则
- $\int_{\Phi} \omega = \int_D \sum a_{i_1\cdots i_k}(\Phi(u)) \frac{\partial(x_{i_1},\cdots,x_{i_k})}{\partial(u_1,\cdots,u_k)} du$
  - 是符号$\int_{\Phi}\omega$的定义
- 规定一个数$\omega(\Phi)=\int_{\Phi} \omega$
- 这里D是$\Phi$的参数域，$\frac{\partial(x_{i_1},\cdots,x_{i_k})}{\partial(u_1,\cdots,u_k)}$是Jacobi行列式
- （勘误：中文书上两个地方都写成$a_{i_1}\cdots a_{i_k}$, 这里后面并没有a，因为这里意义是 下标i序列确定的函数a，同时省略号应该是下标级别的不是和a同级别的，这里英文书上都是正确的）
- 假定$a_{i_1\cdots i_k}$都是E内的实连续函数，如果$\phi_1,\cdots,\phi_n$是$\Phi$的分量, 上式中的函数行列式是由$(u_1,\cdots,u_k)\to (\phi_{i_1}(u),\cdots,\phi_{i_k}(u))$所确定的
- 像定义10.1中 右端是在D上的积分
- 如果 函数$a_{i_1 \cdots i_k}$（中文书不对）都属于$\mathscr{C}'$或$\mathscr{C}''$，那么就说$k-形式$\omega$属于$\mathscr{C}'$或$\mathscr{C}''$类
- E中的 0-form 规定是E中的一个连续函数
- 这里出现了 $\wedge$也就是$wedge$, 它和 dxdy...的区别是 有顺序性，这个顺序会影响符号，从定义的角度来看，它是一个整体，因为左边就是Jacobi行列式的形式，刚好和行列式的换行会换符号有了联系

10.12 例
- a. 令$\gamma$是$R^3$中的1-曲面($\mathscr{C}'$类曲线)，参数域是$[0,1]$，用$(x,y,z)$代替$(x_1,x_2,x_3)$ 并且置 $\omega=xdy+ydx$
  - 那么$\int_{\gamma}\omega=\int_0^1 \gamma_1(t)\gamma_2'(t)+\gamma_2(t)\gamma_1'(t)dt=\gamma_1(1)\gamma_2(1)-\gamma_1(0)\gamma_2(0)$
  - 这个例子里，$\int_\gamma \omega$只依赖于 起点$\gamma(0)$与终点$\gamma(1)$,特别的，如果是闭曲线，那么$\int_{\gamma} \omega = 0$, 下面将看到，对任何恰当1-form 的$\omega$ 都是对的
  - 1-form的积分时常叫作 线积分
- b. 
  - 固定$a>0,b>0$ 定义$\gamma(t)=(a\cos t,b\sin t),0 \le t \le 2\pi$
  - 于是$\gamma$是$R^2$中的闭曲线，它的值域是一椭圆
  - 于是$\int_{\gamma} x d y = \int_0^{2\pi} ab\cos^2 t dt = \pi ab$
    - 这是$\gamma$所 围成bounded区域的面积,这是Green定理的特殊情形
  - $\int_{\gamma} y dx=-\int_{0}^{2\pi} ab \sin^2 t dt = -\pi ab$
- c. D是由 $0\le r \le 1,0\le \theta \le \pi, 0 \le \varphi \le 2\pi$确定的3-方格, 定义$\Phi(r,\theta,\varphi)=(x,y,z)$这里
  - $x=r\sin \theta \cos \varphi$
  - $y=r\sin \theta \sin \varphi$
  - $z=r\cos \theta$
  - 于是$J_{\Phi}(r,\theta,\varphi)=\partial(x,y,z)/\partial(r,\theta,\varphi)=r^2\sin \theta$
  - $\int_{\Phi} dx\wedge dy\wedge dz=\int_D J_{\Phi}=\frac{4\pi}{3}$
  - 注意这里$\Phi$把D映满$R^3$的闭单位球，在D的内部，这映射是1-1的（但是有些边界点要被 Phi 等同起来），积分 等于$\Phi(D)$的tiji
- 总结
  - $\omega$写的都是 外微分形式（exterior differential forms）有关
  - 例如 $f(x_1,x_2)=x_1+2x_2$, $\omega=df=\frac{\partial{f}}{\partial{x_1}}dx_1+\frac{\partial{f}}{\partial x_2}dx_2=dx_1+dx_2$
  - 二维面积 = $\int_D dx_{1}\wedge dx_{2}$
  - 幂零性
    - 例如 $f=x_1x_2$(0-forms 即函数)
      - $df=x_2dx_1+x_1dx_2$
      - $d(df)=d(x_2dx_1+x_1dx_2)=(dx_2\wedge dx_1)+(dx_1\wedge dx_2)=0$

10.13 初等性质 Elementary properties, 设$\omega,\omega_1,\omega_2$是E中的k-form, 当且仅当对于E中的每个k-曲面$\Phi$, $\omega_1(\Phi)=\omega_2(\Phi)$时，就写成$\omega_1=\omega_2$，特别地,$\omega=0$表示对于E中每个 k-surface $\Phi$都有$\omega(\Phi)=0$, 
- 数乘: c是实数, 那么$c\omega$是由$\int_{\Phi} c\omega=\int_{\Phi} c\omega$定义的k-form
  - 特殊的 -1 或者说逆元素，$-\omega$是由$\int_{\Phi} -\omega=-\int_{\Phi} \omega$定义的k-form
- 和: $\omega_1+\omega_2$是由$\int_{\Phi} \omega_1+\omega_2=\int_{\Phi} \omega_1+\int_{\Phi} \omega_2$定义的k-form
- 考虑k-form, $\omega=a(x)d x_{i_1}\wedge \cdots \wedge d x_{i_k}$,
  - 令$\bar{\omega}$是交换两个 subscripts得到k-form
  - 把这个操作和行列式交换两行联系起来，有$\bar{\omega}=-\omega$，对于一切i和j来说， anticommutative relation: $d_{x_i}\wedge d_{x_j}=-d_{x_j}\wedge d_{x_i}$
    - 在研究微分形式时，要格外注意减号的 原因
  - 于是$d x_i \wedge  d x_i=0$
  - 换句话说，如果$\omega$ 由上式表达出来，只有下标两两不同all distinct 才可能非0
  - 因此 如果 $k > n$那么在$R^n$的任何开子集中，就只有0 是k-form

10.14 基本basic k-forms 
- 设$i_1,\cdots,i_k$都是正整数，且$1\le i_1 < i_2 < \cdots < i_k \le n$又设I是k元有序组，简称k-序组，那么我们称I为递增k-指标(increasing k-index), 简单记法 $dx_I=dx_{i_1}\wedge \cdots \wedge dx_{i_k}$
- 这些形式$d x_{I}$叫作$R^n$中的基本k-forms
- 恰好存在 $\binom{n}{k}$个基本k-forms, (然而我们用不着这个事实)
- 更重要的是，每个k-forms 能用 基本k-forms 表示出来，有限次两两交换就能变成递增k-指标 J，所以$d x_{j_1}\wedge \cdots \wedge d x_{j_k}=\epsilon(j_1,\cdots,j_k)dx_{I}$, 这里$\epsilon(j_1,\cdots,j_k)$是符号函数，它等于1或-1 等于-1的对换次数(逆序对数)幂
- 有了$\omega$标准表示$\omega=\sum_I b_I(x)dx_I$

10.15 定理 $\omega=\sum_I b_I(x)dx_I$
- 是开集E中的k-form 的标准表示法， 如果在$E$中$\omega=0$, 那么 对于每个 递增k-指标I, 以及每个$x\in E$都有$b_I(x)=0$
- 证明:
  - 假定某个 $v\in E$ 以及某个递增k-指标 J, 使得$b_J(v) > 0$ 来达到矛盾，因为$b_J$连续，所以存在着$h > 0$，它保证坐标满足$|x_i-v_i| \le h$ 的一切$x \in R^n$使得$b_J(x) > 0$, 令D是$R^k$中的这样一个k-方格，当且晋档$u_r \le h$时, $u \in D$ 
  - 定义$\Phi(u)=v+\sum_{r=1}^k u_re_{j_r},u\in D$ 专门设计
  - 于是$\Phi$是E中的k-surface,它的参数域是D，并且对于每个$u\in D$来说$b_J(\Phi(u)) > 0$我们断言$\int_{\Phi} \omega = \int_D b_J(\Phi(u)) du$, 因为右端是正的，$\Phi(\omega)$，所以产生矛盾
  - 要证明上面的断言等号，根据$\Phi$的定义$\partial(x_{i_1},\cdots,x_{i_k})/\partial(u_1,\cdots,u_k)=1$ 代入到$\int_{\Phi} \omega$的定义中
  - 对于其余的 递增k-指标$I\neq J$来说，函数行列式为0，因为它至少有一列元素都是零
  - 这里的想法就是 $\int_{\Phi}\omega$的定义，通过设计$\Phi$让只有J的行列式非零，其它行列式都为0，这样 $\int_{\Phi}\omega =\int_D b_J(\Phi(u))du$, 另一方面 通过连续控制右边正，左边根据题目是0，可以得出矛盾
  - 这也说明了表示方法的唯一

10.16 基本k-forms的积products
- I,J是两个 递增p,q-指标
- $R^n$中的与$dx_I,dx_J$对应的基本形式的积，是$R^n$中的(p+q)-forms, 用符号$dx_I\wedge dx_J$表示
  - 定义为$=(dx_{i_1}\wedge\cdots\wedge dx_{i_p})\wedge (dx_{j_1}\wedge\cdots\wedge dx_{j_q})$
  - 如果I,J有公共元素，显然结果为0
  - 如果没有公共元素，把$I\cup J$的成员按递增的顺序排列，而将得到的(p+q)-index 写作 $[I,J]$, 那么 $dx_{[I,J]}$是基本(p+q)-forms
  - 断定$dx_I\wedge dx_J=(-1)^{\alpha} dx_{[I,J]}$
    - 这里$\alpha$是$j_t-i_s < 0$的个数(勘误这里中文书上是j_s), 本质上还是逆序对个数
    - 证明: 逐个右移动，逆序对奇偶性=两两交换次数奇偶性 
- 性质 结合率
  - $(dx_I\wedge dx_J)\wedge dx_K=dx_I\wedge(dx_J\wedge dx_K)$
  - 证明: 逐个右移动，逆序对奇偶性=两两交换次数奇偶性

10.17 乘法
  - $w=\sum_I b_I(x) dx_I,\lambda=\sum_J c_J(x)d x_J$
  - 定义 乘积为$w \wedge \lambda \sum_{I,J} b_I(x)c_J(x) dx_I\wedge dx_J$
  - 性质
    - 分配律
      - $(\omega_1+\omega_2)\wedge \lambda=\omega_1\wedge \lambda+\omega_2\wedge \lambda$
      - $\omega \wedge (\lambda_1+\lambda_2)=\omega \wedge \lambda_1+\omega \wedge \lambda_2$
  - 对于0-forms的f有结合率
    - $f\omega = \omega f = \sum_I f(x) b_I(x)dx_I$
    - 当f是0-forms时，习惯写成$f\omega$不用加中间的$\wedge$

10.18 微分 设$\omega$是某开集$E\subset R^n$中的$\mathscr{C}'$类k-form, 现定义微分算子d, 它给每个$\omega$联系上一个(k+1)-forms
- E中的$\mathscr{C}'$的0-form 恰好是实函数$f\in \mathscr{C}'(E)$
- 定义 $df=\sum_{i=1}^n (D_if)(x)dx_i$
- 如果$\omega=\sum b_I(x)dx_I$是k-froms的标准表示, 而对于每个 递增k-指标I, $b_I$是$\mathscr{C}'$类函数，那么
  - 定义$d\omega=\sum_I (db_I(x)) \wedge dx_I$

10.19 例 E是$R^n$中的开集, $f\in \mathscr{C}'(E)$, $\gamma$是E中的连续可微函数，其参数域是$[0,1]$,
- $\int_\gamma df=\int_0^1 \sum_{i=1}^n (D_if)(\gamma(t))\gamma'_i(t)dt$
- 根据链导法， $=\int_0^1 (f\circ \gamma)'(t)dt=f(\gamma(1))-f(\gamma(0))$,
- 于是对于具有相同始点和相同终点的一切$\gamma$都是相同的，
- 也注意到， 1-form的xdy不是任何0-form的导数，因为 $d(xdy)=dx\wedge dy\neq 0$


10.20 定理 设$\omega,\lambda$分别是$R^n$中的开集E中的$\mathscr{C}'$类k-form, m-form 那么
- $d(\omega \wedge \lambda) = (d\omega) \wedge \lambda + (-1)^k \omega \wedge d\lambda=0$
- 如果 $\omega$在$E$中属于$\mathscr{C}''$类，那么$d^2 \omega =0$
- 证明:
  - $\omega=fdx_I,\lambda=g dx_J$ (因为有线性的可加性，所以研究单个)
    - $\omega \wedge \lambda = fgdx_I \wedge dx_J$
    - $d(\omega \wedge \lambda) = d(fgdx_I \wedge dx_J)=(-1)^\alpha d(fgdx_{[I,J]})$
    - $=(-1)^\alpha (fdg+gdf) \wedge dx_{[I,J]})$
    - $=(fdg+gdf) \wedge dx_I \wedge dx_J$
    - $=(df \wedge dx_I)\wedge (gdx_J) + (-1)^k(fdx_I) \wedge (dg \wedge dx_J)$, 因为交换1-form 和k-form所以(-1)^k
    - $=(d\omega)\wedge (\lambda) + (-1)^k(\omega) \wedge (\lambda)$
    - 得证
  - 0-form的 $f\in \mathscr{C}''$
    - $d^2f=d(\sum_{j=1}^n (D_jf)(x)dx_j)$
    - $=\sum_{j=1}^n d(D_jf) \wedge dx_j$
    - $=\sum_{i,j} (D_{ij}f)(x) dx_i \wedge dx_j$
      - 因为 定理9.41, $D_{ij}=D_{ji}$ 以及$dx_i\wedge dx_j=-dx_i\wedge dx_j$, 所以$d^2f=0$
    - $\omega = fdx_I$,那么$d\omega=(df)\wedge dx_I$
      - $d(dx_I) = (d1)\wedge dx_I=0 \wedge dx_I=0$
      - $d^2f = 0$
      - 所以 $d^2\omega = (d^2f)\wedge dx_I+df \wedge d^2x_I=0+0=0$

10.21 变量代换, 设E是$R^n$中的开集, T是E到开集$V\subset R^m$内的$\mathscr{C}'$映射,$\omega$是V中的k-形式, 它的标注表示是$\omega=\sum_I b_I(y) dy_I$
- 我们用y表示V中的点，x表示E中的点
- 令$t_1,\cdots,t_m$是T的分量, 如果$y=(y_1,\cdots,y_m)=T(x)$, 那么$y_i=t_i(x)$
- 这样每个$dt_i=\sum_{j=1}^{n} (D_jt_i)(x) dx_j$ 是E中的一个1-form
- 映射T把$\omega$变成$E$中的k-form 
  - 定义 $\omega_T=\sum_I b_I(T(x)) dt_{i_1}\wedge \cdots \wedge dt_{i_k}$, 每个I是 递增k-指标
  

10.22 定理, 用10.21中 变量代换 里的 E,T,令$\omega,\lambda$分别为$V$中的k-forms, m-forms那么
- (a).k=m时 $(\omega+\lambda)_T=\omega_T+\lambda_T$
- (b).$(\omega \wedge \lambda)_T = \omega_T \wedge \lambda_T$
- (c).当$\omega$属于$\mathscr{C}'$类，T属于$\mathscr{C}''$类时, $d(\omega_T)=(d\omega)_T$
- 证明
  - 从定义可以直接得到(a)
  - $(dy_{i_1}\wedge \cdots \wedge dy_{i_r})_T=dt_{i_1}\wedge \cdots \wedge dt_{i_r}$ 与 i是否递增无关，可证 (b)
  - 如果f是$V$中的 $\mathscr{C}'$类的0-form, 那么
    - 处理0-form
    - $f_T(x)=f(T(x)),df=\sum_i (D_if)(y)dy_i$
    - 链导法:
      - $d(f_T)=\sum_j (D_jf_T)(x)dx_j$
      - $=\sum_j \sum_i (D_jf)(T(x)) \cdot (D_jt_i)(x)(x)dx_j$
      - $=\sum_i (D_if)(T(x)) dt_i$
      - $=(df)_T$
  - 处理 系数为1的 k-form
  - 如果 $dy_I=dy_{i_1}\wedge \cdots \wedge dy_{i_k}$那么$(dy_I)_T=dt_{i_1}\wedge \cdots \wedge dt_{i_k}$, 
    - 因为 $d((dy_I)_T)=d^2 y_I = 0$
    - 假定$\omega=fdy_I$于是
      - $\omega_T=f_T(x) (dy_I)_T$, 也是10.21的另一种写法 
      - $d(\omega_T)=d(f_T) \wedge (dy_I)_T$, 根据10.20 和 上面=0
      - $=(df)_T\wedge (dy_I)_T$, 利用0-form的结果
      - $=((df)\wedge dy_I )_T$, 也是10.21的另一种写法
      - $=(d\omega )_T$, 替换
- 总结一下, $T: U\mapsto V, \omega(y) \in V,\omega$是k-form, 然后用T的变换来替换, 也就是$x\in U$替换$y\in V$, 来得到一个U中的k-form记作$\omega_T$, 这里$U,V$ 都是$R^n,R^m$中的开集。用到的限制有 $T$是$\mathscr{C}'$, 然后如果要计算 微分，先微再换 = 先换再微，但需要额外的$\omega$是$\mathscr{C}'$,$T$是$\mathscr{C}''$, （其实下个定理简单的描述了这个内容）

10.23 定理 也就是研究替换的复合
- 设T是开集$E\subset R^n$到开集$V\subset R^m$内的$\mathscr{C}'$映射, S是$V$到开集$W\subset R^p$内的$\mathscr{C}'$映射, $\omega$是$W$中的k-form, 它使 $\omega_S$是V中的k-form，并且$(\omega_S)_T$ 及 $\omega_{ST}$都是E中的k-form, 这里ST由 $(ST)(x)=S(T(x))$定义，那么
- $(\omega_S)_T=\omega_{ST}$
- 证明:
  - 如果 $\omega$及$\lambda$都是W中的 forms
  - 那么 $((\omega \wedge \lambda)_S)_T = (\omega_S\wedge\lambda_S)_T=(\omega_S)_T\wedge (\lambda_S)_T$
  - 且$(\omega \wedge \lambda)_{ST}=\omega_{ST} \wedge \lambda_{ST}$
  - 这两个式子的右侧如果 每个相等，那么这两个等式相等，那它们的$\wedge$后$_{ST}$和$(_S)_T$也相等
  - 所以 研究1-form和0-form的单个$\omega$
    - 0-form 就是普通的代换 显然
    - 研究1-form
    - $t$是T中分量
    - $s$是S中分量
    - $r$是ST中分量
    - 如果$\omega = dz_q$
      - $\omega_S=ds_q=\sum_j (D_js_q)(y)dy_j$
      - $(\omega_S)_T=\sum_{j} (D_js_q)(T(x))dt_j$
      - $=\sum_{j} (D_js_q)(T(x)) \sum_i (D_it_j)(x) dx_i$ 链导法
      - $=\sum_{i} (D_i r_q)(x) dx_i$
      - $=dr_q$
      - $=\omega_{ST}$

10.24 定理 设$\omega$是 开集$E\subset R^n$中的k-form, $\Phi$是E中的k-surface, 它的参数域$D\subset R^k$, $\Delta$是$R^k$中的参数域为$D$并且是用$\Delta(u)=u(u\in D)$确定的k-surface 那么
- $\int_{\Phi} \omega = \int_{\Delta} \omega_{\Phi}$
- 证明:
  - 对于 $\omega=a(x)dx_{i_1}\wedge \cdots \wedge dx_{i_k}$
  - 如果$\phi_1,\cdots,\phi_n$是$\Phi$的分量，那么
  - $\omega_{\Phi}=a(\Phi(u)) d\phi_{i_1}\wedge \cdots \wedge d\phi_{i_k}$
  - 要证明本定理, 只需要能够证明 $d\phi_{i_1}\wedge \cdots \wedge d\phi_{i_k} = J(u)du_1\wedge \cdots \wedge du_k$
    - 这里$J(u)$是Jacobi行列式$=\partial(\phi_{i_1},\cdots,\phi_{i_k})/\partial(u_1,\cdots,u_k)$
    - $\int_{\Phi}\omega = \int_D a(\Phi(u))J(u)du$
    - $=\int_{\Delta} a(\Phi(u)) J(u) du_1\wedge \cdots \wedge du_k=\int_{\Delta} \omega_{\Phi}$
  - 证明：
    - 令 $[A]$ 是k行k列矩阵 , 阵元$\alpha(p,q) = (D_q\phi_{i_p})(u)$
    - 那么$d\phi_{i_p}=\sum_{q} \alpha(p,q) du_q$
    - 因而$d\phi_{i_1}\wedge \cdots \wedge d\phi_{i_k} = \sum \prod \alpha(j,q_j) du_{q_1}\wedge \cdots \wedge du_{q_k}$
    - 由于$du_{q_1}\wedge \cdots \wedge du_{q_k}=s(q_1,\cdots,q_k) du_1\wedge \cdots \wedge du_k$
    - $d\phi_{i_1}\wedge \cdots \wedge d\phi_{i_k} = \det[A] du_1\wedge \cdots \wedge du_k$
    - 其中$J(u)=\det[A]$

10.25 定理 设T是开集,$E\subset R^n$到开集$V\subset R^m$内的$\mathscr{C}'$映射，$\Phi$是E中的k-surface, 它的参数域是$D\subset R^k$, $\omega$是V中的k-form, 那么 
- $\int_{T\Phi}\omega = \int_{\Phi} \omega_T$
- 证明:
  - $\int_{T\Phi}\omega =\int_{\Delta} \omega_{T\Phi} = \int_{\Delta} (\omega_T)_\Phi = \int_{\Phi} \omega_T$
  - 在$T\Phi$ 映射下 微分形式$\omega$的积分 
  - 其值域中  微分形式 $\omega$ 进行$T\Phi$变量代换的积分
  - 其值域中  微分形式 $(\omega_T)$ 进行$\Phi$变量代换积分
  - 在$\Phi$变换下 微分形式 $\omega_T$的积分

### 单形与链 simplexes and chains

10.26 affine simplexes仿射单形，设$f$是把向量空间X映入向量空间Y的映射，如果 f-f(0)是线性的，就称f为仿射映射 affine,换句话说，就是要求存在某个$A\in L(X,Y)$使得
- $f(x) = f(0)+Ax$
- 如此，要确定$R^k$到$R^n$中的仿射映射affine mapping，只要知道$f(0)$及$f(e_i),1\le i\le k$就行了, 这里 $e_i$是$R^k$中的标准基
- 定义 标准单形 standard simplex $Q^k$ 为由形如 $u=\sum_{i=1}^k \alpha_ie_i$ ,而使$\alpha_i \ge 0, 并且$\sum \alpha_i \le 1$的一切$u$组成的集合,
- 设 $p_0,\cdots,p_k$是$R^n$中的点，所谓 有向oriented 仿射affine k-simplex $\sigma =[p_0,\cdots,p_k]$ 是用$Q^k$作为参数域，由仿射映射
- $\sigma(\alpha_1e_1+\cdots+\alpha_ke_k)=p_0+\sum_{i=1}^k \alpha_i(p_i-p_0)$ 给出的$R^n$中的k-surface
- 注意$\sigma$的本质是$\sigma(0)=p_0,\sigma(e_i)=p_i$
- $\sigma(u)=p_0+Au,u\in Q^k,A\in L(R^k,R^n)$
- $Ae_i=p_i-p_0$
- 称$\sigma$有向的, 如果$\bar{\sigma}=[p_{i_0},\cdots,p_{i_k}]$
  - $\bar{\sigma}=s(i_0,\cdots,i_k) \sigma$
  - s=1 则同向，s=-1反向，注意没有定义 单行的向，定义的是两个单行之间可能存在的关系
- 当n=k时，若A可逆，那么根据det A来定义正向，或负的
  - 特别的恒等映射 $[0,e_1,\cdots,e_k]$是正向的
- 特别的 0-单形 定义为有正负号的一个点，写成$\sigma=+p_0$或$\sigma=-p_0$
  - $\int_{\sigma} f=\epsilon f(p_0)$, 其中$\epsilon$是上面的+1/-1符号

10.27 定理 设$\sigma$是开集$E\subset R^n$中的有向仿射k-simplex, $\bar{\sigma}=\epsilon \sigma$, 那么 对于E中每个 k-form $\omega$来说
- $\int_{\bar{\sigma}} \omega = \epsilon \int_{\sigma} \omega$
- 证明:
  - 对于k=0, 与次序无关显然
  - 对于$k\ge 1$, 设$\bar{\sigma}$是交换$p_0,p_j,j\in [1,k]$得到,于是$\epsilon = -1$,
    - $\bar{\sigma}(u)=p_j+Bu, u \in Q^k$
      - 其中$Be_j=p_0-p_j$
      - $Be_i=p_i-p_j,i\neq j$
    - $Ae_i=x_i=p_i-p_0, i \in[1,k]$
    - $Ae_0=p_0$
    - 那么B的列向量
      - $Be_i=p_i-p_j=(p_i-p_0)-(p_j-p_0)=x_i-x_j,i\neq j, i\in [1,k]$
      - $Be_j=p_0-p_j=-x_i$
      - 所以 根据 行列式运算规则,B的列 可以变换得和A的列只有j列取反，那么$\det B=-\det A$
  - 那么对于一般的， 总可以拆解成 反复的和$p_0$交换，因此得证

10.28 仿射链 affine chains, An affine k-chain $\Gamma$ in an open set $E \subset R^n$ is a collection of finitely many oriented affine k-simplexes $\sigma_1,\cdots, \sigma_r$ in E,这些 k-单形 不必各不相同，于是, 一个 k-单形 可以在$\Gamma$ 中重复出现
- 设$\Gamma$如上, 并设$\omega$是E中的k-forms, 定义
- $\int_{\Gamma} \omega = \sum_{i=1}^r \int_{\sigma_i} \omega$
- 我们可以把E中的 k-surface $\Phi$看成一个函数, 它的定义域是E中一切 k-forms 的集体，并且它给$\omega$配置一个数 $\int_{\Phi} \omega$, 因为实值函数能够相加，
- 用记号$\Gamma = \sigma_1+\cdots + \sigma_r=\sum_{i=1}^r \sigma_i$
  - 必须当心地使用，要害是在于$R^n$里的每个 有向 仿射 k-单形$\sigma$, 作为函数的途径有两种
  - 它们的定义域不同，值域也不同，于是有两种绝然不同的加法运算
  - 本来$\sigma$是定义为$Q^k$上的$R^n-$值 函数, 因此能够 说 $\sigma_1+\sigma_2$是给每个$u\in Q^k$派定 向量$\sigma_1(u)+\sigma_2(u)$的函数$\sigma$, 注意$\sigma$仍然是$R^n$中的有向 仿射 k-单形！这不是这个记号的含义
  - 如果$\sigma_2=-\sigma_1$ 也就是 它们顶点集相同，但是方向相反，并且设$\Gamma=\sigma_1+\sigma_2$ 那么对于一切$\omega$有$\int_{\Gamma} \omega = 0$, 并且我们可以把这件事记成$\Gamma = 0$或$\sigma_1+\sigma_2=0$, 但并不意味着$\sigma_1(u)+\sigma_2(u)$是$R^n$中的零向量
- 证明 上面对$E$中每个 k-form 成立

10.29 边界 boundaries 当$k\ge 1$时, 规定 有向仿射 k-单形 $\sigma=[p_0,\cdots,p_k]$ 的 边界 就是 仿射(k-1)-链
- $\partial{\sigma} = \sum_{j=0}^k (-1)^j [p_0\cdots,p_{j-1},p_{j+1},\cdots,p_k]$
  - $\sigma_j$以$Q^{k-1}$为参数域
  - $\sigma_j(u)=p_0+Bu$
    - $B\in L(R^{k-1},R^n)$ 就是去掉了j列的线性映射
  - 其中$\sigma_0=[p_1,\cdots,p_k]$
    - $\sigma_0(u)=p_1+Cu$定义的,
    - $Ce_i=p_{i+1}-p_1,i\in[1,k-1]$
- 例如 $\sigma=[p_0,p_1,p_2]$那么$\partial \sigma = [p_1,p_2]-[p_0,p_2]+[p_0,p_1]=[p_0,p_1]+[p_1,p_2]+[p_2,p_0]$ 这与三角形的有向边界的普通概念一致

10.30 可微单形及可微链 设$T$是开集$E\subset R^n$到开集$V\subset R^m$内的$\mathscr{C}''$映射, V不必是 one-to-one 的，如果$\sigma$是E中的 有向仿射k-单形 ，那么复合映射$\Phi = T\circ \sigma$有时写成比较简单的形式$T\sigma$ 是V中的以$Q^k$为参数的k-surface, 称$\Phi$为$\mathscr{C}''$类的有向k-单形
- V中$\mathscr{C}''$类的有向k-单形 $\Phi_1,\cdots,\Phi_r$的有限集$\Psi$叫做V中的$\mathscr{C}''$类的k-链
- 设$\omega$是V中的k-form 我们定义$\int_{\Psi} \omega = \sum_{i=1}^r \int_{\Phi_i}\omega$
  - 并用记号 $\Psi=\sum \Phi_i$
- 如果 $\Game=\sum \sigma_i$是仿射链，且如果$\Phi_i=T \circ \sigma_i$ 那么又写成$\Psi = T\circ \Gamma$ 或写成$T(\sum \sigma_i)=\sum T\sigma_i$
- 有向k-单形 $\Phi=T\circ \sigma$的边界$\partial \Phi$定义为 (k-1)-链
  - $\partial \Phi = T(\partial \sigma)$
  - 为了说明是合理的，如果T是仿射，那么$\Phi=T\circ \sigma$是有向仿射k-单形， 这时它是边界定义的推论
  - 如果$\Phi$属于$\mathscr{C}''$类，$\partial \Phi$就是属于$\mathscr{C}''$类的，可以直接推知
  - 定义 k-链 $\Psi=\sum \Phi_i$的边界$\partial \Psi$为 (k-1)-链
  - $\partial \Psi=\sum \partial \Phi_i$

10.31 正向边界 到目前为止，已经把边界与链联系上了，但还没有与$R^n$的子集联系上，关于边界的这种看法，对于Stokes定理的叙述和证明，是最适当不过了，然而在应用中，特别是在$R^2$或$R^3$的应用中，谈某些集合的"有向边界"，也是很通常和方便的
- 设$Q^n$是$R^n$中的标准单形，$\sigma_0$是以$Q^n$为参数域的恒等映射,$\sigma_0$可以看作$R^n$中的正向n-单形，它的边界$\partial \sigma_0$是仿射(n-1)-链 这个链叫做集$Q^n$的正向边界
- 例如$Q^3$的正向边界是 $[e_1,e_2,e_3]-[0,e_2,e_3]+[0,e_1,e_3]-[0,e_1,e_2]$
- 令T为$Q^n$到$R^n$中的$\mathscr{C}''$类 1-1映射，设它的函数行列式是整的（至少在Q^n$内部），设$E=T(Q^n)$ 由反函数定理，E是$R^n$中某个开集的闭包，我们定义集$E$的正向边界为(n-1)-链, $\partial T=T(\partial \sigma_0)$
- 并且可以把这个(n-1)-链 记作$\partial E$
- 在这里显然会有这样的疑问，如果 $E=T_1(Q^n)=T_2(Q^n)$ 并且如果$T_1,T_2$的函数行列式都是正的，是否必然$\partial T_1=\partial T_2$呢？也就是 $\int_{\partial T_1}\omega=\int_{\partial T_2} \omega$
- 是否对于每个 (n-1)-形式$\omega$成立的，答案是肯定的，证明略
- 设$\Omega = E_1\cup \cdots \cup E_r, E_i=T_i(Q^n)$ 每个$T_i$与上面的T有同样的性质，$E_i$的内部两两不相交, 那么就把 (n-1)-链 $\partial \Omega = \partial T_1+\cdots +\partial T_r$叫做$\Omega$的正向边界
- 例如: $R^2$中的单位正方形$I^2$是$\sigma_1(Q^2)$与$\sigma_2(Q^2)$的并, 这里$\sigma_1(u)=u,\sigma_2(u)=e_1+e_2-u$
  - 因为 这里 它们函数行列式都是$1 > 0$( $\det [1,0;0,1]=1,\det [-1,0;0,-1]=1$)
  - $\sigma_1 = [0,e_1,e_2],\sigma_2=[e_1+e_2,e_2,e_1]$
  - $\partial \sigma_1=[e_1,e_2]-[0,e_2]+[0,e_1]$
  - $\partial \sigma_2=[e_2,e_1]-[e_1+e_2,e_1]+[e_1+e_2,e_1]$
  - $\partial I^2=\partial \sigma_1+\partial \sigma_2=[0,e_1]+[e_1,e_1+e_2]+[e_1+e_2,e_2]+[e_2,0]$ 是$I^2$的正向边界
  - 如果$\Phi$是$R^m$中以$I^2$为参数域的2-surface, 那么$\Phi$(当作 2-forms 上的函数) 与2-chain $\Phi\circ \sigma_1+\Phi \circ \sigma_2$相同，于是
  - $\partial \Phi = \partial(\Phi \circ \sigma_1)+\partial(\Phi \circ \sigma_2)=\Phi(\partial \sigma_1)+\Phi(\partial \sigma_2) = \Phi(\partial I^2)$
  - 如果$\Phi$的参数域是正方形$I^2$，我们不必回到单形$Q^2$,而可以直接从$\partial I^2$得到$\partial \Phi$

10.32 例 对于$0\le u \le pi, 0\le v \le 2\pi$
- 定义$\Sigma (u,v)=(\sin u \cos v, \sin u\sin v,\cos u)$ 于是$\Sigma$是$R^3$中的2-surface, 它的参数域是长方形$D\subset R^2$,它的值域是$R^3$中的单位球, 它的边界是$\partial \Sigma=\Sigma(\partial(D))=\gamma_1+\gamma_2+\gamma_3+\gamma_4$, 其中(这里是根据边界定义得到的)
- $\gamma_1(u)=\Sigma(u,0)=(\sin u,0,\cos u)$
- $\gamma_2(u)=\Sigma(\pi,v)=(0,0,-1)$
- $\gamma_3(u)=\Sigma(\pi-u,2\pi)=(\sin u,0,-\cos u)$
- $\gamma_4(u)=\Sigma(0,2\pi-v)=(0,0,1)$
- u,v的参数区间是$[0,\pi],[0,2\pi]$
- 因为$\gamma_2,\gamma_4$是常量，它们的导数是0，因此任何1-forms在其上的积分是0
- 因为$\gamma_3(u)=\gamma_1(\pi-u)$ 
- 直接用 10.11定义 $\int_{\gamma_3}\omega = - \int_{\gamma_1}\omega$ 对于任何1-forms $\omega$成立，于是$\int_{\partial \Sigma}\omega =0$进而$\partial\Sigma=0$
- 按照地理学术语, $\partial \Sigma$从北极N出发，沿子午线跑到南极S，S停一下又同一子午线回到N，

### Stokes定理 stokes' theorem

10.33 Stokes定理 设$\Psi$是开集$V\subset R^n$中的$\mathscr{C}''$类的k-链, $\omega$是V中的(k-1)-form, 那么
- $\int_{\partial \Psi} \omega = \int_{\Psi} d\omega$
- k=m=1时，加一个可微的假设，就是微积分基本定理，
- k=m=2时 就是Green定理
- k=m=3是，就是Gauss-Ostrogradsky定理（散度定理divergence theorem
- k=2,m=3的情况，是由Stokes最先发现的(Spivak的书描述了一些历史背景)
- 证:
  - 只要对$V$中$\mathscr{C}''$类的每个 有向k-单形$\Phi$证明
  - $\int_{\partial \Phi} \omega = \int_{\Phi} d\omega$, 那么由10.30 可推出本结果
  - 固定一个$\Phi$,令$\sigma=[0,e_1,\cdots,e_k]$, 这样$\sigma$是以$Q^k$为参数域而由恒等映射所确定的 有向仿射k-单形, 因$\Phi$又是定义在$Q^k$上的(定义10.30)，并且$\Phi \in \mathscr{C}''$, 所以存在包含$Q^k$的开集$E\subset R^k$, 并且存在着$E$到$V$内并使得$\Phi=T\circ \sigma$的$\mathscr{C}''$映射$T$, 由定理10.25和10.22c, 
    - $\int_{\Phi} d\omega = \int_{T\sigma} d\omega = \int_{\sigma} (d\omega)_T = \int_{\sigma} d(\omega_T)$
    - $\int_{\partial \Phi} \omega = \int_{\partial (T\sigma)}\omega = \int_{T(\partial \sigma)}\omega = \int_{\partial \sigma} \omega_T$
  - 因为$\omega_T$是E 中的(k-1)-form， 只要对于特殊的单形 $\sigma$及E中的每个$\mathscr{C}'$类(k-1)-形式$\lambda$来证, $\int_{\sigma} d\lambda = \int_{\partial \sigma} \lambda$
  - 如果k=1, 有向0-forms的定义说明
    - 对于$[0,1]$上的每个连续可微函数$f$有关系式$\int_0^1 f'(u)du=f(1)-f(0)$
  - k > 1,固定 整数$r,r \in [1,k]$, 选定$f\in \mathscr{C}'(E)$
    - 只要对于$\lambda = f(x) dx_1\wedge \cdots \wedge dx_{r-1}\wedge dx_{r+1}\wedge\cdots\wedge dx_k$来证明
    - 单形边界是$\partial \sigma = [e_1,\cdots,e_k]+\sum_{i=1}^k (-1)^i \tau_i$, 这里$\tau_i$是去掉$e_i$的剩余
      - 令$\tau_0=[e_r,e_1,\cdots,e_{r-1},e_{r+1},\cdots,e_k]$
    - 所以$\partial \sigma = (-1)^r\tau_0+\sum_{i=1}^k(-1)^i\tau_i$
      - 每个$\tau_i$以$Q^{k-1}$为参数域
    - 如果$x=\tau_0(u)$且$u\in Q^{k-1}$那么
      - $x_j=u_j, j \in [1,r)$
      - $x_r=1-(u_1+\cdots+u_{k-1})$
      - $x_j=u_{j-1}, j \in (r,k]$
    - 如果$1\le i \le k, x=\tau_i(u)$且$u\in Q^{k-1}$那么
      - $x_j=u_j, j \in [1,i)$
      - $x_i=0$
      - $x_j=u_{j-1}, j \in (i,k]$
    - 令$J_i$为由$\tau_i$诱导出来的映射$(u1,\cdots,u_{k-1})\to (x_1,\cdots,x_{r-1},x_{r+1},\cdots,x_k)$的函数行列式
      - $i=0$ and $i=r$时, 上面映射是恒等映射, det = 1, 对于其他i来说，有一行是全0，
    - 所以$\int_{\partial \sigma} \lambda = (-1)^{r-1}\int_{\tau_0} \lambda + (-1)^r\int_{\tau_r}\lambda$
      - $=(-1)^{r-1}\int [f(\tau_0(u))-f(\tau_r(u))]du$
    - 另一方面 $d\lambda = (D_rf)(x)dx_r\wedge dx_r \wedge dx_1\wedge \cdots \wedge dx_{r-1} \wedge dx_{r+1} \wedge \cdots \wedge dx_k$
    - $=(-1)^{r-1} (D_rf) (x) dx_1\wedge \cdots \wedge dx_{k}$
    - 所以$\int_{\sigma} d \lambda = (-1)^{r-1} \int_{Q^k} (D_rf)(x)dx$
      - 我们先对$x_r$在闭区间$[0,1-(x_1+\cdots+x_{r-1}+x_{r+1}+\cdots+x_k)]$上积分以求值，令$(x_1,\cdots,x_{r-1},x_{r+1},\cdots,x_k)=(u_1,\cdots,u_{k-1})$
      - 说明上面两个积分右侧相等 $=(-1)^{r-1}\int [f(\tau_0(u))-f(\tau_r(u))]du = (-1)^{r-1} \int_{Q^k} (D_rf)(x)dx$

### 闭形式与恰当形式 closed forms and exact forms

10.34 定义 设$\omega$是开集$E\subset R^n$上的k-form, 如果存在着E中的(k-1)-形式$\lambda$ 适合$\omega = d\lambda$ 那么就说$\omega$在E中是恰当的
- 如果$\omega$属于$\mathscr{C}'$类并且$d\omega =0$，那么$\omega$叫作闭的
- 定理10.20b 说明,$\mathscr{C}'$类的每个恰当形式是闭形式
- 在某些集E, 例如在凸集上，逆命题正确， 就是10.39 通常称为Poincare引理，及定理10.40的内容，
- 然而，例10.36 及 10.37要提出非恰当的闭形式

10.35 评注 
- (a) 要判定一个已知k-form 是否是闭的，只要把$\omega$ 的标准表示中的系数 微分即可，例如，开集$E\subset R^n$上的$f_i\in \mathscr{C}'(E)$时，1-form $\omega = \sum_{i=1}^n f_i(x) dx_i$ 是闭的，当且仅当对于$1,\cdots,n$中的一切i,j 以及一切$x\in E$，$(D_jf_i)(x)=(D_if_j)(x)$成立
- 注意，这是“点态”条件，它并不蕴含那种依赖于E的形状的整体性质
- 另一方面，要想证明$\omega$在E中是恰当的，必须证明存在着E上的形式$\lambda$, 满足$d\lambda=\omega$, 这就等于在整个E中，而不是局部的，解一组偏微分方程。例如为了$\omega$表达式是恰当的, 就必需求一函数(或0-form) $g\in \mathscr{C}'(E)$ 要它使得$(D_ig)(x)=f_i(x), x\in E, 1\le i \le n$, 上面的 点态是这个的必要条件
- (b) 设$\omega$是$E$中的恰当exact k-form, 于是存在着E中的 (k-1)-form $\lambda$使$d\lambda = \omega$, 而Stokes定理断定, 对于E中的每个$\mathscr{C}''$类 k-链 $\Psi$
  - $\int_{\Psi}\omega = \int_{\Psi} d\lambda = \int_{\partial \Psi} \lambda$
  - 如果$\Psi_1,\Psi_2$都是这样的链，且它们有相同的边界，那么$\int_{\Psi_1}\omega =\int_{\Psi_2} \omega$
  - 特别在E中的每个边界为0的k-链上,E中的 exact k-form的积分维0
  - 作为这件事的一个重要的特殊情况，注意E中的恰当1-form 在E中的闭（可微）曲线上的积分为0
- (c)设$\omega$ 是E中的闭 k-form, 于是$d\omega =0$ ,并且Stokes定理断定，对于E中属于$\mathscr{C}''$类的每个(k+1)-chain $\Psi$
  - $\int_{\partial \Psi}\omega = \int_{\Psi} d\omega = 0$
  - 换句话说 E中的闭k-form ,在作为E中(k+1)-chain的边界这样的k-chain上积分为0
- (d) 设$\Psi$是E中的(k+1)-chain, $\lambda$是E中的(k-1)-form, 二者都属于$\mathscr{C}''$类，因为$d^2\lambda = 0$把Stokes定理使用两次，$\int_{\partial \partial \Psi}\lambda = \int_{\partial \partial \Psi} d\lambda=\int_{\Psi} d^2\lambda=0$
- 由此$\partial^2 \Psi = 0$ 换句话说 边界的边界是0

10.36 例 令$E=R^2-\lbrace 0\rbrace$ 为去掉原点的平面，1-form $\eta=\frac{xdy-ydx}{x^2+y^2}$ 在E中是闭的. 这极易用微分验证
- 固定$r>0$并定义$\gamma(t)=(r\cos t,r\sin t),0\le t\le 2\pi$, 于是$\gamma$是E中的曲线（有向1-form） ,因为$\gamma(0)=\gamma(2\pi)$所以$\partial \gamma = 0$, 直接计算知道$\int_{\gamma} \eta =2\pi \neq 0$
- 这个例子说明了
  - $\eta$不是E中 恰当微分，否则 应该为0
  - $\gamma$不是E中 任何$\mathscr{C}''$类 2-chains 的边界，否则它是闭的，积分应为0

10.37 例 令$E=R^3-\lbrace{0}\rbrace$ 去掉原点的三维空间, 定义$\xi=\frac{xdy\wedge dz+ydz\wedge dx+z\dx\wedge dy}{(x^2+y^2+x^2)^{3/2}}$
- 这里已经将$(x_1,x_2,x_3)$换写成了$(x,y,z)$ 直接微分就知道$d\xi =0$, 所以$\xi$是E中的 闭2-form
- 令$\Sigma$是 10.32中 所构造的在 E中的2-chain，$\Sigma$是$R^3$中单位球的参数表示, 用10.32的矩形D作为参数域，
- $\int_{\Sigma} \xi = \int_D \sin u du dv = 4\pi \neq 0$
- 因此 $\xi$不是$E$中的恰当微分(10.32证明了$\partial \Sigma =0$),虽然$\partial \Sigma =0$,球$\Sigma$也不能是E中任何($\mathscr{C}''类$) 3-chain的边界

10.38 定理，设 $E$ 是 $R^n$ 中的凸开集，$f \in \mathscr{C}'(E)$，$p$ 是整数 $1 \le p \le n$ 且 $(D_j f)(x) = 0, (p < j \le n, x \in E)$，那么存在 $F \in \mathscr{C}'(E)$ 使得 $(D_p F)(x) = f(x)$，$(D_j F)(x) = 0, (p < j \le n, x \in E)$。

证明：
把 $x$ 写成 $x = (x_{\text{left}}, x_p, x_{\text{right}})$。
设 $V$ 是所有 $(x_{\text{left}}, x_p)$ 的集，$V$ 是 $E$ 的摄影，必为 $R^p$ 中的凸开集，因为 $E$ 是凸集，并且
$$
(D_j F)(x) = 0, \quad (p < j \le n, x \in E) \tag{116}
$$
- 于是存在$F\in \mathscr{C}'(E)$使得
- $(D_pF)(x)=f(x), (D_jF)(x)=0, (p<j\le n,x\in E)$
- 证明:
  - 把x写成$x=(x_{left},x_p,x_{right})$
  - 设V是所有$(x_{left},x_p)$的集，V是E的摄影，必为$R^p$中的凸开集，因为E是凸集，并且116 成立，$f(x)$就与$x_{right}$无关，因此存在以V为定义域的函数$\varphi$,对于一切$x\in E$使得$f(x)=\varphi(x_{left},x_p)$
  - 如果p=1,V是$R^1$中的开区间(可能无界), 取$c\in V$并且定义 $F(x)=\int_c^{x_1}\varphi(t)dt, x\in E$
  - 如果$p > 1$令U是能够对于某个$x_p$ 使得$(x',x_p)\in V$的所有$x_{left}\in R^{p-1}$的集，于是$U$是$R^{p-1}$的凸开集，并且存在函数$a\in \mathscr{C}'(U)$，它对每个$x_{lefh} \in U$ 使得 $(x_{left},\alpha(x_{left}))\in V$ 成立，换句话说$\alpha$的图像在$V$中， 定义$F(x)=\int_{\alpha(x_{left})}^{x_p} \varphi(x_{left},t) dt,x\in E$

10.39 定理 设$E\subset R^n$是 凸开集, $k \ge 1$, $\omega$是$E$中的$\mathscr{C}'$类 k-form 且$d\omega =0$,那么E中必有一个 (k-1)-form $\lambda$ 满足$\omega =d\lambda$
- 简单说，凸集的闭形式是恰当的
- 证明:
  - 当$p=1,\cdots,n$时，用$Y_p$表示由E中的合于一下条件的一切k-form $\omega$构成的集，$\omega$属于$\mathscr{C}'$类，标准表示$\omega =\sum_I f_I(x)dx_I$中不含$dx_{p+1},\cdots,dx_n$ 换句话说, 如果有某个$x\in E$使得$f_I(x)\neq 0$就会$I\subset \lbrace 1,\cdots,p\rbrace$
  - 现在对p用归纳法
  - 首先假定$\omega \in Y_1$,于是$\omega = f(x) dx_1$,因为$d\omega =0$对于$1 < j \le n$, $x\in E$有$(D_jf)(x)=0$. 由定理10.38 存在着一个$F\in \mathscr{C}'(E)$使得$D_1F=f$而对$1< j \le n$有$D_jF=0$. 因此 
    - $\omega =f(x) dx_1=(D_1F)(x)dx_1 = dF$成立
  - 取$p > 1$,并做如下归纳假定, 属于$Y_{p-1}$的每个闭 k-forms 是E中的恰当形式.
  - 选$\omega \in Y_{p}$使$d\omega = 0$根（118）式
    - $\sum_I \sum_{j=1}^n (D_jf_I)(x)dx_j\wedge dx_I=d\omega =0$
  - 考虑满足$p < j \le n$的一个固定的j, 在118式中出现的每个$I$在$\lbrace 1,\cdots,p \rbrace$中,如果$I_1,I_2$是两个这样的 k-指标. 并且设$I_1\neq I_2$，那么$(k+1)-$指标$(I_1,j)$与$(I_2,j)$就不同，所以不能抵消，而由119式推知118中的每个系数满足
  - $(D_jf_I)(x)=0, x\in E, p < j \le n$
  - 现在 在118式中 把含$dx_p$的项集中到一起，并把$\omega$写成
    - $\omega = \alpha + \sum_{I_0} f_I(x) dx_{I_0}\wedge dx_p, \alpha \in Y_{p-1}$的形式,
    - 每个$I_0$是$\lbrace{1,\cdots,p-1}$中的 递增(k-1)-指标,并且$I=(I_0,p)$， 定理10.38 可以提供满足$D_pF_I=f_I,D_jf_I=0,(p < j \le n)$的函数$F_I\in \mathscr{C}'(E)$
    - 令$\beta=\sum_{I_0} F_I(x) dx_{I_0}$
    - 并定义$\gamma =\omega - (-1)^{k-1}d\beta$, 因为$\beta$是$(k-1)-$形式,从而$\gamma=\omega-\sum_{I_0}\sum_{j=1}^p (D_jF_I)(x)dx_{I_0}\wedge dx_j$
    - $=\alpha-\sum_{I_0}\sum_{j=1}^{p-1} (D_jF_I)(x)dx_{I_0}\wedge dx_j$
  - 它显然在$Y_{p-1}$中,因为$d\omega =0,d^2\beta =0$所以必然$d\gamma =0$,因此 由归纳假设知道,在E中有某个$(k-1)-$形式$\mu$, 使得$\gamma = d\mu$, 如果令$\gamma = \mu + (-1)^{k-1}\beta$ 就得到 $\omega=d\lambda$

10.40 定理 固定k, $1\le k \le n$令$E\subset {R^n}$是开集,其中每个闭$k-$形式是恰当的，再令$T$是把E 映满开集$U\subset R^n$的1-1 $\mathscr{C}''$映射, 它的逆$S$又属于$\mathscr{C}''$
- 那么$U$中的每个闭$k-$形式是$U$中的恰当形式
- 注意定理10.39 每个凸开集E满足本定理的题设，E和U之间的关系可以说成事它们$\mathscr{C}''-$等价
- 于是在与凸开集$\mathscr{C}''-$等价的任意集中，每个闭形式是恰当形式
- 证明 令$\omega$是$U$中的 k-form 且$d\omega =0$,由定理10.22c，$\omega_T$是E中的k-form且$d(\omega_T)=0$ 因此 $\omega_T=d\lambda$, $\lambda$是E中的(k-1)-form, 由定理10.23及再一次用定理$10.22c$得到$\omega=(\omega_T)_S=(d\lambda)_S=d(\lambda_S)$
- 因$\lambda_S$ 是U中的(k-1)-form, 所以$\omega$是U中的恰当形式

10.41 评注 在应用中，方格时常是比单形更方便的参数域，如果我们的全部论述都基于方格，而不基于单形的话，Stokes定理的证明中出现的计算将会简单些（在Spivak的书中就是这样做的）TODO，
- 我们宁愿要单形的理由是，有向单形的便捷的定义，看来是比方格边界的定义容易些也自然些，又把集 分割成单形（称为三角割分 triangulation）在拓扑学中起着重要的作用，而在拓扑学的某些方面与微分形式之间，又存在着密切的联系， Singer 及Thorpe的书对于这个论题又很好的介绍
- 因为每个方格能被 triangulated， 我们may regard it as a chain. 对于2维的情形，在例10.32中
- Poincare引理(10.39)有许多证明的方法，例如可以参看$Spivak$书，或Fleming的书，

### 向量分析 vector analysis

在本章将结束时，对$R^3$中有关向量分析的定理,做一点应用 这些订立时关于微分形式定理的一些特殊情况，但又是常事以不同的术语来叙述的，所以我们面对的任务是把一种说法 翻译成 另外的说法

10.42 向量场 vector field 令$F=F_1e_1+F_2e_2+F_3e_3$ 为开集$E\subset R^3$ 到$R^3$内的连续映射，因为$F$给E的每个点联系上一个向量，所以有时把F叫做向量场，特别在物理中是如此, 联系着每个这样的F，有一个 1-form
- $\lambda_F=F_1dx+F_2dy+F_3dz$
- 以及一个2-form $\omega_F=F_1dy\wedge dz+F_2dz\wedge dx + F_3dx \wedge dy$
- 以下本章 后续各处，用$(x,y,z)$代替$(x_1,x_2,x_3)$
- 于是把 向量场,1-form,2-form放在一起研究
- that every 1-form lambda in E is lambdaF for some vector field F in E, and that every 2-form omega is omega_F for some vector field F in E
- 如果$u\in \mathscr{C}'(E)$是实函数，那么 它的 梯度gradient, $\nabla u=(D_1u)e_1+(D_2u)e_2+(D_3u)e_3$
- 今设 F是E中的$\mathscr{C}'$类的向量场，它的 旋度curl $\nabla \times F$ 是在E中由 $\nabla \times F=(D_2F_3-D_3F_2)e_1+(D_3F_1-D_1F_3)e_2+(D_1F_2-D_2F_1)e_3$所定义的向量场
- 而它的散度divergence $\nabla \cdot F$是在$E$中由$\nabla \cdot F=D_1F_1+D_2F_2+D_3F_3$定义的实函数
- 这些 物理量解释，细节，建议看 O. D. Kellogg的书

10.43 定理 设$E$是$R^3$中的开集, $u\in \mathscr{C}''(E)$, G是$E$中$\mathscr{C}''$类的向量场
- (a) 如果$F=\nabla u$ 所以 $\nabla \times F=0$
- (b) 如果$F=\nabla \times G$那么$\nabla \cdot F=0$
- 此外，如果$E$能$\mathscr{C}''$等价于凸集，那么(a),(b)的逆命题也成立， 其中要假定F是E中的$\mathscr{C}'$类向量场
  - (a') 如果$\nabla\times F=0$那么F是某个$u \in \mathscr{C}''(E)$的梯度$F=\nabla u$
  - (b') 如果$\nabla \cdot F=0$, 那么F是某个$u\in \mathscr{C}''(E)$的旋度：$F=\nabla \times G$
- 证明
  - 与微分形式联系
  - $F=\nabla u$ 当且仅当 $\lambda_F=du$
  - $\nabla \times F=0$ 当且仅当 $d\lambda_F=0$
  - $F=\nabla \times G$当且仅当$\omega_F=d\lambda_G$
  - $\nabla \cdot F=0$当且仅当$d\omega_F=0$
  - 证明(a) 如果$F=\nabla u$那么$\lambda_F=du$, 所以$d\lambda_F=d^2u=0$,所以$\nabla \times F=0$
  - 证明(a') 设$\nabla \times F=0$, 于是$d\lambda_F=0$, 由10.40知道是某个0-form 的u是的 $\lambda_f = du$ 因此$F=\nabla u$

10.44 体积元素 k-form $dx_1\wedge \cdots \wedge dx_k$ 叫作$R^k$中的体积元素. 体积e元素时长记作$dV$或$dV_k$, 当$\Phi$是$R^k$中的正向k-surface, 而f是$\Phi$的值域上的连续函数时, 便用
- $\int_\Phi f(x) dx_1\wedge \cdots \wedge dx_k = \int_\Phi f(x) dV_k$
- 用这个术语的理由非常简单：设$D$是$R^k$中的参数域，如果$\Phi$是$D$到$R^k$的1-1$\mathscr{C}''$映射, 并带有正的函数行列式$J_{\Phi}$, 那么
- $\int_D f(\Phi(u)) J_{\Phi}(u) du = \int_{\Phi(D)} f(x) dx$
- 特别的 当f=1时，能计算出体积
- 特别的k=2时，也就是面积，常用$dA$

10.45 Green定理 设E是$R^2$中的开集, $\alpha,\beta \in \mathscr{C}'(E)$, $\Omega$ 是E的闭子集，并且$\Omega$有10.31 段中所说的正向边界，那么, $\int_{\partial \Omega}(\alpha dx+\beta dy)=\int_{\omega} (\frac{\partial \beta}{\partial x} - \frac{\partial \alpha}{\partial y})dA$
- 证明$\lambda =\alpha dx+\beta dy$ 于是
- $d\lambda =(D_2\alpha)dy\wedge dx + (D_1\beta)dx\wedge dy$
- $=(D_1\beta - D_2\alpha)dA$
- 也就是$\int_{\partial \Omega}\lambda = \int_{\Omega} d\lambda$
- 根据Stokes定理上述成立
- 取$\alpha(x,y)=-y,\beta(x,y)=x$ 得到$\frac{1}{2}\int_{\partial \Omega} (xdy-ydx)=A(\Omega)$

10.46 R^3中的面积元素 令$\Phi$是$R^3$中的$\mathscr{C}'$类2-surface, 其参数域$D\subset R^2$ 给每点$(u,v)\in D$结合一个向量
- $N(u,v)=\frac{\partial(y,z)}{\partial(u,v)}\cdot e_1+\frac{\partial(z,x)}{\partial(u,v)}\cdot e_2+\frac{\partial(x,y)}{\partial(u,v)}\cdot e_3$
- $(x,y,z)=\Phi(u,v)$相对应
- 如果$f$是$\Phi(D)$ 上的连续函数, f在$\Phi$上的面积分就定义为
- $\int_\Phi fdA=\int_D f(\Phi(u,v))\cdot |N(u,v)| du dv$
- 特别的，当f=1时，就得到$\Phi$的面积，即
  - (132) $A(\Phi)=\int_D |N(u,v)| du dv$
- 下面讨论 是否合理，刻画了向量N的几何特征
- 设$\Phi=\varphi_1e_1+\varphi_2e_2+\varphi_3e_3$, 固定一点$p_0=(u_0,v_0)\in D$, 令$N=N(p_0)$ 并令$\alpha_i=(D_1\varphi_i)(p_0), \beta_i=(D_2\varphi_i)(p_0), i=1,2,3$
- 然后让$T\in L(R^2,R^3)$是由$T(u,v)=\sum_{i=1}^3 (\alpha_iu+\beta_iv) e_i$所定义的线性变换，注意 按照定义9.11, $T=\Phi'(p_0)$
- 现在假定$T$的秩是2（如果rank T=1或0，那么N=0，下面提到的切平面就退化成一条线或一个点了），于是仿射映射$(u,v)\to \Phi(p_0)+T(u,v)$的值域是一个平面，叫作$\Phi$在$p_0$的切平面tangent plane
- 带入得到$N=(\alpha_2\beta_3-\alpha_3\beta_2)e_1+(\alpha_3\beta_1-\alpha_1\beta_3)e_2+(\alpha_1\beta_2-\alpha_2\beta_1)e_3$
- 因为$Te_1=\sum_{i=1}^3\alpha_i e_i,Te_2=\sum_{i=1}^{3}\beta_i e_i$
- 所以$N\cdot (Te_1)=0=N\cdot(Te_2)$, 因此N垂直于perpendicular切平面，所以把它叫做$\Phi$在$p_0$的法向量normal
- 另一方面$R^3$中 把 $e_1,e_2,e_3$变成$Te_1,Te_2,N$的线性变换的行列式是 $|N|^2 > 0$, 于是3-单形 [0,Te_1,Te_2,N]是正向的
- N 的第三个性质，它是前两性质的推论：上面所提到以$|N|^2$为值的行列式，是用$[0,Te_1],[0,Te_2],[0,N]$作为棱的平行六面体的体积，
- $[0,N]$垂直于其他两棱，所以以 $0,Te_1,Te_2,T(e_1+e_2)$为顶点的四边形面积是$|N|$
- 这个四边形是$R^2$中单位正方形，在$T$之下的象，如果E是$R^2$中的矩形，（由T的线性）能推知平行四边形T(E)的面积是
- $(140) A(T(E))=|N|A(E)=\int_{E} |N(u_0,v_0)| du dv$
- 我们断定，当$\Phi$是仿射映射时， 面积公式正确（f=1）的情况
- 为了证明$A(\Phi)=\int_D |N(u,v)|du dv$在一般情况下正确，把D分成许多小矩形，在每个小矩形中取一点$(u_0,v_0)$，并在每个矩形内用相应的切平面代替$\Phi$. 通过140所得到的诸平行四边形面积之和，就是$A(\Phi)$的一个近似值, Finally one can justify 131 from 132 by approximating f by step functions

10.47 例 设 $0 < a < b$, a,b都是固定的 K是由
- $0 \le t \le a,0 \le  u \le 2\pi,0\le v \le 2\pi$ 确定的3-方格
- 方程
  - $x=t\cos u$
  - $y=(b+t\sin u)\cos v$
  - $z=(b+t\sin u)\sin v$
- 描写的是把$R^3$映到$R^2$内的映射$\Psi$,他在K的内部是1-1的，因此$\Psi(K)$是个实心环，函数行列式是
  - $J_\Psi = \frac{\partial(x,y,z)}{\partial(t,u,v)}=t(b+t\sin u)$
- 它在K上取正值，除非是在面t=0上, 如果在K上将$J_\Psi$积分，就得到实心环的体积 $vol(\Psi(K))=2\pi^2 a^2b$
- 现在 考虑2-chain $\Phi=\partial\Psi$, $\Psi$把K的两个面u=0及$u=2\pi$映满同一个柱面带，但指向相反
- $\Psi$把面v=0及$v=2\pi$映满同一个圆盘，但指向相反
- $\Psi$把面$t=0$映满一个圆,这圆要把0算成2-chain $\partial \Psi$的一部分（相应的函数行列式为0）。 所以$\Psi$ 只不过是当$(141)$中令$t=a$时，以正方域$0 \le u \le 2\pi$, $0 \le v \le 2\pi$为参数域D,所得到的一个2-surface
- $\Phi$在$(u,v)\in D$的法线是向量$N(u,v)=a(b+a\sin u)n(u,v)$
- 这里$n(u,v)=(\cos u)e_1+(\sin u\cos v)e_2+(\sin u \sin v)e_3$
- 因为$|n(u,v)|=1$所以得到$|N(u,v)}=a(b+a\sin u)$ 如果把它在D上积分，环面的面积$A(\Psi)=4\pi^2 ab$
- 如果把$N=N(u,v)$看成是从$\Psi(u,v)$指向$\Psi(u,v)+N(u,v)$的一个有向线段，那么N指向外，也就是说，从$\Psi(K)$离去，当t=a时也如此，因为$J_{\Psi} > 0$
- 例如，取$u=v=\frac{\pi}{2},t=a$这给出$z$在$\Psi(K)$上的最大值,而对于这样选取的$(u,v),N=a(b+a)e_3$,指向上方

10.48 $R^3$中1-form的积分 令$\gamma$是开集$E\subset R^3$中的$\mathscr{C}'$曲线，其参数闭区间为$[0,1]$, 就如$10.42$向量场中那样,F是E中的向量场, 再按定义$\lambda_F$，$\lambda_F$在$\gamma$上的积分能按确定的方式写出，我们现在就来描述这种方式
- 对于任何$u\in [0,1]$
- $\gamma'(u)=\gamma_1'(u)e_1+\gamma_2'(u)'e_2,\gamma_3'(u)e_3$叫作$\gamma$在u的 tangent vector to $\gamma$ at u
- 定义$t=t(t)$为$\gamma'(u)$方向上的单位向量。
- 于是$\gamma'(u)=|\gamma'(u)|t(u)$
- $\int_{\gamma} \lambda_F=\sum_{i=1}^3 \int_0^1 F_i(\gamma(u))\gamma_i'(u)du$
- $=\int_0^1 F(\gamma(u))\cdot \gamma'(u)du$
- $=\int_0^1 F(\gamma(u)) \cdot t(u) |\gamma'(u)|du$
- 有些地方把 $|\gamma'(u)|du$称作弧长元素 element of arc length，常用$ds$表示
- $\int_\gamma \lambda_F=\int \gamma(F\cdot t)ds$
- 因为t是 单位 切向量，$F\cdot t$叫作F沿$\gamma$的切线分量
- F在$\gamma$的值域上定义，$t$在$[0,1]$上定义，
- 所以$F\cdot t$必须做适当的解释，$\gamma$是1-1的时候，$t(u)$能换成$t(\gamma(u))$ 这种困难就不出现了

10.49 $R^3$中2-form的积分，设$\Phi$是开集$E\subset R^3$中的$\mathscr{C}'$类 2-surface，其参数域$D\subset R^2. F为E中的向量场，并定义$\omega_F$,
- $\int_\Phi \omega_F=\int_{\Phi}(F_1dy\wedge dz+F_2dz\wedge dx+F_3dx\wedge dy)$
- $=\int_D F_1(\Phi(u,v))\frac{\partial(y,z)}{\partial(u,v)}du dv + F_2(\Phi(u,v))\frac{\partial(z,x)}{\partial(u,v)}du dv + F_3(\Phi(u,v))\frac{\partial(x,y)}{\partial(u,v)}du dv$
- $=\int_D F(\Phi(u,v))\cdot N(u,v) du dv$
- 令 $n=n(u,v)$是$N(u,v)$方向上的单位向量(如果某个(u,v)\in D,有N(u,v)=0）取$n(u,v)=e_1$) 于是 $N=|N|n$
- $=\int_D F(\Phi(u,v))\cdot n(u,v) |N(u,v)| du dv$
- $\int_{\Phi} \omega_F = \int_D (F\cdot n) dA$

10.50 Stokes 公式，最原始形式 设$F$是开集$E\subset R^3$中的$\mathscr{C}'$类向量场, $\Phi$是E中的$\mathscr{C}'$类2-surface
- 那么$\int_{\Phi}(\nabla \times F) n dA=\int_{\partial \Phi} (\lambda_F \cdot t)ds$
- 证明: 令$H=\nabla \times F$那么$\omega_H=d\lambda_F$
- 因此 $\int_\Phi (\nabla \times F) n dA=\int_{\Phi} (H\cdot n)dA=\int_{\Phi}\omega_H = \int_\Phi d\lambda_F =\int_{\partial \Phi} \lambda_F=\int_{\partial \Phi}  F \cdot t ds$
- 这里先用了H的定义，其中的F换作H，主要的一步用了定理10.33，最后用到按照明显的方式从曲线推广到1-chain

10.51 散度定理 设F是开集$E\subset R^3$中的$\mathscr{C}'$类向量场，$\Omega$是E的带有正向边界$\partial \Omega$的闭子集，那么
- $\int_{\Omega} (\nabla \cdot F) dV=\int_{\partial \Omega} (F\cdot n) dA$
- 证明:
  - $d\omega_F=(\nabla \cdot F)dx\wedge dy \wedge dz = (\nabla \cdot F)dV$
  - 因此 根据定理10.33 把它用于2-form $\omega_F$ 得到
  - $\int_\Omega (\nabla \cdot F)dV=\int_{\Omega}d\omega_F=\int_{\partial \Omega} \omega_F=\int_{\partial \Omega} (F\cdot n) dA$

## 回顾

积分

10.1 定义

想象一个k维的“方块”（叫k-方格），就像一个长方体，只不过维度可以更高。它的边界是用一些不等式（比如x在某个范围里）定义的。如果我们有一个在这方块上连续变化的函数（不会突然跳跃的那种），我们可以通过一步步积分来计算它的总值。比如，先沿着一个方向积分，再沿着另一个方向，依次下去，最后得到一个数，这个数就是函数在这方块上的积分。

10.2 定理

对于这样的`连续`函数，不管你按什么顺序去积分（比如先x后y，还是先y后x），最后结果都一样。
- 证明方式是 找代数 $\prod g_i(x_i)$, 它因为每个$x_i$之间关系是“独立的”所以 积分顺序对结果不影响
- stone-weierstrass，可以在 上述代数 中找到足够近的 g逼近f，那么 在不同 顺序下可以做得足够近，从而每个 分量 也被限制了，从而 $L(f)-L(f')=L(f)-L(g)-L(f')+L(g)=L(f-g)-L(f'-g)$

10.3 定义

函数的“支撑集”是指函数值不为零的点集合，再加上这些点的“边界”。如果一个函数的支撑集是有限的（不会无限散开），我们可以用一个包含它的大方块来算积分，结果不会因为方块选得不一样而改变。

10.4 例

有个特殊的形状叫k-单形，比如三维里就是一个四面体（像个三角锥）。如果我们想算一个函数在这上面的积分，可以把它放进一个方块里，外面补零，然后按方块的积分方法来算。结果也不在乎你怎么安排积分顺序。

本原映射

10.5 定义

本原映射是一种简单的变换，它最多只改变一个方向的坐标。比如，一个点在空间里移动，但只有高度变了，其他位置没动。这种变换用一个函数来控制那个改变的方向。

10.6 定义

“对换”就是把两个方向的坐标交换，其他保持不变。比如，把x和y换一下，z不动。

10.7 定理

如果一个变换很“平滑”（可微），而且在某个点附近可以“扭回来”（导数可逆），那么在那个点附近，它可以拆成一系列本原映射和对换的组合。就像复杂的舞蹈可以用几个基本动作拼出来。

单位的分割

10.8 定理

想象一个有限的区域被一堆开集（像气泡一样的区域）覆盖。我们可以造一些平滑的函数，每个函数在一个气泡里“活泼”，外面就“安静”，而且这些函数加起来在整个区域里总和是1。这叫“单位的分割”。

推论：如果一个函数只在这区域里有值，我们可以用这些分割函数把它拆成几块，每块只在一个气泡里活跃。

变量代换

10.9 定理

如果我们用一个平滑的、可逆的变换把一个区域变成另一个区域，算函数在这新区域上的积分时，可以在新区域的参数上算，但要乘一个“缩放因子”（Jacobian的绝对值）。就像地图投影，面积会变，但可以用一个比例调整回来。

微分形式

这一部分是微积分的核心工具，用来处理更高维的积分问题，最终引出Stokes定理。

10.10 定义

k-曲面是从一个k维紧区域（比如方格或单形）映射到更高维空间的东西。k-形式是一种符号表达，像是个“积分模板”，告诉我们在k-曲面上怎么算积分。它会把曲面上的变化（偏导数）考虑进去。

10.11 定义

0-形式就是普通的连续函数。k-形式的积分是按10.10的规则，在k-曲面上算出来的值。

10.12 例

线积分：一条曲线上的积分（比如x dy + y dx），只看起点和终点，结果与路径无关。如果是闭合曲线，积分可能是零。  



面积：某些闭曲线的积分能算出它围起来的面积，比如椭圆。



10.13 初等性质

两个k-形式相等，只要它们在每个k-曲面上的积分一样。  



微分形式有“反交换”性质：换顺序会变号，所以同一个方向重复就抵消成零。  



如果维度k超过空间维度n，k-形式只能是零。



10.14 基本k-形式

基本k-形式是用递增的方向（比如dx1 ∧ dx2）组合成的模板，每个k-形式都可以用这些基本形式拼出来。

10.15 定理

如果一个k-形式的积分总是零，那么它的每个系数（基本形式的“强度”）也必须是零。

10.16 基本k-形式的积

两个基本形式相乘，结果是个更高维的形式。如果有重复方向，结果是零；否则按顺序排好，可能会变个正负号。

10.17 乘法

k-形式可以相乘，结果是更高维的形式，满足分配律和结合律。0-形式（普通函数）乘k-形式就像给它加个“权重”。

10.18 微分

0-形式的微分是它的各个方向的变化率组合起来。  



k-形式的微分是把每个系数微分后，和原来的形式“相乘”。



10.19 例

一个函数在曲线上的微分积分，只取决于起点和终点的值，跟路径没关。这就像爬山，高度差只看两端。

10.20 定理

微分满足“Leibniz律”：两个形式相乘后微分，可以拆成两部分，可能带个正负号。  



如果形式够平滑（二阶可微），它的“二阶微分”总是零。



10.21 变量代换

一个k-形式在变换后，可以用新坐标表达，微分也要跟着变。

10.22 定理

变换后，形式的加法和乘法保持不变。  



如果形式和变换都够平滑，先微分再变换等于先变换再微分。



10.23 定理

变换可以复合：先做一次变换，再做另一次，结果等于直接做总的变换。

10.24 定理

k-形式的积分可以用变换后的形式在参数域上算，结果一样。

10.25 定理

如果变换后再积分，可以先在原区域上算变换后的形式，结果相同。

单形与链

10.26 仿射单形

仿射单形是一个从标准单形（像个三角锥）映射到空间里的形状，用点和线性变化定义。如果有方向，就叫“有向单形”。

10.27 定理

改变单形方向（比如正负号），积分会跟着变号。

10.28 仿射链

仿射链是一堆有向单形的组合，积分是每个单形积分的总和。

10.29 边界

k-单形的边界是它周围的(k-1)-单形组合，带上正负号，像个有向的轮廓。

10.30 可微单形及可微链

可微单形是用平滑变换生成的单形，可微链是一堆这样的单形。它们的边界也跟着定义。

10.31 正向边界

标准单形的边界叫正向边界。如果一个区域是用变换生成的，它的正向边界就是变换后的边界。

10.32 例

球面的边界积分是零，因为它是个闭合形状，起点和终点抵消了。

Stokes定理

10.33 Stokes定理

一个k-链的边界上的积分，等于它内部的微分形式的积分。这是个超级重要的定理，像微积分基本定理的高维版本。

闭形式与恰当形式

10.34 定义

恰当形式：能被某个低一阶形式的微分表示。  



闭形式：自己的微分是零。



10.35 评注

闭形式的边界积分是零。  



恰当形式的闭链积分是零。  



边界的边界总是零。



10.36 例

平面上一个去掉原点的形式是闭的（微分零），但不是恰当的（积分不为零）。

10.37 例

三维空间去掉原点的一个形式也是闭的，但不是恰当的，球面积分不为零。

10.38 定理

在凸区域（没有洞的形状），如果某些方向的变化率为零，可以找到一个函数解释它。

10.39 定理（Poincaré引理）

在凸区域，每个闭形式都是恰当的。

10.40 定理

如果两个区域通过平滑变换等价，一个满足闭形式是恰当的，另一个也满足。

10.41 评注

单形在拓扑学里很有用，但方格在计算上可能更方便。

向量分析

10.42 向量场

向量场是空间里每个点配一个箭头。可以用1-形式（线积分用）和2-形式（面积分用）表示。梯度、旋度、散度是描述它的三种方式。

10.43 定理

梯度的旋度是零，旋度的散度是零。  



在某些简单形状里（像凸区域），反过来也成立。



10.44 体积元素

k-形式的“体积元素”用来算k维空间的体积或面积。

10.45 Green定理

平面区域边界上的线积分等于内部的变化率差的面积分。

10.46 R^3中的面积元素

三维里的面积用曲面上的法向量算，积分是法向量长度乘以函数值。

10.47 例

环面的体积和面积可以用参数化和法向量算出来。

10.48 R^3中1-形式积分

向量场在曲线上的积分是它沿切线方向的分量总和。

10.49 R^3中2-形式积分

向量场在曲面上的积分是它沿法线方向的分量总和。

10.50 Stokes公式

曲面上的旋度积分等于边界上的线积分。

10.51 散度定理

区域内的散度积分等于边界上的法向通量。

这些定理串起来就是微分形式和积分理论的核心，从基本的积分定义到高维的Stokes定理，应用在数学和物理里非常广泛。希望这样解释能让你轻松理解！



