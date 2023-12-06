#include "my_include.h"

#ifndef MAZE_MAZE_H
#define MAZE_MAZE_H


//初始化迷宫                    尺寸
void creat(int G[100][100],int size,int &begin_x,int &begin_y,int &end_x,int &end_y);
//打印迷宫
void print_maze(int G[100][100]);
#endif //MAZE_MAZE_H
