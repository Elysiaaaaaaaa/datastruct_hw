//
// Created by Elysia on 2023/12/6.
//

#include "bfs.h"
queue<Point> q;
void bfs(int G_w[][100][2],int size,Point &begin,Point &end){
    q.push(begin);
    G_w[begin.x][begin.y][1]=0;
    while(!q.empty()){
        Point t = q.front();
        q.pop();
        if(t.x==end.x && t.y==end.y){
            cout<<"success!"<<endl;
            return;
        }
        if(t.x > 1 && G_w[t.x-1][t.y][1]!=0){
            q.push(Point(t.x - 1,t.y));
            G_w[t.x - 1][t.y][1]=0;
        }
        if(t.x < SIZE && G_w[t.x+1][t.y][1]!=0){
            q.push(Point(t.x + 1,t.y));
            G_w[t.x + 1][t.y][1]=0;
        }
        if(t.y > 1 && G_w[t.x][t.y-1][1]!=0){
            q.push(Point(t.x,t.y-1));
            G_w[t.x][t.y-1][1]=0;
        }
        if(t.y < SIZE && G_w[t.x][t.y+1][1]!=0){
            q.push(Point(t.x,t.y+1));
            G_w[t.x][t.y+1][1]=0;
        }
    }
    cout<<"map error!"<<endl;
}