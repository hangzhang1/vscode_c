#include<stdio.h>

int fun_c(int N);
int main()
{
    int N;
    while(scanf("%d", &N) != EOF)
    {
        int num = fun_c(N);
        printf("%d\n", num);
    }
    return 0;
}

int fun_c(int N)
{
    
    if(N == 1)
    {
        return 1;
    }
    else if(N == 2)
    {
        return 2;
    }
    else
    {
        return fun_c(N-1) + fun_c(N-2);
    }
}