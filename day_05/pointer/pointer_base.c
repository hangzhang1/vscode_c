#include<stdio.h>

void swap(int *a, int *b);
void max_min_number(int *p, int n, int *max, int *min);
int main()
{
    // int i = 1;
    // int *p = &i;

    // *p = 2;
    // printf("i = %d\n", i);

    // int a=3, b=4;
    // printf("a = %d, b = %d\n", a, b);
    // swap(&a, &b);
    // printf("a = %d, b = %d\n", a, b);

    int arr[10]={1,2,3,4,15,6,-1,7,8,9};
    int max = 0, min=0;
    max_min_number(arr, sizeof(arr) / sizeof(arr[0]), &max, &min);
    printf("max = %d, min = %d\n", max, min);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}

void max_min_number(int *p, int n, int *max, int *min)
{
    *max = p[0];
    *min = p[0];
    for (int i = 1; i < n; i++)
    {
        if(p[i] > *max)
        {
            *max = p[i];
        }
        if(p[i] < *min)
        {
            *min = p[i];
        }
    }
}

