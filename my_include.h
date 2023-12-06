//
// Created by Elysia on 2023/12/2.
//

#ifndef MAZE_MY_INCLUDE_H
#include <iostream>
#include <vector>
#include <random>
#include <cstring>
#include <time.h>
#include <queue>
#include <cstdlib>
#define SIZE 11
using namespace std;

//typedef struct point {
//	int x;
//	int y;
//} Point;

class Point{
public:
    int x,y;
    Point(int x=0,int y=0){
        this->x = x;
        this->y = y;
    }
};

#define MAZE_MY_INCLUDE_H
#endif //MAZE_MY_INCLUDE_H
