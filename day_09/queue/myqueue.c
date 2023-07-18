#include "myqueue.h"


// typedef struct myqueue
// {
//     int elements[N];
//     int front;
//     int rear;
// } Queue;



// 创建空队列
Queue* Queue_create()
{
    return (Queue*)calloc(1, sizeof(Queue));
}

// 销毁
void Queue_destroy(Queue* q);



void enqueue(Queue* q, int val)
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