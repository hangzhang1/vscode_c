#include<stdio.h>

int main()
{
    int a[10] = {0};
    for(int i = 0;i < 10; i++)
    {   
        scanf("%d", &a[i]);
    }

    int b[10] = {0};
    for(int i = 0;i < 10; i++)
    {   
        b[9-i] = a[i]; 
    }
    for(int i = 0;i < 10; i++)
    {   
        printf("%d\n", b[i]);
    }
    return 0;
}