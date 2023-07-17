#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[1001] ={0};
    int k, e, max_e = 0; // k表示系数，e表示指数
    int count = 0;
    while(scanf("%d %d", &k ,&e) != EOF)
    {
        a[e] = k;
    }
    for(int i =0; i < 1001; i++)
    {
        // 先判断系数是不是为0
        if(a[i] == 0)
        {
            continue;
        }
        else // a[i] != 0
        {
            if(i == 0)
            {
                a[i] = 0;
                continue;
            }
            else if (i != 0)
            {
                // int temp_k = a[i];  // xe 的系数
                int temp_k = a[i] * i;
                a[i-1] = temp_k;
                a[i] = 0;
                max_e = i - 1; // 记录最高指数
                count++; // 记录非零项的个数
            }    
        }
    }
    if(count == 0)
    {
        printf("0 0");
        return 0;
    }
    
    for(int i = max_e; i >= 0; i--)
    {
        if(a[i] != 0)
        {
            count--;
            if(count == 0)
            {
                printf("%d %d", a[i], i);
                break;
            }
            else
                printf("%d %d ", a[i], i);
        }
    }
    
    return 0;
}