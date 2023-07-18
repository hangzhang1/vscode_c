#include<stdio.h>

int main()
{
    int a, b, d;
    scanf("%d %d %d", &a, &b, &d);
    // a、b十进制 转换为d进制
    int c = a + b;
    int ans[31] = {0};
    int k = 0;
    while(c)
    {
        ans[k]= c%d;
        k++;
        c = c/d;
    }
    for(int i = k-1; i >= 0; i--)
    {
        printf("%d", ans[i]);
    }
    printf("\n");
    
    return 0;
}