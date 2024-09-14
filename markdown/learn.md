<center>

# Markdown和Latex的学习笔记 

</center>

## 标题

# 一级标题

> \# 一级标题
>注意# 后面的空格

<br />

## 二级标题

> \## 二级标题

<br />

### 三级标题

> \### 三级标题

---
## 分割线

以下符号可以添加分割线
> \---

---

##文本

**加粗**

> \*\*加粗**

<br />


*斜体*

> \*斜体*

<br />

~~删除线~~

> \~\~删除线~~

<br />

==高亮==

> \=\=高亮==

<div STYLE="page-break-after:always;">

</div>

---

## 列表

* 无序列表1
    * 嵌套无序列表1
    * 嵌套无序列表2
* 无序列表2
* 无序列表3
>
> \* 无序列表1
>  &emsp;&emsp;  \* 嵌套无序列表1
>  &emsp;&emsp;  \* 嵌套无序列表2
>  \* 无序列表2
>  \* 无序列表3

  <br />

1. 有序列表 1
   1. 嵌套有序列表 1
   2. 嵌套有序列表 2
2. 有序列表
3. 有序列表

>1. 有序列表 1
> &emsp;1. 嵌套有序列表 1
> &emsp;2. 嵌套有序列表 2
>2. 有序列表
>3. 有序列表

<br />

任务列表：
- [x] 已经完成的事
- [ ] 未完成的事

>任务列表：
>\- [x] 已经完成的事
>\- [ ] 未完成的事

<br />

引用文本：
> 引用
> 可以这样引用

>\> 引用
>\> 可以这样引用

---
## 代码

代码块：
``` python {.line-numbers}
print("Hello, World!")
```

