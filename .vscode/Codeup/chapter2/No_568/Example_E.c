#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int sum = 0;
    int N = 1;
    while(true)
    {
        sum += N;
        if(sum > 1000)
        {
            printf("%d\n", N);
            break;
        }
        N++;
    }
    return 0;
}