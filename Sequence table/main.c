//
//  main.c
//  ShunXuBiao
//
//  Created by 张木林 on 2023/10/30.
//

#include <stdio.h>
#include"SeqList.h"
#include <assert.h>


void TestSL1()
{
    SL s1;
    SLInit(&s1);//要传指针，
    SLDestroy(&s1);
    SLPushBack(&s1, 1);
    SLPushBack(&s1, 2);
    SLPushBack(&s1, 3);
    SLPushBack(&s1, 4);
    SLPushBack(&s1, 5);
    SLPushBack(&s1, 6);
    SLPushBack(&s1, 7);
    SLPushBack(&s1, 8);
    SLPushBack(&s1, 9);


    //头插的打印
    SLPushFront(&s1,50);
    SLPushFront(&s1,40);
    SLPushFront(&s1,30);
    SLPushFront(&s1,20);
    SLPushFront(&s1,10);

    SLPrint(&s1);

    SLDestroy(&s1);

}




void TestSL2()
{
    SL s1;
    SLInit(&s1);
    SLPrint(&s1);
    
    SLPushBack(&s1,1);
    SLPushBack(&s1,2);
    SLPushBack(&s1,3);
    SLPushBack(&s1,4);
    SLPushBack(&s1,5);
    SLPrint(&s1);
    
    SLPopBack(&s1);
    SLPrint(&s1);
    
    SLPopBack(&s1);
    SLPopBack(&s1);
//    SLPopBack(&s1);
    //SLPopBack(&s1);
    SLPrint(&s1);
    
    //SLPopBack(&s1);
   // SLPrint(&s1);
    SLDestroy(&s1);
}



void TestSL3()
{
    SL s1;
    SLInit(&s1);
    SLPrint(&s1);
    
    SLPushBack(&s1,1);
    SLPushBack(&s1,2);
    SLPushBack(&s1,3);
    SLPushBack(&s1,4);
    SLPushBack(&s1,5);
    SLPrint(&s1);
    
    SLpopFront(&s1);
    SLPrint(&s1);
    
    SLpopFront(&s1);
    SLPrint(&s1);
    
    SLpopFront(&s1);
    SLPrint(&s1);
    
    SLpopFront(&s1);
    SLPrint(&s1);
    
    SLpopFront(&s1);
    SLPrint(&s1);
    


}



void TestSL4()
{
//    SL *ptr = NULL;
//    SLInit(ptr);
    
    
}


void TestSL5()
{
    SL s1;
    SLInit(&s1);//要传指针，
    SLDestroy(&s1);
    SLPushBack(&s1, 1);
    SLPushBack(&s1, 2);
    SLPushBack(&s1, 3);
    SLPushBack(&s1, 4);
    SLPushBack(&s1, 5);
    SLPushBack(&s1, 6);
    SLPushBack(&s1, 7);
    SLPushBack(&s1, 8);
    SLPushBack(&s1, 9);
    
    SLPrint(&s1);
    
    SLInsert(&s1, 3, 30);
    SLPrint(&s1);

 
    
    
    
}



void TestSL6()
{
    SL s1;
    SLInit(&s1);//要传指针，
    SLDestroy(&s1);
    SLPushBack(&s1, 1);
    SLPushBack(&s1, 2);
    SLPushBack(&s1, 3);
    SLPushBack(&s1, 4);
    SLPushBack(&s1, 5);
    SLPushBack(&s1, 6);
    SLPushBack(&s1, 7);
    SLPushBack(&s1, 8);
    SLPushBack(&s1, 9);
    
    SLPrint(&s1);
    
    SLErase(&s1, 2);
    SLPrint(&s1);
    
}

int main(void)
{
    //TestSL1();
    //TestSL2();
    //TestSL3();
    //TestSL4();
    //TestSL5();
    TestSL6();
//    int *p1 = (int*)malloc(40);
//    printf("%p\n",p1);
//    int *p2 = (int*)realloc(p1,80);
//    printf("%p\n",p2);
    //是需要写入你要扩多少的数字
    //原地扩和异地扩
    
    return 0;
}
