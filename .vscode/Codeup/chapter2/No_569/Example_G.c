#include<stdio.h>

#define N 20
int main()
{

    int arr[N] = {1,1,0};
    for(int i = 2; i < N; i++)
    {
        int a = arr[i-1];
        int b = arr[i-2];
        arr[i] = a + b;
    }
    for(int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}