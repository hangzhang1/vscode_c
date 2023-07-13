#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i = 1;
    int sum = 0;
    while(i <= N)
    {
        sum += i;
        if(N == i)
        {
            printf("%d\n", sum);
            break;
        }
        i++;
    }

    return 0;   
}