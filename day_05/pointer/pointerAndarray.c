#include<stdio.h>

int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int* p = &arr[2];
    int* q = p + 3;
    p += 6;
    printf("p = %p, q = %p\n", p, q);
    printf("p = %d, q = %d\n", *p, *q);
    return 0;
}
