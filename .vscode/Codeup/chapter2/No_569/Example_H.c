#include<stdio.h>

#define N 10

void swap(int *p, int *q);
void bubblesort(int *p, int n);
int main()
{
    int a[N] = {0};
    for(int i= 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    bubblesort(a, sizeof(a)/sizeof(a[0]));

    for(int i = 0; i < N; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

void bubblesort(int *p, int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {

            if(p[j] > p[j + 1])
                swap(&p[j], &p[j+1]);
        }
    }
}

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}