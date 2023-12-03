//标准库头文件
#include "my_include.h"
//生成迷宫
#include "maze.h"
//
int main(){
    int G[100][100];
    creat(G);
    print_maze(G);
    return 0;
}
