#include<stdio.h>
#define MAXSIZE 100

typedef struct
{
    int data[MAXSIZE]; // 用静态的“数组”存放数据元素
    int length; // 顺序表的当前长度
}SqList;  // 顺序表的定义


typedef struct
{
     int *data; // 指示动态分配数组的指针
    int MaxSize; // 顺序表的最大容量
    int length; // 顺序表的当前长度
}SeqList; // 顺序表的定义

int main()
{
    
    return 0;
}