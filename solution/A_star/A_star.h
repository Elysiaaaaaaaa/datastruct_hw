//
// Created by Elysia on 2023/11/30.
//

#ifndef A_STAR_A_STAR_H
#define A_STAR_A_STAR_H

#include "../../my_include.h"
class My_Point{
public:
//    数组下标
    int row,col;
//    评估标准
    int f,g,h;
    My_Point(int row=0,int col=0,int g=0,int h=0):row(row),col(col),g(g),h(h) {f=g+h;};
    bool operator < (const My_Point &p) const{return this->f > p.f;};
};
int A_star(int map[][100][2],Point begpos_point,Point endpos_point);



#endif //A_STAR_A_STAR_H