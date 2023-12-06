//
// Created by Elysia on 2023/11/30.
//

#include "A_star.h"

#define ROWS 11
#define COLS 11
#define ZXJL 10
#define XXJL 14

//enum dirent{p_up,p_down,p_left,p_right,p_lup,p_ldown,p_rup,p_rdown};

typedef struct tree_Node{
    MyPoint point;
//    找爹
    struct tree_Node* pParent;
//    存8个可能的步骤
    vector<struct tree_Node*> child;
} treeNode;

//n×数存路径

//创建树节点
//treeNode * creatTreeNode(int row,int col){
//    treeNode* pNew = new treeNode;
//    memset(pNew,0,sizeof(treeNode));
//    pNew->point.row = row;
//    pNew->point.col = col;
//    return pNew;
//}
//
//void my_del(treeNode* p){
//    vector<treeNode*>::iterator it = p->child.begin();
//    while(it != p->child.end()){
//        my_del(*it);
//    }
//    delete p;
//}
//
//int getH(MyPoint pos,MyPoint endpos){
//    int x = abs(endpos.col - pos.col);
//    int y = abs(endpos.row - pos.row);
//    return ZXJL*(x+y);
//}

//int A_star(int map[][100],Point begpos_point,Point endpos_point){
////typedef struct My_Point{
//////    数组下标
////    int row,col;
//////    评估标准
////    int f,g,h;
////}MyPoint;
//
//    bool pathMap[ROWS][COLS]={0};
//    MyPoint begpos,endpos;
//    begpos.row=begpos_point.x;
//    begpos.col=begpos_point.y;
//    begpos.g=begpos.f=begpos.h=0;
//    endpos.row=endpos_point.x;
//    endpos.col=endpos_point.y;
//    endpos.g=endpos.f=endpos.h=0;
//
////    树存储路径    八叉树
//    treeNode *pRoot = creatTreeNode(begpos.row,begpos.col);
//    pathMap[begpos.row][begpos.col] = true;
//
////    准备数组
//    vector<treeNode *> buff;
////
//    vector<treeNode *>::iterator it;
////    最小
//    vector<treeNode *>::iterator itMin;
////
//    bool isFindEnd;
////    起点开始
////  当前
//    treeNode * pCurrent = pRoot;
////    子
//    treeNode * pChild = NULL;
//
//    while (true){
////        1.寻路，找8个方向
//        for(int i = 0; i < 8; i++){
//            pChild = creatTreeNode(pCurrent->point.row, pCurrent->point.col);
//            switch (i) {
//                case p_up:
//                    pChild->point.row--;
//                    pChild->point.g += ZXJL;
//                    break;
//                case p_down:
//                    pChild->point.row++;
//                    pChild->point.g += ZXJL;
//                    break;
//                case p_left:
//                    pChild->point.col--;
//                    pChild->point.g += ZXJL;
//                    break;
//                case p_right:
//                    pChild->point.col++;
//                    pChild->point.g += ZXJL;
//                    break;
//                case p_lup:
//                    pChild->point.row--;
//                    pChild->point.col--;
//                    pChild->point.g += XXJL;
//                    break;
//                case p_ldown:
//                    pChild->point.row++;
//                    pChild->point.col--;
//                    pChild->point.g += XXJL;
//                    break;
//                case p_rup:
//                    pChild->point.row--;
//                    pChild->point.col++;
//                    pChild->point.g += XXJL;
//                    break;
//                case p_rdown:
//                    pChild->point.row++;
//                    pChild->point.col++;
//                    pChild->point.g += XXJL;
//                    break;
//            }
//            if(
//                0 == map[pChild->point.row][pChild->point.col]
//                &&
//                false == pathMap[pChild->point.row][pChild->point.col]
//                &&
//                pChild->point.row > 0 && pChild->point.row <= ROWS
//                &&
//                pChild->point.col > 0 && pChild->point.col <= COLS
//                ){
//    //            能走
//    //          2.入树
//    //          算h,f
//                pChild->point.h = getH(pChild->point,endpos);
//                pChild->point.f = pChild->point.g + pChild->point.h;
////                入树
//                pCurrent->child.push_back(pChild);
//                pChild->pParent = pCurrent;
////                入数组
//                buff.push_back(pChild);
//            } else{
//    //            释放
//                delete pChild;
//            }
//        }
////        检查是否能走
//
//
//
//
////      2.入树，数组
////找f最小的点
//        it = itMin = buff.begin();
//        for(;it!=buff.end();it++){
//            if((*itMin)->point.f > (*it)->point.f) {
//                itMin = it;
//            }
//        }
////走
//        pCurrent = *itMin;
////        删除走的节点
//        buff.erase(itMin);
////        标记走过的点
//        pathMap[pCurrent->point.row][pCurrent->point.col] = true;
////判断是否走完
//        if(endpos.row == pCurrent->point.row && endpos.col == pCurrent->point.col){
//            isFindEnd = true;
//            break;
//        }
////        走完没有找到--->无路
//        if(buff.size()==0){
//            isFindEnd = false;
//            break;
//        }
//    }
//    if(isFindEnd){
//        cout<<"success"<<endl;
//        while(pCurrent){
//            cout<<"x:"<<pCurrent->point.row<<"y"<<pCurrent->point.col<<endl;
//            pCurrent = pCurrent->pParent;
//            map[pCurrent->point.row][pCurrent->point.col]=9;
//        }
//        for(int i=0;i<ROWS;i++){
//            for(int j=0;j<COLS;j++){
//                cout<<map[i][j]<<' ';
//            }
//            cout<<endl;
//        }
//    } else{
//        cout<<"fail"<<endl;
//    }
//    my_del(pRoot);
//    return 0;
//}
//
MyPoint map_M[100][100];

int A_star(int map[][100][2],Point begpos_point,Point endpos_point){
    MyPoint begpos,endpos;
    begpos.row=begpos_point.x;
    begpos.col=begpos_point.y;
    begpos.g=begpos.f=begpos.h=0;
    endpos.row=endpos_point.x;
    endpos.col=endpos_point.y;
    endpos.g=endpos.f=endpos.h=0;
    map_M[begpos.row][begpos.col].
    while(!vec.empty()){

    }
}