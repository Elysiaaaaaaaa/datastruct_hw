//标准库头文件
#include "my_include.h"
//生成迷宫
#include "maze.h"

#include "solution/A_star/A_star.h"

Point m_begin,m_end;
int G[100][100];
int G_w[100][100][2];
//
int main(){

//  创建迷宫
    creat(G,G_w, SIZE,m_begin,m_end);
    creat(G,G_w,SIZE,m_begin,m_end, true);
//  打印迷宫
    cout<<m_begin.x<<m_begin.y<<endl;
    cout<<m_end.x<<m_end.y<<endl;
    print_maze(G);
    cout<<"weight"<<endl<<endl;
    print_maze_w(G_w);
    return 0;
}
