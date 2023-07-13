#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]) // argv是一个指针数组，每一个元素都是一个指针，指向一个字符串
{
    int i;
    printf("argc = %d\n", argc);
    for(i = 0; i < argc; i++)  // argc是参数的个数，argv是参数的数组
    {
        printf("%s\n", argv[i]); // argv[0]是程序的名字
    }
    return 0;
}