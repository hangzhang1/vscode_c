#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand((unsigned)time(NULL));  // 设置一个随机数
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }
}