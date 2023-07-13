#include<stdio.h>
void bubble_sort(int *p, int n);
void swap(int *a, int *b);
int main()
{
    int a[10] = {0};
    for(int i = 0;i < 9;i++)
    {   
        scanf("%d", &a[i]);
    }
    scanf("%d", &a[9]);
    bubble_sort(a, 10);

    for(int i = 0;i < 10;i++)
    {   
        printf("%d\n", a[i]);
    }
    return 0;
}

void bubble_sort(int *p, int n)
{
    //冒泡排序
    //从小到大排序
    for(int i = 1; i < n ;i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(p[j] > p[j+1])
            {
                swap(&p[j], &p[j+1]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}