//标准库头文件
#include "my_include.h"
//生成迷宫
#include "maze.h"

#include "solution/A_star/A_star.h"
int begin_x,begin_y,end_x,end_y;
//
int main(){
    int G[100][100];
//  创建迷宫
    creat(G,11,begin_x,begin_y,end_x,end_y);
//  打印迷宫
    cout<<begin_x<<begin_y<<endl;
    cout<<end_x<<end_y<<endl;
    print_maze(G);
    return 0;
}
