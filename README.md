# datastruct_hw
An abstract project

---
## 文件
- solution
  - 解迷宫方法
- my_include.h
  - 包含常用头文件
- maze.h
  - 创建迷宫相关
```c++
//传入二维数组，随机初始化迷宫 
void creat(int G[100][100],int size);
//同上，G_w[x][y][0] 0不可走 1可走 ，G_w[x][y][1] 权重
void creat(int G[100][100],int G_w[100][100][2],int size,Point & begin,Point & end);
//打印迷宫
void print_maze(int G[100][100]);
```
        
- main


    creat(G);
---
## 方法概述
### A_star
xxxxxxxx
### bfs
xxxxxxxx

---
## git使用

把代码搞到手
```
git clone git@github.com:Elysiaaaaaaaa/datastruct_hw.git
```


提交代码固定三连(在有.git文件夹下操作)
```
git add 你改了的文件名
git commit -m "随便写点"
git push origin master
```


```
git fetch origin
```