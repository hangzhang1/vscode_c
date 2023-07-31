#include<stdio.h>
#define maxSize 100010
int hash[maxSize] = {0};
int main()
{
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        int index = -1;
        scanf("%d", &index);
        hash[index]++;
    }
    int K;
    scanf("%d", &K);
    for(int i = 0; i < K; i++)
    {
        int index = -1;
        scanf("%d", &index);
        if(i == K-1)
        {
            printf("%d", hash[index]);
        }
        else
        {
            printf("%d ", hash[index]);
        }
    }
    printf("\n");
    return 0;
}