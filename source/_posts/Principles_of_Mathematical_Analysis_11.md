---
title: Walter Rudin 数学分析原理 11 Lebesgue理论
date: 2025-03-31
categories:
  - 数学分析
tags:
  - 微积分
  - 数学分析
---


## Lebesgue理论 the lebesgue theory

在相当广泛的条件下证明某些关键定理，只有若干主干清醒做了简略的证明

### 集函数 set functions

如果A与B是任意两个集，我们把满足$x\in A,x\not \in B$的一切$x$的集合记作$A-B$, 这并不意味$B\subset A$, 用0表示空集，如果$A\cap B=0$就说A与B不相交交

11.1  定义 $\mathscr{R}$是由集构成的一个类，并且由$A\in \mathscr{R}$ 能推出$A\cup B\in \mathscr{R},A-B\in \mathscr{R}$
- 就称 $\mathscr{R}$是环 ring
  - 这个性质和 群环域 的 环 不一样！？！？？？
- 由于$A\cap B=A-(A-B)$, 所以当$\mathscr{R}$是环时，必然有$A\cap B\in \mathscr{R}$
- 如果一旦$A_n\in \mathscr{R}$
- 就有$\cup_{n=1}^{\infty} A_n\in \mathscr{R}$
- $\mathscr{R}$便叫做$\sigma-$环
  - 对可列无穷并封闭
- 由于$\cap_{n=1}^{\infty} A_n=A_1-\cup_{n=1}^{\infty} (A_1-A_n)$, 因而如果$\mathscr{R}$是$\sigma-$环，必然$\cap_{n=1}^{\infty} A_n\in \mathscr{R}$
  - 则对可列无穷交封闭

<!--more-->

11.2  定义， 如果$\phi$ 能给每个$A\in \mathscr{R}$指派扩大实数系内的一个数$\phi(A)$, 便说$\phi$是定义在$\mathscr{R}$上的集函数。
- 如果能从$A\cap B=0$得出$\phi(A\cup B)=\phi(A)+\phi(B)$, $\phi$便是 可加的 addtive. 
- 如果能从$A_i\cap A_j =0,(i\neq j)$得出 $\phi(\cup_{n=1}^{\infty} A_n)=\sum_{n=1}^{\infty} \phi(A_n)$ 便是可数可加的
  - 左端与$A_n$的排列次序无关，因此重排定理表明,右侧只要收敛，就绝对收敛,如果不收敛，那么它的部分和就趋于$+\infty,-\infty$
- 以下一概假定$\phi$的值域不能同时包含 $+\infty$及$-\infty$, 因为这回使 上面的加法变得无意义，此外还排除，只以$+\infty$或$-\infty$为值的集函数
- 如果$\phi$可加，下面性质容易验证
- $\phi(0)=0$
- 当$i\neq j$时 $A_i\cap A_j=0$
  - $\phi(\cup A_i)=\sum \phi(A_i)$
  - $\phi(A_1 \cup A_i)+\phi(A_1 \cap A_2)=\phi(A_1)+\phi(A_2)$
- 如果对于一切A, $\phi(A) \ge 0$,并且$A_1\subset A_2$, 那么
  - $\phi(A_1)\le \phi(A_2)$
    - 非负的可加集函数，常常成为单调的
- 如果$B\subset A$且$|\phi(B)| < +\infty$那么$\phi(A-B)=\phi(A)-\phi(B)$

11.3 定理 假定$\phi$在 环$\mathscr{R}$上可数可加，并且$A_n\in \mathscr{R}$, $A_i\subset A_{i+1}$, $A\in\mathscr{R}$,而
- $A=\cup_{n=1}^{\infty} A_n$ 那么 当$n\in \infty$时
- $\phi(A_n)\to \phi(A)$
- 证明
  - $B_1=A_1, B_i=A_i-A_{i-1}$
  - $A_n=\cup B_i$, 且$B_i\cap B_j =0$所以
  - $\phi(A_n)=\sum_{i=1}^n \phi(B_i)$
  - 于是 $\phi(A)=\sum_{i=1}^{\infty} \phi(B_i)$

### Lebesgue测度的建立 construction of the lebesgue measure

11.4 定义，令$R^p$表示$p$维 欧几里得 空间，$R^p$中的 区间interval 指的是满足$a_i \le x_i \le b_i$,的点$x=(x_1,\cdots,x_p)$的集合
- 若A是有限个区间的并，称A为 初等集 elementary set
- 如果I是区间, 定义$m(I)=\prod_{i=1}^p (b_i-a_i)$
  - 注意 这里如果上面的$\le$换成$<$ 也是这样定义
- 如果$A=\cup I_i$,且这些区间两两不想交，令$m(A)=\sum m(I_i)$
- 用$\mathscr{E}表示$R^p$的所有初等子集elementary subset的类，需要验证以下性质
- $\mathscr{E}$是环，但不是$\sigma-$环
- 如果$A\in \mathscr{E}$，那么A必是有限个 不想交 区间的并
- 如果$A\in \mathscr{E}$, $m(A)$便由 上面定义的和完全确定，（也就是 结果不受到 具体分割方法的影响）
- $m$在$\mathscr{E}$上可加
- 特别的$p=1,2,3$时，m分别是长度，面积和体积

11.5 定义 $\phi$在$\mathscr{E}$上 的非负可加的集函数，如果对于每个$A\in \mathscr{E}$和$\epsilon >0$, 存在着闭集$F\in \mathscr{E}$和开集$G\in \mathscr{E}$, 满足$F\subset A\subset G$, 并且 $\phi(G)-\epsilon \le \phi(A)\le \phi(F)+\epsilon$, 便称$\phi$是正规的regular

11.6 例如
- (a) 集函数m是正规的
- (b) p=1, $\alpha$是对一切实x有定义的单调增函数, 
  - $\mu([a,b))=\alpha(b-)-\alpha(a-)$
  - $\mu([a,b])=\alpha(b+)-\alpha(a-)$
  - $\mu((a,b])=\alpha(b+)-\alpha(a+)$
  - $\mu((a,b))=\alpha(b-)-\alpha(a+)$
    - 因为$\alpha$可能间断，上面分类是必要的
  - $\mu$ 在$\mathscr{E}$是正规的
- 下一个目标是证明$\mathscr{E}$上的每个正规集函数可以推广成可数可加的集函数，后者定义在包含$\mathscr{E}$的$\sigma-$环上

11.7 定义 设$\mu$在$\epsilon$上可加,正规,非负并且有限. E是$R^p$中的任何集. 考虑由初等开集$A_n$组成的E的覆盖
- $E\subset \cup_{n=1}^{\infty} A_n$
- 定义$\mu^*(E)=\inf \sum_{n=1}^{\infty} \mu(A_n)$
- 此处的下确界是对$E$的一切由初等开集组成的可数覆盖来取的. $\mu^*(E)$叫作E的对应于$\mu$的 外测度
- 显然对于所有的$E$, $\mu^*(E)\ge 0$,而且当$E_1\subset E_2$时，$\mu^*(E_1)\le \mu^*(E_2)$

11.8 定理
- (a)对于每个$A\in \mathscr{E},\mu^*(A)=\mu(A)$
- (b)$E=\cup_I^{\infty} E_n$时
  - $\mu^{*}(E)\le \sum_{n=1}^{\infty} \mu^*(E_n)$
  - 叫作 次加性 subadditivity