>...python {.line-numbers}
>print("Hello, World!")
>... 注意要将. 换为`
>{.line-numbers}为显示行数

---
## 超链接

[GitHub](https://github.com)

>\[GitHub](https://github.com)

---
## 图片

<center>

![bit](https://pic3.zhimg.com/80/v2-7e46c2f8a5840db3442939c1bae15208_qhd.jpg)

</center>

>\<center>
>
>\!\[bit](https://pic3.zhimg.com/80/>v2-7e46c2f8a5840db3442939c1bae15208_qhd.jpg)
>
>\</center>
1.这是使用链接的方法
2.\<center>
\</ center>可以居中图片，但要注意\<center>后面的空行是必要的

<br />

<center>

![哒哒哒](哒哒哒.jpg)

</center>

>\!\[哒哒哒](哒哒哒.jpg)
>也可以使用相对路径

---

## 表格

 | 表头 | 表头 |
 | ---- | ---- |
 | 内容 | 内容 |
 |内容  | 内容 |

>\| 表头 \| 表头 \|
> | ---- | ---- |
> | 内容 | 内容 |
> |内容  | 内容 |

---

## 注释

> \<!-- 注释-->

---

## 公式

### 行内公式

单位圆 $x^2+y^2=1$

> 单位圆 \$x\^2+y^2=1$

<br />

### 公式块

$$
\begin{cases}
x=\rho\cos\theta \\
y=\rho\sin\theta \\
\end{cases}
$$

> \$\$
>\begin{cases}
>x=\rho\cos\theta \\\\
>y=\rho\sin\theta \\\\
>\end{cases}
>$$

<br />

### 分数

普通分数$\frac{1}{x}$

> \$\frac{1}{x}$

<br />
 
展示型的分数$\displaystyle\frac{1+x}{1-x}$

> \$\displaystyle\frac{1+x}{1-x}$

### 开根号

$$\sqrt{2}$$

> \$\$\sqrt{2}$$

<br />

$$\sqrt[n]{2}$$

> \$\$ \sqrt[n]{2}\$\$

### 间距

$$a\!b$$

> \$\$a\\!b$$ 窄间距

<br />

$$ab$$

> \$\$ab$$ 正常间距

<br />

$$a\,b$$

> \$\$a\\,b$$ 小空格

<br />

$$a\;b$$

> \$\$a\\;b$$ 中等空格

<br />

$$a\ b$$

>\$\$a\\ b$$ 大空格

<br />

$$ a\quad b$$

> \$\$ a\quad b$$ quad 空格

<br />

$$a\qquad b$$

> \$\$a\\qquad b$$ 两个 quad 空格

<br />

### 大型符号

累加 $\sum_{k=1}^n\frac{1}{k}\quad \displaystyle\sum_{k=1}^n\frac{1}{k}$
> \$\sum_{k=1}\^n\frac{1}{k}\quad \displaystyle\sum_{k=1}^n\frac{1}{k}$

<br />
<br />

累乘 $\prod_{k=1}^n\frac{1}{k} \quad \displaystyle\prod_{k=1}^n\frac{1}{k}$
> \$\prod \_{k=1}\^n \\frac{1}{k} \quad \displaystyle\prod_{k=1}^n\frac{1}{k}$

<br />
<br />

积分 $\displaystyle \int_0^1x{\rm d}x \quad \iint_{D_{xy}}xy{\rm d}S$
> \$\displaystyle \int_0^1x{\rm d}x \quad \iint_{D_{xy}}xy{\rm d}S$

<br />
<br />

匹配大小的小括号 $\displaystyle \left(\sum_{k=1}^n \frac{1}{k} \right)^2$
> \$\displaystyle \left(\sum_{k=1}^n \frac{1}{k} \right)^2$

<br />
<br />

匹配大小的中括号 $\displaystyle \left(\sum_{k=1}^n \frac{1}{k} \right)^2$
> \$\displaystyle \left(\sum_{k=1}^n \frac{1}{k} \right)^2$

<br />
<br />

匹配大小的大括号 $\displaystyle \left\{\sum_{k=1}^n \frac{1}{k} \right \}^2$
> \$\displaystyle \left\\{\sum_{k=1}^n \frac{1}{k} \right \\}^2$

<br />
<br />

匹配大小的尖括号 $\displaystyle \left \langle\sum_{k=1}^n \frac{1}{k} \right \rangle ^2$
> \$\displaystyle \left \langle\sum_{k=1}^n \frac{1}{k} \right \rangle ^2$

<br />
<br />

连等
$$
\begin{aligned}
y &=(x+5)^2-(x+1)^2 \\
& =(x^2+10x+25)-(x^2+2x+1) \\
&=8x+24 \\
\end{aligned}
$$
>\$\$
\begin{aligned}
y &=(x+5)\^2-(x+1)^2 \\\\
& =(x\^2+10x+25)-(x^2+2x+1) \\\\
&=8x+24 \\\\
\end{aligned}
>$$

<br />
<br />

方程组

$$
\begin{cases}
k_{11}x_1+k_{12}x_2+\cdots+k{1n}x_n=b_1 \\
k_{21}x_1+k_{22}x_2+\cdots+k{2n}x_n=b_2 \\
\cdots \\
k_{n1}x_1+k_{n2}x_2+\cdots+k{nn}x_n=b_n \\
\end{cases}
$$

> \$\$
\begin{cases}
k_{11}x_1+k_{12}x_2+\cdots+k{1n}x_n=b_1 \\\\
k_{21}x_1+k_{22}x_2+\cdots+k{2n}x_n=b_2 \\\\
\cdots \\\\
k_{n1}x_1+k_{n2}x_2+\cdots+k{nn}x_n=b_n \\\\
\end{cases}
>$$

<br />
<br />

矩阵
$$
\begin{pmatrix}
1 & 1 & \cdots & 1 \\
1 & 1 & \cdots & 1 \\
\vdots & \vdots &\cdots & 1 \\
1 & 1 & \cdots & 1 \\
\end{pmatrix}
$$

>\$\$
\begin{pmatrix}
1 & 1 & \cdots & 1 \\\\
1 & 1 & \cdots & 1 \\\\
\vdots & \vdots & \cdots & 1 \\\\
1 & 1 & \cdots & 1 \\\\
\end{pmatrix}
>$$

<br />

$$
\begin{bmatrix}
1 & 1 & \cdots & 1 \\
1 & 1 &\cdots & 1 \\
\vdots & \vdots & \cdots & 1 \\
1 & 1 &\cdots & 1 \\
\end{bmatrix}
$$

>\$\$
\begin{bmatrix}
1 & 1 & \cdots & 1 \\\\
1 & 1 & \cdots & 1 \\\\
\vdots & \vdots & \cdots & 1 \\\\
1 & 1 & \cdots & 1 \\\\
\end{bmatrix}
>$$

<br />

$$
\begin{vmatrix}
1 & 1 & \cdots & 1 \\
1 & 1 & \cdots & 1 \\
\vdots & \vdots & \cdots & 1 \\
1 & 1 & \cdots & 1 \\
\end{vmatrix}
$$

>\$\$
\begin{vmatrix}
1 & 1 & \cdots & 1 \\\\
1 & 1 & \cdots & 1 \\\\
\vdots & \vdots & \cdots & 1 \\\\
1 & 1 & \cdots & 1 \\\\
\end{vmatrix}
>$$

<br />
<br />

标号

$$
x+2 \tag{1.2}
$$

> \$\$
x+2 \tag{1.2}
>$$

<br />

$$
\begin{equation}
x^n+y^n=z^n
\end{equation}
$$

> \$\$
\begin{equation}
x\^n+y\^n=z^n
\end{equation}
>$$

<br />