#include<stdio.h>

int main()
{
    int n;
    scanf("%d" ,&n);
    int arr[3]={0};
    int i = 0;
    while(n)
    {
        arr[i++] = n % 10; // 个位数
        n = n / 10;
    } // 结束后 i = 数字长度+1 

    for(int k = i-1; k >= 0; k--)
    {
        while(arr[k]&&k==2)
        {
            printf("B");
            arr[k]--;
        }
        while(arr[k]&&k==1)
        {
            printf("S");
            arr[k]--;
        }
        if(arr[k]&& k==0)
        {
            for(int j = 1; j <= arr[k]; j++)
            {
                printf("%d", j);
            }
        }
    }
    printf("\n");
}