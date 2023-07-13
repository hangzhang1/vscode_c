// 输入10个整数，将其中最小的数与第一个数对换，
// 把最大的数与最后一个数对换。要求用3个函数实现，
// 分别为输入10个数、进行处理、输出10个数。要求使用指针的方法进行处理。

#include<stdio.h>

void process(int* p);
void input(int* p);
void output(int* p);
int main()
{
    int arr[10] = {0};
    input(arr);
    process(arr);
    output(arr);
    return 0;
}


void process(int* p)
{
    int min = p[0], max = p[0];
    int min_index = 0, max_index = 0;
    for(int i = 1; i < 10; i++)
    {
        if(p[i] < min)
        {
            min = p[i];
            min_index = i;
        }
        if(p[i] > max)
        {
            max = p[i];
            max_index = i;
        }
    }
    int temp1 = p[0];
    p[0] =p[min_index];
    p[min_index] = temp1; 

    int temp2 = p[9];
    p[9] =p[max_index];
    p[max_index] = temp2; 

}

void input(int* p)
{
    for(int i = 0; i< 10 ; i++)
    {
        scanf("%d", &p[i]);
    }
}

void output(int* p)
{
    for(int i = 0; i< 10 ; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}