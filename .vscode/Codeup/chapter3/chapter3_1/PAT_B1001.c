#include<stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    while(n != 1)
    {
        if(n % 2 == 1)
        {
            n = 3 * n + 1;
            n = n / 2;
            count++;
        }
        else
        {
            n = n / 2;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}