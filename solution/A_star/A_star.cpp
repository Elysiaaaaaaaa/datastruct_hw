//
// Created by Elysia on 2023/11/30.
//

#include "A_star.h"

bool map_M[100][100]={0};

int A_star(int map[][100][2],Point begpos_point,Point endpos_point){
    My_Point pwpoint(begpos_point.x,begpos_point.y);
    priority_queue<My_Point> pq;
    pq.push(pwpoint);
    while(!pq.empty()){
        pwpoint = pq.top();
        pq.pop();
//        上
        if(map[pwpoint.row-1][pwpoint.col][0]!=0){
            if(pwpoint.row-1==endpos_point.x && pwpoint.col==endpos_point.y){return 0;}
            pq.emplace(pwpoint.row-1,pwpoint.col,pwpoint.g+1,
                             abs(endpos_point.x-(pwpoint.row-1)+endpos_point.y-(pwpoint.col))
                             );
            map[pwpoint.row-1][pwpoint.col][0]=0;
        }
//        下
        if(map[pwpoint.row+1][pwpoint.col][0]!=0){
            if(pwpoint.row+1==endpos_point.x && pwpoint.col==endpos_point.y){return 0;}
            pq.emplace(pwpoint.row+1,pwpoint.col,pwpoint.g+1,
                             abs(endpos_point.x-(pwpoint.row+1)+endpos_point.y-(pwpoint.col))
                             );
            map[pwpoint.row+1][pwpoint.col][0]=0;
        }
//        左
        if(map[pwpoint.row][pwpoint.col-1][0]!=0){
            if(pwpoint.row==endpos_point.x && pwpoint.col-1==endpos_point.y){return 0;}
            pq.emplace(pwpoint.row,pwpoint.col-1,pwpoint.g+1,
                             abs(endpos_point.x-(pwpoint.row)+endpos_point.y-(pwpoint.col-1))
                             );
            map[pwpoint.row][pwpoint.col-1][0]=0;
        }
//        右
        if(map[pwpoint.row][pwpoint.col+1][0]!=0){
            if(pwpoint.row==endpos_point.x && pwpoint.col+1==endpos_point.y){return 0;}
            pq.emplace(pwpoint.row,pwpoint.col+1,pwpoint.g+1,
                             abs(endpos_point.x-(pwpoint.row)+endpos_point.y-(pwpoint.col+1))
                             );
            map[pwpoint.row][pwpoint.col+1][0]=0;
        }
    }
    return 1;
}