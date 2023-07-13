// 输入a和b两个整数，按先大后小的顺序输出a和b。
// 注意请使用指针变量的方式进行比较和输出。
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int* p1 = &a;
    int* p2 = &b;
    if(*p1 > *p2)
    {
        printf("%d %d\n", *p1, *p2);
    }
    else
    {
        printf("%d %d\n", *p2, *p1);
    }
    return 0;
}

