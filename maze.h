#include "my_include.h"

#ifndef MAZE_MAZE_H
#define MAZE_MAZE_H


//class maze {
//private:
//    int row,col,method;
//    std::string* map;
//public:
//    string* getmap() { return map; }
//    maze(int row,int col,int method=0);
//    bool isvisited(int row,int col);
//    ~maze(){
//    delete[] this->map;
//    };
//};

//初始化迷宫
void creat(int G[100][100]);
//打印迷宫
void print_maze(int G[100][100]);
#endif //MAZE_MAZE_H