- 注意(a)断言$\mu^*$是$\mu$从$\mathscr{E}$到$R^p$的一切子集的类上的推广
- 证明:
  - 选取$A\in \mathscr{E}$以及$\epsilon > 0$
  - $\mu$的正规性表明$A$包含在一个初等开集$G$之内,而$\mu(G)\le \mu(A)+\epsilon$,由于$\mu^{\star}(A)\le \mu(G)$,并且$\epsilon$是任意的，我们得到$\mu^*(A)\le \mu(A)$
  - $\mu^{\star}$的定义说明，有一列初等开集$\lbrace A_n\rbrace$,它们的并包含着A, 而且$\sum_{n=1}^{\infty} \mu(A_n)\le \mu^{\star}(A)+\epsilon$
  - $\mu$的正规性表明A包含着一个初等闭集合$F$,满足$\mu(F)\ge \mu(A)-\epsilon$, 又由于F是紧的，一定有某个N使得
    - $F\subset A_1\cup \cdots \cup A_N$
  - 所以$\mu(A)\le \mu(F)+\epsilon \le \mu(\cup A_i) +\epsilon$
  - $\le \sum_{1}^N \mu(A_n) +\epsilon \le \mu^{\star} (A)+2\epsilon$
  - 证明了a
  - 其次,设$E=\cup E_n$, 再设$\mu^{\star}(E_n)<+\infty$对一切n成立，给了$\epsilon > 0$,各$E_n$总有用初等开集造成的覆盖$\lbrace A_{nk}\rbrace$, 使得
    - $\sum_{k=1}^{\infty} \mu(A_{nk}) \le \mu^{\star}(E_n)+2^{-n}\epsilon$
    - 于是$\mu^{\star}(E)\le \sum_{n=1}^{\infty} \sum_{k=1}^\infty \mu(A_{nk}) \le \sum_{n=1}^{\infty} \mu^{*}(E_n)+\epsilon$
  - 从而证明b

11.9 定义 对于任意的$A\subset R^p,B\subset R^p$定义
- $S(A,B)=(A-B)\cup(B-A)$
- $d(A,B)=\mu^{\star}(S(A,B))$
- $\lim_{n\to \infty} d(A,A_n)=0$就记作$A_n\to A$
- 倘若有一列初等集$\lbrace A_n\rbrace$满足$A_n\to A$, 便称$A$为有限$\mu$可测, 记作 $A\in \mathfrak{M}_F(\mu)$ (mathfrak)
- 如果A是可数多个有限$\mu$可测集的并，便称$A$为$\mu$可测集, 并且记作$A\in \mathfrak{M}(\mu)$
- $S(A,B)$是A与B的所谓 "对称差" symmetric difference
- d(A,B) is seentially a distance function

11.10 定理 $\mathfrak{M}(\mu)$是$\sigma-$环,$\mu^{\star}$上可数可加
- 在证明本定理前，先列出$S(A,B)$与$d(A,B)$的一些性质，设有
- $S(A,B)=S(B,A), S(A,A)=0$
  - 显然
- $S(A,B)\subset S(A,C) \cup S(C,B)$
  - 证明 $(A-B)\subset (A-C)\cup (C-B),(B-A)\subset (C-A)\cup(B-C)$
- $S(A_1\cup A_2,B_1\cup B_2) \subset S(A_1,B_1)\cup S(A_2,B_2)$
  - 证明: $(A_1\cup A_2)-(B_1\cup B_2) \subset (A_1-B_1)\cup (A_2-B_2)$
- $S(A_1\cap A_2,B_1\cap B_2) \subset S(A_1,B_1)\cup S(A_2,B_2)$
  - 证明$S(A_1\cap A_2,B_1\cap B_2)=S(A_1^c\cup A_2^c,B_1^c\cup B_2^c)\subset S(A_1^c,B_1^c)\cup S(A_2^c,B_2^c)=S(A_1,B_1)\cup S(A_2,B_2)$
- $S(A_1 -A_2,B_1 -B_2) \subset S(A_1,B_1)\cup S(A_2,B_2)$
  - 证明 $A_1-A_2=A_1\cap A_2^c$
- 这些性质包含着
- $d(A,B) = d(B,A), d(A,A)=0$
  - 和距离函数不同 $d(A,B)=0$不能推出$A=B$
  - 例如$\mu=m$, A可数,B是空集, $d(A,B)=\m^{\star}(A)=0$
    - 为了明白这一点可以用满足条件$m(I_n) < 2^{-n}\epsilon$的区间$I_n$把A的第n个点覆盖住
    - 但是当$d(A,B)=0$时，算作A,B两个集合等价，便可以把$R^p$的子集分成等价类，而$d(A,B)$就把这些等价类的集化成度量空间, $\mathfrak{M}_F(\mu)$就可以作为$\mathscr{E}$的闭包而得到。 这个解释对于证明不重要，它能说明背后的想法
- $d(A,B) \le d(A,C)+d(C,B)$
- $d(A_1\cup A_2,B_1\cup B_2) \le d(A_1,B_1)+d(A_2,B_2)$
- $d(A_1\cap A_2,B_1\cap B_2) \le d(A_1,B_1)+d(A_2,B_2)$
- $d(A_1 -A_2,B_1 -B_2) \le d(A_1,B_1)+d(A_2,B_2)$
- 我们还需要d的一个性质，如果$\mu^{\star}(A),\mu^{\star}(B)$中至少有一个是有限的，必然$|\mu^{\star}(A)-\mu^{\star}(B)| \le d(A,B)$
- 因为假如$0\le \mu^{\star}(B)\le \mu^{\star}(A)$ 那么表明
  - $d(A,0)\le d(A,B) + d(B,0)$
  - 即是 $d^{\star}(A)\le d(A,B) + \mu^{\star}(B)$
  - 由于$\mu^{\star}(B)$ 有限，所以$\mu^{\star}(A)-\mu^{\star}(B)\le d(A,B)$
