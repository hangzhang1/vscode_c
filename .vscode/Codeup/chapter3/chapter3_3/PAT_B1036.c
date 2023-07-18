#include<stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d %c", &n, &c);
    int row;
    if(n % 2 == 0)
        row = n / 2;
    else
        row = n / 2 + 1;
    
    for(int i = 0; i < row; i++)
    {
        if(i == 0 || i == row-1)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%c", c);
            }
            printf("\n");
        } 
        else
        {
            for(int j = 0; j < n; j++)
            {
                if(j == 0||j==n-1)
                    printf("%c", c);
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    
    return 0;
}