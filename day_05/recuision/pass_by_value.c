#include<stdio.h>

# define SIZE(a) (sizeof(a)/sizeof(a[0]))
void swap(int a, int b);
int sum_array(int array[], int n);
int sum_array2(int array[][4], int n);
int main()
{
    // int a = 3, b= 4;
    // printf("a = %d, b = %d\n", a, b);
    // swap(a, b);
    // printf("a = %d, b = %d\n", a, b);
    // 定义一个1到10的数组
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = sum_array(array, SIZE(array));
    printf("sum = %d\n", sum);
    // 定义一个三行四列的二维数组
    int array2[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    sum = sum_array2(array2, 3);
    printf("sum = %d\n", sum);
    return 0;
}

void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

int sum_array(int array[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

int sum_array2(int array[][4], int n) // 二维数组传参 传递的是地址 列数必须指定
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sum += array[i][j];
        }
    }
    
    return sum;
}