- 证明:
  - 设$A\in \mathfrak{M}_F(\mu),B\in \mathfrak{M}_F(\mu)$ 选择$\lbrace A_n\rbrace,\lbrace B_n\rbrace$使$A_n\in \mathscr{E},B_n\in\mathscr{E},A_n\to A,B_n\to B$
  - 那么
  - $A_n\cup B_n\to A\cup B$
  - $A_n\cap B_n\to A\cap B$
  - $A_n - B_n\to A - B$
  - $\mu^{\star}(A_n) \to \mu^{\star}(A)$
  - 并且由$d(A_n,A)\to 0$知道$\mu^{\star}(A) < +\infty$, 知道$\mathfrak{M}$是环
  - $\mu(A_n)+\mu(B_n)=\mu(A_n \cup B_n)+\mu(A_n\cap B_n)$
  - 令$n\to \infty$ 得
    - $\mu^{\star}(A)+\mu^{\star}(B)=\mu(A\cup B)+\mu^{\star}(A\cap B)$
    - 如果$A\cap B=0$那么$\mu^{\star}(A\cap B)=0$
    - 由此$\mu^{\star}$在$\mathfrak{M}_F(\mu)$上可加
  - 现在设$A\in \mathfrak{M}(\mu)$ 那么A可以表示为$\mathfrak{M}_F(\mu)$的可数个 不相交 集的并，这因为若是$A=\cup A_n', A_n'\in \mathfrak{M}_F(\mu)$，令$A_1=A_1'$再令
  - $A_n=(\cup_{1}^n A_i')-(A_n'\cup \cdots \cup A_{n-1}')$ ????????
  - 那么$A=\cup_{n=1}^{\infty} A_n$是所求的表示法
  - $\mu^{\star}(A)\le \sum_{n=1}^{\infty} \mu^{\star} (A_n)$
  - 另一方面$A \supset A_1\cup \cdots \cup A_n$再由$\mathfrak{M}_F(\mu)$上$\mu^{\star}$的可加性，我们得到$\mu^{\star}(A)\ge \mu^{\star}(A_1\cup \cdots \cup A_n)=\mu^{\star}(A_1)+\cdots+\mu^{\star}(A_n)$
  - 得出$\mu^{\star}(A)=\sum_{n=1}^{\infty} \mu^{\star}(A_n)$
  - 假定它有限，令$B_n=A_1\cup \cdots \cup A_n$那么当$n\to \infty$时
  - $d(A,B_n)=\mu^{\star}(\cup_{i=n+1}^{\infty} A_i)=\sum_{i=n+1}^{\infty} \mu^{\star}(A_i)\to 0$
  - 所以$B_n\to A$,并且由于$B_n\in \mathfrak{M}_F(\mu)$, $A\in \mathfrak{M}_F(\mu)$
  - 这样就证明了$A\in \mathfrak{M}(\mu)$而且$\mu^{\star}(A) < +\infty$时，$A\in \mathfrak{M}_F(\mu)$
  - 现在$\mu^{\star}$显然在$\mathfrak{M}(\mu)$上的可数可加的了，这因为假若$A=\cup A_n$,这里$\lbrace A_n\rbrace$ 是$\mathfrak{M}(\mu)$内的一系列不相交的集，我们已经证明了：如果对于每个n,$\mu^{\star}(A_n) <+\infty$ 那么 $[A_n \in \mathfrak{M}_F(\mu)]$
  - 最后还要证明 $\mathfrak{M}(\mu)$是$\sigma-$环，如果$A_n\in \mathfrak{M}(\mu)$ 很明显$\cup A_n\in \mathfrak{M}(\mu)$, 假定$A,B,A_n,B_n\in \mathfrak{M}(\mu)$并且
  - $A=\cup_{n=1}^{\infty} A_n,B=\cup_{n=1}^{\infty}B_n$
  - 那么$A_n\cap B = \cup_{i=1}^{\infty} (A_n\cap B_i) \in \mathfrak{M}(\mu)$
  - 因为$\mu^{\star}(A_n\cap B) \le \mu^{\star}(A_n) < +\infty,A_n\cap B\in \mathfrak{M}_F(\mu)$
  - 因此$A_n-B\in \mathfrak{M}_F(\mu)$且$A-B\in \mathfrak{M}(\mu)$, 因为$A-B=\cup_{n=1}^{\infty} (A_n-B)$
  - 现在如果$A\in \mathfrak{M}(\mu)$用$\mu(A)$代替$\mu^{\star}(A)$, 那么$\mu$之前只在$\mathscr{E}$上定义的，推广成$\sigma-$环 $\mathfrak{M}(\mu)$上的可数可加集函数了，这个推广了的集函数，叫作一个measure, The special case $\mu = m$ is called the Lebesgue measure on $R^p$

11.11 评注 
- (a) 假若A是开的, 那么$A\in \mathfrak{M}(\mu)$. 这因为$R^p$内每个开集是可数个开区间的并，想要明白这一点，只须构造一个可数基使其成员都是开区间即可。通过取余集，可以知道每个闭集在$\mathfrak{M}(\mu)$内
- (b) 如果$A\in \mathfrak{M}(\mu)$而$\epsilon > 0$那么存在着闭集$F$与开集$G$满足$F\subset A\subset G$
  - 并且$\mu(G-A) < \epsilon,\mu(A-F)< \epsilon$
  - 第一个不等式成立是因为$\mu^{\star}$使用初等 开集覆盖来定义的。而通过取余集就可以推出第二个不等式来
- (c) 如果从开集出发，通过可数次运算而得到$E$，其中每次运算是取并，取交或取余，就说$E$是Borel集。 $R^p$内一切Borel集的类$\mathscr{B}$是$\sigma-$环； 实际这是包括一切开集的最小$\sigma-$环。根据评注(a),$E\in \mathscr{B}$时$E\in \mathfrak{M}(\mu)$
- (d) 如果$A\in \mathfrak{M}(\mu)$，那么存在着Borel集F与G，满足$F\subset A\subset G$, 并且 $\mu(G-A)=\mu(A-F)=0$
- 这可以由(b)推导出来，只须取$\epsilon = 1/n$ 并且令$n\to\infty$
- 由于$A=F\cup (A-F)$,我们可以看到每个$A\in \mathfrak{M}(\mu)$是一个Borel集 与零测度集的并
- Borel集对于每个$\mu$都$\mu$可测，然而测度的集(即$\mu^{\star}(E)=0的集E$)可以因$\mu$的不同而不同
- (e)对每个$\mu$,领测度的集构成一个$\sigma-$环
- (f)若是Lebesgue测度的话，每个可数集的测度是零,但还是有不可数的（实际上是完备的）零测度集 Cantor集可以作为一例， $m(E_n)=(2/3)^n$
- 因为$P=\cap E_n$对于每个n, $P\subset E_n$,因而$m(P)=0$

### 测度空间 measure spaces

11.12 定义 假定X是一个集，它不必是欧几里得空间 或者 甚至任何度量空间的子集。如果存在X的子集（称它们为可测集）组成的$\sigma-$环$\mathfrak{M}$, 以及定义在$\mathfrak{M}$上的一个非负可数可加集函数$\mu$(称为测度)，就说$X$是测度空间
- 此外，假如还有$X\in\mathfrak{M}$,那么X称 可测空间
- 比如 可以取 $X=R^p$, $\mathfrak{M}$是$R^p$的所有勒贝格可测子集的类,$\mu$是Lebesgue测度
- 或者令$X$是一切正整数的集, $\mathfrak{M}$是X的一切子集的类，而$\mu(E)$是E的元素的个数
- 另一个例子是由概率论提供的，事件可以看成是集，而事件发生的概率是可加（或可数可加）集函数
- 以下各节一概考虑可测空间，必须强调指出，即使牺牲掉已经达到的普遍性 而局限于实数轴上的区间的Lebesgue测度，我们行将讨论的积分理论在任何方面也不会变得简单。 其实，按照更一般的情况提出这项理论的主要特点，就会更加明确。在那里将会看清楚，每件事情都仅仅与$\mu$在$\sigma-$环上的可数可加性有关
- 为了方便起见，我们将引用符号$\lbrace x| P\rbrace$ 代表具有性质P的一切元素x之集合

### 可测函数 measurable functions

11.13 定义 设f是定义在可测空间X上的函数，在扩大的实数系内取值，如果集$\lbrace x| f(x) > a\rbrace$ 对于每个实数a都可测，就说函数f是可测的

11.14 例 如果 $X=R^p$, $\mathfrak{M}=\mathfrak{M}(\mu)$即是定义11.9所定义的那么每个连续函数可测，因为这时集是一个开集

11.15 定理 下面四个条件的每一个都可以推出另外三个
- 对于每个实数a, $\lbrace x | f(x) > a\rbrace$可测
- 对于每个实数a, $\lbrace x | f(x) \ge a\rbrace$可测
- 对于每个实数a, $\lbrace x | f(x) < a\rbrace$可测
- 对于每个实数a, $\lbrace x | f(x) \le a\rbrace$可测
- 证明
  - 关系式
  - $\lbrace x | f(x) \ge a\rbrace = \cap_{n=1}^{\infty} \lbrace x | f(x) > a-\frac{1}{n} \rbrace$
  - $\lbrace x | f(x) < a\rbrace = X-\lbrace x | f(x) \ge a \rbrace$
  - $\lbrace x | f(x) \le a\rbrace = \cap_{n=1}^{\infty}\lbrace x | f(x) < a+\frac{1}{n} \rbrace$
  - $\lbrace x | f(x) > a\rbrace = X-\lbrace x | f(x) \le a \rbrace$
- 相继表明 成环的可推出，所以两两等价

11.16 定理 如果f可测，那么|f|可测
- 证明:
  - $\lbrace x | |f(x)| < a\rbrace = \lbrace x | f(x) < a \rbrace \cap \lbrace x | f(x) > -a\rbrace$ 

11.17 定理 设$\lbrace f_n \rbrace$是一列可测函数，当$x\in X$时，令
- $g(x)=\sup f_n(x)$ 
- $\displaystyle h(x)={\lim \sup}_{n\to \infty} f_n(x)$ 
- 那么$g$与$h$可测
- 对于$\inf$与$\lim \inf$同样的结也成立
- 证明: $\lbrace x | g(x) > a\rbrace =\cup_{n=1}^{\infty} \lbrace x | f_n(x) > a\rbrace$
  - $h(x)=\inf g_m(x), g_m(x) = \sup f_n(x), n\ge m$
  - 推论
    - (a) 假如f,g可测，那么 $\max(f,g),\min(f,g)$可测, $f^{+}=\max(f,0),f^{-}=-\min(f,0)$可测
    - (b) 可测函数序列的极限函数是可测函数

11.18 定理 f,g 定义在X上的可测实值函数, 而$F$是$R^2$上的实连续函数, 置$h(x)=F(f(x),g(x)), x\in X$, 那么h可测
- 特别的 f+g, fg可测
- 证: 设$G_a=\lbrace (u,v) | F(u,v) > a\rbrace$
  - 那么$G_a$是$R^2$的开集，于是可以认为$G_a=\cup_{n=1}^{\infty} I_n$
  - 这里$\lbrace I_n \rbrace$是一列开区间
  - $I_n=\lbrace (u,v) | a_n < u < b_n, c_n < c < d_n\rbrace$
  - 由于$\lbrace x | a_n < f(x) < b_n \rbrace = \lbrace x | f(x) > a_n \rbrace \cap \lbrace x| f(x) <b_n \rbrace$可测
  - 必然$\lbrace x | (f(x),g(x))\in I_n\rbrace = \lbrace x | a_n < f(x) < b_n\rbrace \cap \lbrace x | c_n < g(x) < d_n \rbrace$是可测集
  - 因而 $\lbrace x | h(x) > a \rbrace = \lbrace x | (f(x),g(x))\in G_a\rbrace =\cup_{n=1}^{\infty} \lbrace x | (f(x),g(x)) \in I_n$ 同样也可测
  - 总之，把分系列的鄋普通运算没包括极限运算在内，用于可测函数时，仍然得到可测函数，或者说，寻常遇到的函数都可测
  - 然而这仅仅是一种粗略的说法，这一点有下列例题（基于实数轴上的Lebesgue测度）为证：如果$h(x)=f(g(x))$这里的f可测而g连续，这时h未必可测（详见McShane)
  - 我们在讨论可测函数时，未曾提及测度，实际上，X上的可测函数类，仅仅与$\sigma-$环$\mathfrak{m}$有关，比如我们可以讨论$R^p$上的Borel可测函数，也就是使 $\lbrace x | f(x) > a\rbrace$总是Borel集的函数f，而不涉及任何特定的测度

