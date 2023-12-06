//标准库头文件
#include "my_include.h"
//生成迷宫
#include "maze.h"

#include "solution/A_star/A_star.h"
#include "solution/bfs/bfs.h"
Point m_begin,m_end;
int G[100][100];
int G_w[100][100][2];
//
int main(){

//  创建迷宫
//  G不带权 G_w带权
    creat(G,G_w, SIZE,m_begin,m_end);
//  打印迷宫
    cout<<m_begin.x<<m_begin.y<<endl;
    cout<<m_end.x<<m_end.y<<endl;
    print_maze(G);

    cout<<"weight"<<endl<<endl;
    print_maze_w(G_w);
    cout<<"weight"<<endl<<endl;
    A_star(G_w, m_begin,m_end);


    return 0;
}
