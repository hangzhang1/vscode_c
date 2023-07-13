// 输入a、b、c三个整数，按先大后小的顺序输出a、b和c。
// 注意请使用指针变量的方式进行比较和输出。
#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;
    if(*p1 > *p2 && *p1 > *p3)
    {
        if(*p2 > *p3)
        {
            printf("%d %d %d\n", *p1, *p2, *p3);
        }
        else
        {
            printf("%d %d %d\n", *p1, *p3, *p2);
        }
    }
    else if (*p2 > *p1 && *p2 > *p3)
    {
        if(*p1 > *p3)
        {
            printf("%d %d %d\n", *p2, *p1, *p3);
        }
        else
        {
            printf("%d %d %d\n", *p2, *p3, *p1);
        }
    }
    else
    {
        if(*p1 > *p2)
        {
            printf("%d %d %d\n", *p3, *p1, *p2);
        }
        else
        {
            printf("%d %d %d\n", *p3, *p2, *p1);
        }
    }
    
    return 0;
}