### 简单函数 simple functions

11.19 定义 设s是定义在X上的实值函数, 如果s的值域是有限的(集)，便称s为简单函数
- 设$E\subset X$ 再令 
- $K_E(x) = 1,x\in E$
- $K_E(x) = 0,x\not \in E$
- 那么$K_E$称为E的特征函数 characteristic function
- 假定s的值域由不同的数$c_1,\cdots,c_n$组成，设
- $E_i=\lbrace x | s(x) = c_i\rbrace$
- 那么$s=\sum_{n=1}^n c_i K_{E_i}$
- 这说明每个简单函数 是 特征函数的 有限线性组合，很明显，s可测当且仅当集$E_1,\cdots,E_n$可测

11.20 定理 设f为X上的实函数，那么存在一列简单函数$\lbrace s_n \rbrace$, 对于每个$x\in X$当$n\to \infty$时, $s_n(x)\to f(x)$. 若f可测，可以选$\lbrace s_n\rbrace$为可测函数序列. 若$f \ge 0$，可以选$\lbrace s_n\rbrace$ 为单调增序列
- 证: 
  - 设$f\ge 0$
  - 令$E_{ni}=\lbrace x | \frac{i-1}{2^n} \le f(x) < \frac{i}{2^n}$
  - $F_n=\lbrace x | f(x) \ge n\rbrace$
  - 令$s_n = \sum_{i=1}^{n2^n} \frac{i-1}{2^n} K_{E_{ni}} + nK_{F_n}$
  - 一般情况，令$f=f^{+}-f^{-}$, 再将前面的推断施行于$f^{+},f^{-}$
  - 当f有界时，一致收敛于f

### 积分 integration

把积分定义在可测空间X上，在这里$\mathfrak{M}$是可测集的$\sigma-$环，而$\mu$是测度，
- 愿意把情况想具体的读者，可以把X想成实数轴 或一个区间，$\mu$设想为 Lebesgue测度$m$

11.21  定义 设$s(x)=\sum_{i=1}^n c_i K_{E_i}(x),x\in X, c_i > 0$可测，而$E\in \mathfrak{M}$ 
- 定义$I_E(s)=\sum_{i=1}^n c_i\mu (E\cap E_i)$
- 如果f可测，且为非负的，我们定义$\int_E fd\mu = \sup I_E(s)$
- 此处$\sup$是对于所有满足$0 \le s \le f$的简单函数s而取的
- 左端叫做f关于测度$\mu$在集E上的Lebesgue积分
- 积分可以取$+\infty$为值
- 对于每个非负可测简单函数$s$ 容易验证$\int_E s d\mu=I_E(s)$

11.22 定义 设f为可测函数，考虑两积分$\int_E f^{+} d\mu,\int_Ef^{-} d\mu$, 
- 如果积分至少有一项是有限的，我们定义
- $\int_E fd\mu = \int_Ef^{+}d\mu - \int_Ef^{-}d\mu$
  - 注意 上面$f^{-}=-\min(f,0)$的定义，这里是减号不是加号
- 如果两个积分都有限，这个结果也有限，就说$f$在E上对$\mu$按Lebesgue意义是可积的（或可求和的），并且写作，在E上$f\in \mathscr{L}(\mu)$, 若$\mu=m$, 通常的写法是: 在$E$上$f\in \mathscr{L}$
- 这个命名法可能有一点混乱，如果结果是 正负无穷，那么结果是确定的，然而在上述的文字顶一下 f 不可积，只有在E上的积分有限时，f在E上才是可积的
- 以后我们主要关心于可测函数，

11.23 评注 下列性质明显的
- (a) 若f在E上有界可测，而且$\mu(E)< +\infty$那么E上$f\in \mathscr{L}(\mu)$
- (b) 如果$x\in E$时$a\le f(x) \le b$,而且$\mu(E) < +\infty$那么$a\mu(E) \le \int_E f d\mu \le b \mu(E)$
- (c) 如果在E上$f$与$g\in\mathscr{L}(\mu)$, 而且当$x\in E$时$f(x)\le g(x)$那么$\int_E fd\mu \le \int_E gd\mu$
- (d) 如果在E上$f\in\mathscr{L}(\mu)$, 那么对于每个有限常数c, 在E上$cf\in\mathscr{L}(\mu)$ 而且$\int_Ec fd\mu=c\int_E f d\mu$
- (e) 如果在E上 \mu(E)=0$ 而$f$可测，那么$\int_E fd\mu = 0$
- (f) 如果在E上$f\in\mathscr{L}(\mu)$, $A\in \mathfrak{M}$且$A\subset E$那么在$A$上$f\in \mathscr{L}(\mu)$

