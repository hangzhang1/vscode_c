#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int *ptr = (int*)malloc(n * sizeof(int));
    m = m%n; // m不一定小于n
    
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &ptr[(i+m)%n]);
    }
    for(int i = 0;i < n;i++)
    {
        if(i!=(n-1))
            printf("%d ", ptr[i]);
        else
            printf("%d", ptr[i]);
    }
    return 0;
}