#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 10

typedef struct myqueue
{
    int elements[N];
    int front;
    int rear;
}Queue;

// 创建空队列
Queue* Queue_create();

// 销毁
void Queue_destroy(Queue* q);

void enqueue(Queue* q, int val);
int dequeue(Queue* q);
int peek(Queue* q);
bool isEmpty(Queue* q);
bool isFull(Queue* q);

int main()
{
    Queue* q = Queue_create();
    for(int i = 0; i < N; i++)
    {
        enqueue(q, i);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d", dequeue(q));
    }

    return 0;
}

// 创建空队列
Queue* Queue_create()
{
    return (Queue*)calloc(1,sizeof(Queue));
}

void enqueue(Queue*q, int val)
{
    if(isFull(q))
    {
        printf("Error:queue is Full.\n");
        exit(1);
    }
    // 插入元素
    q->elements[q->rear] = val;
    // 更新rear的值
    q->rear = (q->rear + 1) % N;
}

int dequeue(Queue* q)
{
    if(isEmpty(q))
    {
        printf("Error:queue is Empty.\n");
        exit(1);
    }
    int removeValue = q->elements[q->front];
    q->front = (q->front + 1) % N;
    return removeValue;
}

int peek(Queue* q)
{
    if(isEmpty(q))
    {
        printf("Error:queue is Empty.\n");
        exit(1);
    }
    return q->elements[q->front]; 
}

bool isEmpty(Queue* q)
{
    return q->front == q->rear;
}

bool isFull(Queue* q)
{
    return q->front == (q->rear + 1) % N;
}