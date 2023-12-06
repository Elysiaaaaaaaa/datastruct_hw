//
// Created by Elysia on 2023/11/30.
//

#ifndef A_STAR_A_STAR_H
#define A_STAR_A_STAR_H

#include "../../my_include.h"
typedef struct My_Point{
//    数组下标
    int row,col;
//    评估标准
    int f,g,h;
}MyPoint;
int A_star(int map[][100][2],Point begpos_point,Point endpos_point);



#endif //A_STAR_A_STAR_H