#include<stdio.h>
#include<string.h>
int main()
{
    char name[10] = "Allen"; // 后面都是空字符  遇到空字符就结束 一共有5个空字符
    // "Allen" 不是字符串字面量，本质上是一个初始化式{'A','l','l','e','n','\0','\0','\0','\0','\0'} 的简化形式
    printf("%s\n", name);
    char *name_1 = "Allen";
    printf("%s\n", name_1);  //这里为什么不用*name_1呢？因为%s要求的是一个地址，而name_1本身就是一个地址，所以不用加*
    int a = 1;
    int *p  = &a;
    printf("%p\n", p); // 地址
    return 0;
}