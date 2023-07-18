#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    char c;
    scanf("%d %c", &N, &c);

    int bottom = (int)sqrt(2.0 * (N+1)) - 1 ;  // 三角形底边拥有的字符数
    if(bottom % 2== 0)
        bottom--;  // 如果为偶数 变为奇数

    int used = (bottom + 1)*(bottom + 1)/2 - 1; //总共输出的非空字符数

    // 输出倒三角
    for(int i = bottom; i > 0; i -= 2) //i为当前行的非空字符数
    {
        for(int j = 0; j < (bottom - i)/2; j++)
            printf(" "); // 空字符个数为 (bottom - i)/2
        for(int j = 0; j < i; j++)
            printf("%c", c);
        printf("\n");
    }
    // 输出正三角
    for(int i = 3; i <= bottom; i += 2)
    {
        for(int j = 0; j < (bottom - i)/2; j++)
            printf(" ");
        for(int j = 0; j < i; j++)
            printf("%c", c);
        printf("\n");
    }
    printf("%d", N - used); // 输出剩余字符数
    return 0;
}