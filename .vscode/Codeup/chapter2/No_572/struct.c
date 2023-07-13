#include<stdio.h>



struct studentInfo
{
    int id;
    char gender;
    char name[10];

    // studentInfo::studentInfo(){}  C语言里面是没有结构体构造函数的 初始化直接赋值就好了
   
}Alice, *p;


int main()
{
    struct studentInfo Sam = {11, 'M',"Sam"};
    printf("%d\n", Sam.id);
    printf("Hello world!");

    return 0;
}