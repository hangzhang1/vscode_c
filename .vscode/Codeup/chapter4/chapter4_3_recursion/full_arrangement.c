#include<stdio.h>
#include<stdbool.h>
#define N 11

// p 为当前排列，hashTable记录整数x是否已经在P中
int n, P[N], hashTable[N] = {false};

void generateP(int index);
int main()
{
    n = 3; // 欲输出1-3的全排列
    generateP(1); //从P[1] 开始填
    return 0;
}

// 当前处理排列的第index号位
void generateP(int index)
{
    if(index == n + 1) // 递归边界，已经处理完排列的1~n号位
    {
        for(int i = 1; i <= n; i++)
        {
            printf("%d", P[i]); // 输出当前排列
        }
        printf("\n");
        return;
    }
    for(int x = 1; x <= n; x++) //枚举1~n，试图将x填入P[index]
    {
        if (hashTable[x] == false)  //如果x不在P[0] ~ P[index-1] 中
        {
            P[index] = x; // 令P的第index位为x，即把x加入当前排列
            hashTable[x] = true;  //记 x 已在P中
            generateP(index + 1); // 处理排列的第index+1 位
            hashTable[x] = false; //已处理完P[index]为x的子问题，还原状态
        }
        
    }
}