11.24 定理
- (a)设在X上f非负可测，若$A\in \mathfrak{M}$定义
  - $\phi(A)=\int_A fd\mu$, 那么$\phi$在$\mathfrak{M}$上可数可加
- (b) 如果在X上$f\in \mathscr{L}(\mu)$
- 证明
  - 如果a成立, $f=f^{+}-f^{-}$ 即可
  - 下面证明a
  - 需要证明$\phi(A)=\sum_{n=1}^{\infty}\phi(A_n)$
  - 这里$A_n\in\mathfrak{M}$, 两两不相交, $A=\cup_1^{\infty} A_n$
  - 若f是特征函数,那么$\phi$的可数可加性与$\mu$的可数可加性完全是一回事，因为
    - $\int_A K_Ed\mu=\mu(A\cap E)$
  - 若$f$是简单函数, 那么$f$的形状是11.12那样的
  - 一般情况下，对于每个可测的简单函数$s$, 若能满足$0\le s \le f$, 必然$\int_A sd\mu=\sum_{n=1}^{\infty} \int_{A_n} s d\mu \le \sum_{n=1}^{\infty} \phi(A_n)$
  - 所以$\phi(A) \le \sum_{n=1}^{\infty} \phi(A_n)$
    - $+\infty$的情况易证
  - 给定$\epsilon >0$, 我们可以选一个可测函数s 使$0\le s\le f$并且
    - $\int_{A_1} s d\mu \ge \int_{A_1} fd\mu - \epsilon,\int_{A_2} s d\mu \ge \int_{A_2} fd\mu - \epsilon$
  - 于是
    - $\phi(A_1\cup A_2) \ge \int A_1\cup A_2 s d\mu = \int_{A_1} s d\mu +\int_{A_2} s d\mu$
    - $\ge \phi(A_1) +\phi(A_2) -2\epsilon$
  - 由此推出$\phi(A_1\cup A_2) \ge\phi(A_1)+\phi(A_2)$
  - 因此扩展到$\phi(\cup A_i) \ge \sum \phi(A_i)$
  - 由于$A\supset A_1\cup \cdots \cup A_n$,可以得出
  - $\phi(A) \ge \sum_{n=1}^{\infty} \phi(A_n)$
  - 推论, 若$A\in \mathfrak{M},A\subset A$, 而且$\mu(A-B)=0$, 那么$\int_A fd\mu=\int_B fd\mu$,由于$A=B\cup (A-B)$,

11.25 评注 上述推论说明，零测度集在积分时可以忽略
- 若集 $\lbrace x | f(x) \neq g(x) \rbrace \cap E$是零测度的，就写作 在E上$f\sim g$
- 这样$f\sim f$, 对称性，传递性，因此是等价关系
- 若在E上$f\sim g$，显然可得$\int_A fd\mu = \int_A gd\mu$ 只要这些积分对每个可测子集$A\subset E$存在
- 若一性质P对于每个点$x\in E-A$成立，并且$\mu(A)=0$, 习惯上说P几乎对于一切$x\in E$成立,或P在E上几乎处处成立，（这个“几乎出处”这个概念自然依赖于所考虑的特定测度，在文献中一般如果没有特别说明，就是指Lebesgue测度
- 若在$E$上$f\in \mathscr{L}(\mu)$, 显然$f(x)$必然在E上几乎处处有限，所以在大部分情形下，如果我们从开始便假定所设函数式有限值，并不会丧失一般性

11.26 定理 若在E上$f\in\mathscr{L}(\mu)$, 那么在E上$|f| \in\mathscr{L}(\mu)$,而且$|\int_E fd\mu| \le \int_E |f|d\mu$
- 证 记$E=A\cup B$, 在A上$f(x) \ge 0$, 而在$B$上$f(x) < 0$,
- $\int_E |F|d\mu = \int_A |f|d\mu + \int_B |f| d\mu$
- $=\int_A f^{+} d\mu +\int_B f^{-} d\mu < +\infty$
- 所以$|f|\in \mathscr{L}(\mu)$,从$f\le |f|$及$-f\le |f|$知道
- $\int_E fd\mu \le \int_E |f| d\mu, -\int_E fd\mu \le \int_E |f|d\mu$
- 因为f的可积性包含着 |f|的可积性，所以Lebesgue积分常常被称为 绝对收敛积分，自然还可以定义非绝对收敛的积分，而且在处理某些问题时，这样做是重要的，但是这种积分缺乏 勒贝格积分的某些最有用的性质，在分析中起的作用比较次要些

11.27 定理 设f在E上 可测， $|f|\le g$，并且在E上$g\in \mathscr{L}(\mu)$那么在E上$f\in \mathscr{L}(\mu)$
- 证明$f^{+}\le g$且$f^{-} \le g$

11.28 Lebesgue 单调收敛定理 假设$E\in \mathfrak{M}$, $\lbrace f_n\rbrace$是可测函数序列，满足条件
- $0 \le f_1(x) \le f_2(x) \le \cdots,x \in E$
- $n\to \infty$时，用$f_n(x) \to f(x),x\in E$ 来定义 f
- 那么$\int_E f_n d\mu  \to \int_E fd\mu, n\to \infty$
- 证明, 当$n\to \infty$时 $\int_E f_n d\mu \to \alpha$ 对某个$\alpha$成立
- 又因为$\int f_n \le \int f$那么 $\alpha \le \int_E fd\mu$
- 选择 满足$0<c<1$的c, 再设$s$是 满足$0\le s \le f$的可测简单函数
- 令$E_n =\lbrace x | f_n(x) \ge cs(x) \rbrace$
- $E_1\subset E_2\subset E_3 \subset \cdots$
- $E=\cup_{n=1}^{\infty} E_n$
- 对于每个n, $\int_E f_n d\mu \ge \int_{E_n} f_n d\mu \ge c\int_{E_n} sd\mu$
- 让$n\to \infty$, 由于积分是可数可加 集函数，从而得到
- $\alpha \ge c\int_E s d\mu$
- 令$c\to a$得到 $\alpha \ge \int_E s d\mu$
- 蕴含$\alpha \ge \int_E fd\mu$

11.29 定理 假设$f=f_1+f_2$, 在E上$f_i\in \mathscr{L}(\mu)$, 那么在E上$f\in \mathscr{L}(\mu)$并且
- $\int_E fd\mu=\int_E f_1 d\mu + \int_e f_2d\mu$
- 证:
  - 首先假设$f_1,f_2\ge 0$, 如果都是简单函数容易证明，
  - 否则 选择非负的 可测简单函数的单调增序列 ,使它们分别收敛于$f_1,f_2$, 定理11.20 保证能找到
  - 令$s_n=s_{n,1}+s_{n,2}$
  - 那么$\int_E s_nd\mu = \int_E s_{n,1}d\mu+ \int_E s_{n,2}d\mu$
  - 令$n\to \infty$ 并用定理11.28可得
  - 其次，若$f_1\ge 0, f_2 \le 0$
  - 令$A=\lbrace x | f(x) \ge 0 \rbrace, B=\lbrace x | f(x) < 0 \rbrace$
  - 那么$f,f_1,-f_2$在A上非负，因此
    - $\int_A f_1 d\mu = \int_A fd\mu+ \int_A (-f_2)d\mu=\int_Afd\mu-\int_Af_2d\mu$
    - 类似的 $-f,f_1,-f_2$在$B$上非负，得到后相加可证
  - 一般情形，通过分别的 正负，和两个函数 划分成4个集，这4个集内的偶成立，再相加即可

