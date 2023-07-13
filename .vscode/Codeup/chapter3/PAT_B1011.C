#include<stdio.h>

int main()
{
    
    int T;
    scanf("%d", &T);
    int count = 0;
    while(T--)
    {
        count++;
        long long A, B ,C;
        scanf("%lld %lld %lld", &A, &B, &C);
        if(A + B > C)
        {
            printf("Case #%d: true\n", count);
        }
        else
        {
            printf("Case #%d: false\n", count);
        }
        
    }
    return 0;
}