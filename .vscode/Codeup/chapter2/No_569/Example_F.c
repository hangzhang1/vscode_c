#include<stdio.h>

#define N 10
int main()
{
    int a[N] = {0};
    for(int i= 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i <= N; i++)
    {
        printf("%d\n", a[N-i]);
    }

    return 0;
}