11.30 定理 设$E\in \mathfrak{M},\lbrace f_n \rbrace$ 是非负可测函数序列，并且
- $f(x) =\sum_{n=1}^{\infty} f_n(x),x\in E$ 那么$\int_E fd\mu = \sum_{n=1}^{\infty} \int_E f_n d\mu$
- 证 部分和组成单调序列

11.31 Fatou 定理 假设$E\in \mathfrak{M}$,若$\lbrace f_n\rbrace$是非负可测函数序列，并且$f(x)=\lim \inf_{n\to \infty} f_n(x),x\in E$
- 那么$\int_E fd\mu \le \lim \inf_{n\to \infty} \int_E f_n d\mu$
- 会有严格的不等式成立
- 证明
  - 令$g_n(x) = \inf f_i(x), i\ge n$
  - 那么$g_n(x)$在E上可测且 $0\le g_1(x) \le g_2(x) \le \cdots$
  - $g_n(x) \le f_n(x)$
  - $g_n(x) \to f(x) , n\to \infty$
  - 知道$\int_E g_n d\mu \to \int_E fd\mu$

11.32 Lebesgue 控制收敛定理 假设$E\in \mathfrak{M}$, $\lbrace f_n \rbrace$是可测函数序列,当$n\to \infty$时,
- $f_n(x) \to f(x),x\in E$
- 如果在E上有函数 $g\int \mathscr{L}(\mu)$
- 使$|f_n(x)|\le g(x)$
- 那么$\lim_{n\to \infty} \int_E f_n d\mu=\int_E fd\mu$
- 才说$\lbrace f_n \rbrace$受g的控制，然后我们讲到控制收敛，如果在E上几乎处处成立，结论仍然相同
- 证: 
  - 首先，定理11.27能推出$f_n\in \mathscr{L}(\mu)$ 以及在E上$f\in \mathscr{L}(\mu)$
  - 由于$f_n+g \ge 0$, Fatous定理表明
  - $\int_E (f+g) d\mu \le \lim \inf_{n\to \infty} \int_E (f_n+g) d\mu$
  - 或$\int_E f d\mu \le \lim \inf_{n\to \infty} f_n d\mu$
  - 因为 $g-f_n\ge 0$，同样地知道
  - $\int_E(g-f) d\mu \le \lim \inf_{n\to \infty} \int_E (g-f_n) d\mu$
  - 所以 $-\int_E fd\mu \le \lim \inf_{n\to \infty} [-\int_E f_n d\mu]$
  - 这无异于 $\int_E fd\mu \ge \lim \sup_{n\to \infty} \int_E fd\mu$
- 推论 若$\mu(E) < +\infty$, $\lbrace f_n \rbrace$在E上一致有界，且在E上$f_n(x) \to f(x)$,必然 目标成立
- 一致有界收敛序列常常 被称为 有界收敛序列

### 与Riemann积分的比较 comparison with the riemann integral

一个区间上的每个Riemann 可积函数一定也Lebesgue可积，
- 并且Riemann可积函数要服从更严密的连续条件
- 因此Lebesgue理论可以将范围广泛得多的一类函数进行积分，而其最大优点或许在于使许多极限运算变得容易掌握
- 从这个观点来看，Lebesgue的收敛定理完全可以认为是Lebesgue理论的和兴
- Riemann理论遇到的困难之一，是Riemann可积函数（甚至连续函数）的极限可以不是Riemann可积的，现在因为可测函数的极限一定可测，所以这个困难几乎消除了
- 令可测空间X是实轴上的区间$[a,b]$,取$\mu=m$(Lebesgue测度)。并且$\mathfrak{M}$是$[a,b]$的Lebesgue可测子集之类，习惯上采用熟悉的符号
- $\int_a^b fdx$代替$\int_x f dm$来表示f在$[a,b]$上的Lebesgue积分，为了区分，把Riemman积分写作$\mathscr{R}\int$

11.33 定理 如果
- (a) 如果在$[a,b]$上$f\in \mathscr{R}$, 必然在$[a,b]$上$f\in \mathscr{L}$, 而且
  - $\int_a^b fdx = \mathscr{R}\int_a^b fdx$
- (b) 假定f在$[a,b]$上有界，那么在$[a,b]$上$f\in\mathscr{R}$,当且仅当f在$[a,b]$上几乎处处连续
- 证明
  - 假设f有界，根据6.1和6.4，存在着$[a,b]$的一列分割$\lbrace P_k \rbrace$,其中$P_{k+1}$是$P_k$的加细，而$P_k$中相邻两点的距离都小于$1/k$,而且
  - $\lim_{k\to \infty} L(P_k,f) = \mathscr{R}\underline{\int} fdx$
  - $\lim_{k\to \infty} U(P_k,f) = \mathscr{R}\overline{\int} fdx$
  - 如果 $P_k=\lbrace x_0,\cdots,x_n\rbrace, x_0=a,x_n=b$规定
  - $U_k(a)=L_k(a)=f(a)$
  - 采用定义6.1所介绍的符号, 令$U_k(x)=M_i,L_k(x)=m_i$ 这时
  - $L(P_k,f)=\int L_kdx,U(P_k,f)=\int U_kdx$
  - 并且因为$P_{k+1}$加细了$P_k$，那么对于一切$x\in [a,b]$
  - $L_1(x)\le L_2(x) \le \cdots \le f(x) \le \cdots \le U_2(x) \le U_1(x)$
  - 必然存在着$L(x) = \lim_{k\to \infty} L_k(x),U(x) =\lim_{k\to \infty} U_k(x)$
  - L与U都是$[a,b]$上的有界可测函数，注意 $L(x) \le f(x) \le U(x)$
  - $\int L dx=\mathscr{R}\underline{\int} fdx,\int U dx =\mathscr{R}\overline{\int} fdx$
  - 一直到现在，除去假设f是$[a,b]$上的有界实函数而外，关于f没有左没得假设
  - 要把证明完成，注意$f\in \mathscr{R}$当且晋档它的上下黎曼积分相等，从而仅当$\int Ldx = \int U dx$, 因为$L \le U$, 要相等，需要几乎所有$x\in[a,b]$, 都有$L(x) = U(x)$
  - 几乎处处$L(x) =f(x) = U(x)$ 
  - 所以f可测
  - 此外，如果$x$不属于任何$P_k$,便十分容易知道$U(x)=L(x)$,当且仅当f在x点连续. 因为$P_k$各集的并可数，它的测度是0，于是可以断定f在$[a,b]$上几乎处处连续，当且仅当几乎处处$L(x)=U(x)$, 从而当且仅当$f\in \mathscr{R}$
  - 证明完
  - 积分和微分之间厂家你的连续，大部分可以转入Lebesgue理论中来，若在$[a,b]$上$f\in \mathscr{L}$,并且$F(x) = \int_a^x fdt, a\le x \le b$
  - 那么在$[a,b]$上几乎处处$F'(x)=f(x)$
  - 反之，若$F$在$[a,b]$的每一点处可微，（几乎处处在这里是不够的）并且在$[a,b]$上$F'\in \mathscr{L}$则 $F(x)-F(a)=\int_a^x F'(t) , a\le x \le b$

