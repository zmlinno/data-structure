//
//  SeqList.h
//  ShunXuBiao
//
//  Created by 张木林 on 2023/10/30.
//

#ifndef SeqList_h
#define SeqList_h
#include<stdio.h>
#include<stdlib.h>


#endif /* SeqList_h */
typedef int SLDataType;
typedef struct SeqList
{
    SLDataType *a;
    int size;  //有效数据
    int capacity; //扩容有太多的不确定，因为不知道具体要需要多少。一次稍微多给一点
    //喜欢2倍的扩容，2倍相当于一个和适量，一次约扩越多的
    //100 200 400 800 1600，扩容的频率是越来越底的
}SL;

void SLInit(SL *ps);//初始化是必须的
void SLDestroy(SL *ps);//和销毁
void SLPrint(SL*ps);
//所以要传指针

void  SLCheckCapacity(SL *ps);





void SLPushBack(SL *ps,SLDataType x);//尾插的意思
void SLPushFront(SL *ps,SLDataType x);//尾删
void SLPopBack(SL *ps);//头删
void SLpopFront(SL *ps);//头插的意思





//插入数据和删除
void SLErase(SL *ps,int pos);
void SLInsert(SL *ps,SLDataType x,int pos);

