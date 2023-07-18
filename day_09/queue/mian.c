#include "myqueue.h"

int main()
{
    Queue* q = Queue_create();
    for(int i = 0; i < N ;i++)
    {
        enqueue(q, i);
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d", dequeue(q));
    }

    return 0;
}