### 复函数的积分 integration of complex functions

若f顶在测度空间X 上的复值函数，f=u+iv, 其中u,v都是实的，当且晋档u,v都是可测函数时，我们称f是可测的
- 容易验证，复可测函数的和与积仍然可测
- $|f|=\sqrt{u^2+v^2}$.
- 定理11.18说明 对于每个复可测函数f, |f|是可测的
- 假设$\mu$是$X$上的测度，E是X的可测子集，f是X上的复值函数，当f可测，并且$int_E |f|d\mu < +\infty$就说在E上$f\in \mathscr{L}(\mu)$, 当它成立时，定义$\int_E fd\mu =\int_E ud\mu +i\int_E vd\mu$
- 由于$|u| \le |f|, |v|\le |f|$ 并且$|f| \le |u| + |v|$, 显然，当且仅在E上 $u,v\in \mathscr{L}(\mu)$时成立
- 上面多个定理 11.23adef,11.24b,11.26,11.27,11.29,11.32都可以推广到复函数的Lebesgue积分，证明都很简单
- 11.26证明
  - 如果E上$f\in \mathscr{L}(u)$，存在一复数c, $|c|=1$使$c\int_E fd\mu \ge 0$, 令$g=cf=u+iv$, 其中u,v是实的，
  - 那么$|\int_E fd\mu|=c\int_E fd\mu =\int_E gd\mu=\int_E ud\mu\le \int_E |f|d\mu$
  - 上列等式中的第三个成立，因为前面等式表明$\int g d\mu$是实数

### $\mathscr{L}^2$类的函数 functions of class $\mathscr{L}^2$

作为Lebesgue理论的第一个应用，现在推广Parseval定理（在第8章只对于Riemann可积的函数验证过），并且对于函数的正规正交集（orthonormal set）证明Riesz-Fischer定理

11.34 定义 设X是可测空间。如果复函数f可测并且$\int_X |f|^2 d\mu < +\infty$,  就说在$X$上$f\in \mathscr{L}^2(\mu)$, 如果$\mu$是Lebesgue测度，就说$f\in \mathscr{L}^2$, 当$f\in \mathscr{L}^2(\mu)$时，定义 范数norm $||f||=\lbrace \int_X |f|^2 d\mu \rbrace^{1/2}$

11.35 定理 假设$f\in \mathscar{L}^2(\mu), g\in \mathscr{L}^2(\mu)$, 那么$fg\in \mathscr{L}(u)$ 并且
- $\int_X |fg|d\mu \le ||f|| ||g||$
- 这时我们在级数和Riemann几分钟已经遇到的Schwarz不等式，
- 它是不等式$0\le \int_X(|f|+\lambda |g|)^2 d\mu=||f||^2+2\lambda \int_X |fg| d\mu + \lambda^2 ||g||^2$的直接结果
- 这个不等式对于每个实数$\lambda$成立

11.36 定理 如果$f\in \mathscr{L}^2(\mu),g\in $\mathscr{L}^2(\mu)$那么$f+g\in \mathscr{L}^2(\mu)$, 而且$||f+g||\le ||f||+||g||$
- 证 Schwarz不等式说明
  - $||f+g||^2 = \int |f|^2 + \int f\bar{g} +\int \bar{f} g+\int |g|^2$
  - $\le ||f||^2 + 2||f||\cdot ||g|| +||g||^2$
  - $=(||f||+||g||)^2$

11.37 评注 如果我们把$\mathscr{L}^2(\mu)$内的两函数$f$与$g$指甲你的距离定义为$||f-g||$, 可以知道定义2.15 的条件都能满足，仅有的例外是$||f-g||=0$ 并不意味着$f(x)=g(x)$对一切x成立，而只是几乎对一切x成立.
- 所以如果把只在一个零测度集上不相同的函数等同起来, $\mathscr{L}^2(\mu)$便是一个度量空间

11.38 定理 连续函数 在$[a,b]$上构成$\mathscr{L}^2$的一个 稠密dense 子集subset
- 更明确说，对于$[a,b]$上的任何$f\in \mathscr{L}^2$,和任何$\epsilon > 0$,总有$[a,b]$上的连续函数g，使得
- $||f-g|| < \epsilon$
- 证明：
  - 被函数逼近，就是 范数随着n增大趋于0
  - 设A是$[a,b]$的闭子集，$K_A$是它的特征函数
    - 令$t(x) =\inf |x-y|,y\in A$
    - 令$g_n(x) =\frac{1}{1+nt(x)}$
  - 那么$g_n$在$[a,b]$上连续,在A上$g_n(x)=1$, 在$B=[a,b]-A$上$g_n(x)\to 0$
  - 根据11.32, $||g_n-K_A||=\lbrace \int_B g_n^2 dx\rbrace^{1/2} \to 0$
  - 由此可见，闭集的特征函数可以在$\mathscr{L}^2$内用连续函数逼近
  - 对于任意可测集的特征函数有同样的结果, 因而对于可测简单函数也如此
  - 若$f\ge 0$ 且$f\in \mathscr{L}^2$,令$\lbrace s_n\rbrace$为非负可测简单函数的单调增序列，它满足$s_n(x)\to f(x)$,由于$|f-s_n|^2\le f^2$,定理11.32说明$||f-s_n||\to 0$

11.39 定义 我们说复函数序列$\lbrace \phi_n\rbrace$是可测空间X上函数的 正规正交系，就是要求$\int_X \phi_n\bar{\phi}_n d\mu = [n==m]$
- 特别的，我们必有$\phi_n\in \mathscr{L}^2(\mu)$若是$f\in \mathscr{L}^2(\mu)$而且$c_n=\int_x f\bar{\phi_n} du$
- 照定义8.10写成$f\sim \sum_{n=1}^{\infty} c_n\phi_n$
- 三角Fourier级数的定义同样可以在$[-\pi,\pi]$上扩充到$\mathscr{L}^2$，

11.40 Parseval定理 假设在$[-\pi,\pi]$上$f\in \mathscr{L}^2$
- $f(x)\sim \sum_{-\infty}^{\infty} c_ne^{inx}$, 令$s_n$是它的第n个部分和
- 那么$\lim_{n\to \infty} ||f-s_n|| =0$
- $\sum_{-\infty}^{\infty} |c_n|^2 =\frac{1}{2\pi} \int_{-\pi}^{\pi} |f|^2 dx$
- 证明: 给定$\epsilon > 0$, 由定理11.38 存在连续函数g
  - 使得$||f-g|| < \epsilon/2$
  - 进一步知道, 可以安排$g(\pi)=g(-\pi)$,那么$g$可以拓展成周期连续函数，由定理8.16, 有一个三角多项式T，比如是N阶的，使得$||g-T|| < \epsilon /2$
  - 由此,根据定理8.11 当$n \ge N$时
  - $||s_n-f|| \le ||T -f|| \le \epsilon$
- 推论 若在$[-\pi,\pi]$上$f\in \mathscr{L}^2$,且若$\int_{-\pi}^{\pi} f(x) e^{-inx} dx=0$，必然$||f||=0$
- 这样一来，如果$\mathscr{L}^2$里的两个函数如果能取得相同的Fourier级数，那么它们至多在一个零测度集上不相同

