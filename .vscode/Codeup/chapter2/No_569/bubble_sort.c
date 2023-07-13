#include<stdio.h>
# define SIZE(A) (sizeof(A)/sizeof(A[0]))
void swap(int *a, int *b);
void bubble_sort(int *p, int n);

int main()
{
    //创建一个乱序的长度为10的int数组
    int a[10] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 0};
    bubble_sort(a, SIZE(a));
    for(int k = 0; k<10; k++)
    {
        printf("%d ", a[k]);
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