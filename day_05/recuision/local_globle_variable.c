#include<stdio.h>

void foo();
void bar();
int main()
{
    // printf("n = %d\n", n); // 这是不可以的，因为n是在下面定义的
    foo();
    bar();
    printf("hello world!\n");
    return 0;
}

int n = 10;

void foo()
{   
    printf("n = %d\n", n);
}

void bar()
{
    printf("n = %d\n", n);
}