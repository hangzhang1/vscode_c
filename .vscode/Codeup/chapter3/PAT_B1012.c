#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *ptr = (int *)malloc(N * sizeof(int));
    for(int i=0;i<N;i++)
    {
        scanf("%d", &ptr[i]);
    }
    //A1= 能被 5 整除的数字中所有偶数的和；
    int A1 = 0;
    for(int i = 0; i < N; i++)
    {
        if(ptr[i]%5 == 0 && ptr[i]%2==0)
        {
            A1 += ptr[i];
        }
    }
// A2 = 将被5除后余 1 的数字按给出顺序进行交错求和，即计算n1−n2+n3−n4
    int A2=0;
    double count_2 = 0;
    for(int i = 0; i < N; i++)
    {
        if(ptr[i]%5 == 1 )
        {
            count_2 = count_2 + 1;
            A2 += ptr[i]*(int)pow((-1.0),count_2-1);
        }
    }
// A3 = 被 5 除后余 2 的数字的个数；
    int A3 = 0;
    for(int i = 0; i < N; i++)
    {
        if(ptr[i]%5 == 2)
        {
            A3++;
        }
    }
//A4= 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
    float A4 = 0;
    float count_4 = 0;
    for(int i = 0; i < N; i++)
    {
        if(ptr[i]%5 == 3)
        {
            A4 =A4 + (float)ptr[i];
            count_4 = count_4 + 1;
        }
    }
    if(A4 != 0)
    {
        A4 = A4/count_4;
    }
    
    
    //A5 = 被 5 除后余 4 的数字中最大数字。
    int A5;
    int max = 0;
    for(int i = 0; i < N; i++)
    {
        if(ptr[i]%5 == 4 && ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    A5 = max;
    if(A1 == 0)
    {
        printf("N ");
    }
    else
    {
        printf("%d ", A1);
    }
    if(count_2 == 0)
    {
        printf("N ");
    }
    else
    {
        printf("%d ", A2);
    }
    if(A3 == 0)
    {
        printf("N ");
    }
    else
    {
        printf("%d ", A3);
    }
    if(A4 == 0)
    {
        printf("N ");
    }
    else
    {
        printf("%.1f ", A4);
    }
    if(A5 == 0)
    {
        printf("N");
    }
    else
    {
        printf("%d", A5);
    }
    return 0;
}