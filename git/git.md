<center>  

# Git学习 </center>

## 什么是Git

Git是一种分布式版本控制系统

## 原理

![Git](Git.png)

<center> 图1：Git原理 </center>
workspace: 工作区<br />
Index/Stage: 暂存区<br />
Repository: 仓库区<br />
Remote:远程仓库<br />

## 操作

### 创建版本库
``` shell
git init
```

### 添加到缓存区

``` shell
git add filename
```

### 提交到仓库
``` shell
git commit -m "注释"
```

### 查看状态
``` shell
git status
```

### 查看日志
``` shell
git log
```

### 版本回退
回退到上一个版本
``` shell
git reset --hard HEAD^
```
<br />

回退到上两个版本
``` shell
git reset --hard HEAD^^
```
<br />

回退到前100个版本
``` shell
git reset --hard HEAD~100
```

查看版本号
``` shell
git reset --hard
```
<br />

通过版本号回退
``` shell
git --hard 版本号
```
<be />

### 撤销修改

``` shell
git checkout -- filename
```
1. 这个命令可以撤销在工作区的文件修改，若暂存区中有一个版本，则会优先恢复这个版本，否则会从版本区中恢复。
2. 不要漏掉--，否则命令成创建分支。

## 工作区和版本区的区别

### 工作区
目录（除.git外）都是工作区

### 版本库
.git是版本库，其中还存有暂存区。当使用```git add```时，文件会从工作区添加到暂存区，再使用```git commit```可以将暂存区的文件添加到版本库中。