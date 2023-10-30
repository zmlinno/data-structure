//
//  SeqList.c
//  ShunXuBiao
//
//  Created by 张木林 on 2023/10/30.
//

#include "SeqList.h"
#include <assert.h>


//对数据表初始化要怎么处理呢
//两种方式
void SLInit(SL *ps)
{
    ps->a=NULL;//直接初始化
    ps->size=0;
    ps->capacity=0;
    //都初始化为0
 
}

void SLDestroy(SL *ps)
{
    if(ps->a != NULL)
    {
        free(ps->a);
        ps->a=NULL;
        ps->size=0;
        ps->capacity=0;
        //如果不等于null就都初始化。释放
    }
    
}
void SLPrint(SL*ps)
{
    for (int i = 0; i<ps->size; i++)
    {
        
        printf("%d ", ps->a[i] );
    }
    printf("\n");
}



void  SLCheckCapacity(SL *ps)
{
    if(ps->size == ps->capacity)
    {
        //int newCapacity = ps->capacity*2;
        //这样就是扩了空间
        //那么如果为0的话，那么0*2还是0
        //空间就扩容不上去，所以在初始化的地方
        //直接写个4，就能直接扩了
        //或者第二种方式
        int newCapacity = ps->capacity ==0?4: ps->capacity*2;
        //如果capacity等于0的话，那么给一个固定空间四个，不等于0就扩容2倍
        //可以用realloc来扩容
        //返回地址变了就是异地扩
        //没变就是原地扩
        SLDataType *tmp =(SLDataType*) realloc(ps->a, sizeof(SLDestroy)*newCapacity);
        //扩容的意思
        if(tmp == NULL)
        {
            perror("realloc fail");
            return;
        }
            //检查下会不会失败
            //如果失败了就会直接结束程序
            //就打印错误就出去了
            ps->a = tmp;
            //用tmp是因为防止失败后把原来的空间直接给覆盖掉
            ps->capacity = newCapacity;
        }
        
        
        
    }
    
void SLPushBack(SL *ps,SLDataType x)//尾插
    {
        
        SLCheckCapacity(ps);
        ps->a[ps->size] = x;
        //直接在size里面插入x
        //问题是空间够不够的问题
        ps->size++;
        
    }


void SLPushFront(SL *ps,SLDataType x)
{
    SLCheckCapacity(ps);
    int end = ps->size - 1;
    while(end>=0)
    {
        ps->a[end+1] = ps->a[end];
        --end;
    }
    ps->a[0] = x;
    ps->size++;
    

}






void SLPopBack(SL *ps)
//尾删如何删除呢
{
   // ps->a[ps->size-1] = -1;
    
    
    //暴力检查
    assert(ps->size>0);
    

    ps->size--;
}



void SLpopFront(SL *ps)
{
    assert(ps);
    assert(ps->size>0);
    int begin = 1;
    while(begin<ps->size)
    {
        ps->a[begin-1] = ps->a[begin];
        ++begin;
    }
    ps->size--;
    
}


void SLInsert(SL *ps,int pos,SLDataType x)
{
    assert(ps);
    assert(pos >= 0 && pos<= ps->size);
    SLCheckCapacity(ps);
    
    int end = ps->size - 1;
    while(end >= pos)
    {
        ps->a[end+1] = ps->a[end];
        --end;
    }
    ps->a[pos] = x;
    ps->size++;
}



void SLErase(SL *ps,int pos)
{
    assert(ps);
    assert(pos >= 0 && pos<= ps->size);
    int begin = pos + 1;
    while(begin < ps->size)
    {
        ps->a[begin - 1] = ps->a[begin];
        begin++;
    }
    ps->size--;
    
}
