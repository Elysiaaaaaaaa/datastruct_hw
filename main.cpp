//标准库头文件
#include "my_include.h"
//生成迷宫
#include "maze.h"

#include "solution/A_star/A_star.h"

//
int main(){
    int G[100][100];
//  创建迷宫
    creat(G,11);
//  打印迷宫
    print_maze(G);
    return 0;
}
