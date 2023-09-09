#include<stdio.h>
#include<stdbool.h>


// 给定一个整数数组，里面的数都是成对的，只有一个例外，找出那个数
int findsingleNumber(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int singleNumber = findsingleNumber(arr, 9);

    return 0;
}

// 判断一个数是不是奇数
bool is_odd(int n)
{
    return n & 0x1;  // 和1按位与
}

// 判断一个数是不是2的幂
bool isPowerOf2(unsigned int n)
{
    unsigned int i = 1;
    while(i < n)
    {
        i <<= 1; // 向左移1位，相当于乘以2 
    } // 当跳出循环时, i >= n
    return i == n; // 如果等于n的时候代表n是2的幂
}

bool isPowerof2_2(unsigned int n)
{
    return (n & (n-1)) == 0;  // &的优先级低于判等运算符
}

// 给定一个不为0的整数，找出值为1且权重最低的位
bool demo(unsigned int n)
{
    return (n & -n); 
}


// 给定一个整数数组，里面的数都是成对的，只有一个例外，找出那个数
int findsingleNumber(int arr[], int n)
{
    int sigleNumber = 0;
    for(int i=0; i < n; i++)
    {
        sigleNumber ^= arr[i];  // 异或运算符
    }
    return sigleNumber;
}
