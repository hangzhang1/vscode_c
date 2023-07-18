// 队列的基本操作

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 10

typedef struct myqueue
{
    int elements[N];
    int front;
    int rear;
} Queue;


// 创建空队列
Queue* Queue_create();

// 销毁
void Queue_destroy(Queue* q);

void enqueue(Queue* q, int val);
int dequeue(Queue* q);
int peek(Queue* q);
bool isEmpty(Queue* q);
bool isFull(Queue* q);
