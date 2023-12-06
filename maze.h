#include "my_include.h"

#ifndef MAZE_MAZE_H
#define MAZE_MAZE_H


//初始化迷宫                    尺寸
void creat(int G[100][100],int G_w[100][100][2],int size,Point & begin,Point & end, bool weight=false);
//打印迷宫
void print_maze(int G[100][100]);
//带权重
void print_maze_w(int G[100][100][2]);

#endif //MAZE_MAZE_H
