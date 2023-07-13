#include<stdio.h>
#include<stdlib.h>

void foo();
int main()
{
    
    foo();
    printf("exit from main!\n");
    return 0;
}

void foo()
{
    printf("exit from foo!\n");
    //exit(0);
    exit(EXIT_SUCCESS);
}