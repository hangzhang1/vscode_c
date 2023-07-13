#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int in_A, out_A, in_B, out_B;
    int count_A = 0, count_B = 0;
    for(int i=0; i < n; i++)
    {
        scanf("%d %d %d %d", &in_A, &out_A, &in_B, &out_B);
        if(in_A+in_B == out_A && in_A+in_B != out_B)
        {
            count_A++;
        }
        else if(in_A+in_B == out_B && in_A+in_B != out_A)
        {
            count_B++;
        }
    }
    printf("%d %d\n", count_B, count_A);
    return 0;
}