11.41 定义 设$f$与$f_n\in \mathscr{L}^2(\mu)$，如果 $||f_n-f|| \to 0$ 就说$\lbrace f_n \rbrace$在$\mathscr{L}^2(\mu)$内收敛于f，如果对于任意的$\epsilon > 0$有一个正整数N使得当$n\ge N$与$m\ge N$时，$||f_n-f_m|| \le \epsilon$, 就说$\lbrace f_n\rbrace$是$\mathscr{L}^2(\mu)$内的Cauchy序列

11.42 定理 假若$\lbrace f_n \rbrace$是$\mathscr{L}^2 (\mu)$内的Cauchy序列，必然存在着一个函数$f\in \mathscr{L}^2(\mu)$ 使 序列在$\mathscr{L}^2$内收敛于f
- 换句话说$\mathscr{L^2}(\mu)$是完备度量空间
- 证明
- 由于 $\{f_n\}$ 是 Cauchy 序列，我们可以找到一个序列 $\{n_k\}$，$k = 1, 2, 3, \cdots$ 使 $$\| f_{n_k} - f_{n_{k+1}} \| < \frac{1}{2^k} \quad (k = 1, 2, 3, \cdots).$$

选一个函数 $g \in \mathscr{L}^2(\mu)$。根据 Schwarz 不等式，得 $$ \int_X | g(f_{n_k} - f_{n_{k+1}}) | \, d\mu \leqslant \frac{\| g \|}{2^k}.$$

由此得$$\sum_{k=1}^\infty \int_X | g(f_{n_k} - f_{n_{k+1}}) | \, d\mu \leqslant \| g \|.$$

由定理 11.30，在 (102) 内可以交换求和与积分的次序，从而在 $X$ 上几乎处处 $$| g(x) | \sum_{k=1}^\infty | f_{n_k}(x) - f_{n_{k+1}}(x) | < +\infty, \tag{103}$$

所以在 $X$ 上几乎处处 $$\sum_{k=1}^\infty | f_{n_{k+1}}(x) - f_{n_k}(x) | < +\infty.$$

因为，倘若 (104) 的级数在一个正测度集 $E$ 上发散，我们便可以使 $g(x)$ 在 $E$ 的一个正测度子集上非零，这就与 (103) 矛盾了。

由于在 $X$ 上几乎处处收敛的级数 $$\sum_{k=1}^\infty (f_{n_{k+1}}(x) - f_{n_k}(x))$$

的第 $k$ 个部分和是 $f_{n_{k+1}}(x) - f_{n_1}(x)$，可见等式 $$f(x) = \lim_{k \to \infty} f_{n_k}(x)$$

能对于几乎一切 $x \in X$ 确定函数 $f(x)$，而在 $X$ 的其余点上 $f(x)$ 如何定义就无关紧要了。

现在我们来证明这个函数 $f$ 具有所要求的性质。给定了 $\epsilon > 0$，再照定义 11.41 所指示的选择 $N$，若 $n_k > N$，Fatou 定理表明

$$\| f - f_{n_k} \| \leqslant \liminf_{i \to \infty} \| f_{n_i} - f_{n_k} \| \leqslant \epsilon.$$

所以 $f - f_{n_k} \in \mathscr{L}^2(\mu)$，又由于 $f = (f - f_{n_k}) + f_{n_k}$，知道 $f \in \mathscr{L}^2(\mu)$。再由于 $\epsilon$ 的任意性，

$$\lim_{k \to \infty} \| f - f_{n_k} \| = 0.$$

最后，不等式 

$$\| f - f_n \| \leqslant \| f - f_{n_k} \| + \| f_{n_k} - f_n \|$$

说明 $\{f_n\}$ 在 $\mathscr{L}^2(\mu)$ 内收敛于 $f$；这因为如果我们取得 $n$ 与 $n_k$ 相当大，(105) 右端的两项都可以弄得任意小。

11.43 Riesz-Fischer 定理

设 $\{\phi_n\}$ 是 $X$ 上的正规正交系。假定 $\sum |c_n|^2$ 收敛，再设 $s_n = c_1 \phi_1 + \cdots + c_n \phi_n$，必然存在一个函数 $f \in \mathscr{L}^2(\mu)$，使 $\{s_n\}$ 在 $\mathscr{L}^2(\mu)$ 内收敛于 $f$，并且

$$f \sim \sum_{n=1}^\infty c_n \phi_n.$$

证 当 $n > m$ 时，

$$
\| s_n - s_m \| = |c_{m+1}|^2 + \cdots + |c_n|^2,
$$

所以 $\{s_n\}$ 是 $\mathscr{L}^2(\mu)$ 内的 Cauchy 序列。由定理 11.42，有一个函数 $f \in L^2(\mu)$ 使

$$
\lim_{n \to \infty} \| f - s_n \| = 0.
$$

但是当 $n > k$ 时，

$$
\int_X f \overline{\phi_k} d\mu - c_k = \int_X f \overline{\phi_k} d\mu - \int_X s_n \overline{\phi_k} d\mu,
$$

所以

$$
\left| \int_X f \overline{\phi_k} d\mu - c_k \right| \leqslant \| f - s_n \| \cdot \| \phi_k \| + \| f - s_n \|.
$$

令 $n \to \infty$，得

$$
c_k = \int_X f \overline{\phi_k} d\mu \quad (k = 1, 2, 3, \cdots).
$$

证完。

11.44 定义

$\{\phi_n\}$ 是正规正交集，$f \in \mathscr{L}^2(\mu)$。如果由等式

$$
\int_X f \overline{\phi_n} d\mu = 0 \quad (n = 1, 2, 3, \cdots)
$$

能推出 $\| f \| = 0$，就说 $\{\phi_n\}$ 是完备的。

在定理 11.40 的推论内我们从 Parseval 等式 (101) 导出了三角系的完备性。

反之，Parseval 等式对于每个完备正规正交集成立。

11.45 定理

设 $\{\phi_n\}$ 是完备正规正交集。如果 $f \in \mathscr{L}^2(\mu)$，并且

$$
f \sim \sum_{n=1}^\infty c_n \phi_n,
$$

必然

$$
\int_X |f|^2 d\mu = \sum_{n=1}^{\infty} |c_n|^2
$$

**证明** 根据 Bessel 不等式，知道 $\sum |c_n|^2$ 收敛。令
$s_n = c_1 \phi_1 + \cdots + c_n \phi_n,$

Riesz-Fischer 定理表明，有一个函数 $g \in L^2(\mu)$ 使得
$$g \sim \sum_{n=1}^{\infty} c_n \phi_n, \tag{108}$$

并且 $\|g - s_n\| \to 0$。从而 $\|s_n\| \to \|g\|$，因为
$\|s_n\|^2 = |c_1|^2 + \cdots + |c_n|^2,$

我们得到

$$\int_X |g|^2 d\mu = \sum_{n=1}^{\infty} |c_n|^2. \tag{109}$$

现在 (106)，(108) 以及 $\{\phi_n\}$ 的完备性可以说明 $\|f - g\| = 0$，因此能由 (109) 得出 (107)。

把定理 11.34 与 11.45 合并起来，我们得到一个非常有趣的结论，这就是每个完备正规正交系能在一切函数 $f \in L^2(\mu)$（把几乎处处相等的函数等同起来），与一切使 $\sum |c_n|^2$ 收敛的序列 $\{c_n\}$ 之间，建立一一对应。表达式
$f \sim \sum_{n=1}^{\infty} c_n \phi_n,$

以及 Parseval 等式合在一起表明 $L^2(\mu)$ 可以被看成一个无限维的欧氏空间（所谓 Hilbert 空间），在其中点 $f$ 的坐标是 $c_n$，而函数 $\phi_n$ 是坐标向量。