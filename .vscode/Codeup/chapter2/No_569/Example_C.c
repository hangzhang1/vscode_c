#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[10][10] = {0};



    for(int i =0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(i == j)
                a[i][j] = 1;
            else if(j == 0)
                a[i][j] = 1;
            else
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
            
        }
        
    }
    for(int i = 0;i < n; i++)
    {   
        for (int j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}