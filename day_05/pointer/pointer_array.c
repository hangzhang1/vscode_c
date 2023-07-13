#include<stdio.h>
int great_larget(int *p, int n);
int main()
{
    // int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    // *arr = 100;
    // *(arr+7) = 700;
    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[7]);
    // arr++ // error  数组作为指针时是一个指针常量，不能修改
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int sum = 0;
    for(int *p = arr; p< arr+10;p++)
    {
        sum += *p;
    }
    printf("sum = %d\n", sum);
    int max = great_larget(arr, 10);
    printf("max = %d\n", max);
    return 0;
} 

int great_larget(int arr[], int n)  //arr本质上是一个指针，指向数组的首元素，它不是一个数组名，而是一个指针变量，可以修改，它和main函数中的arr不是同一个变量
{ //值传递
    int max = *arr;
    for(int i = 0; i < 10; i++)
    {
        if(max < *(arr+i))
        {
            max = *(arr+i);
        }
    }
    return max;
}