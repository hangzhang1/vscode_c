#include<stdio.h>
#include<string.h>
int main()
{
    char name_1[] = "Allen";
    char *name_2 = "Ahn";
    printf("%s\n", name_1);
    printf("%s\n", name_2);
    name_1[1] = 'y';
    printf("%s\n", name_1);
    //name_2[1] = 'y';  // 这是字符串字面量，不能进行修改
    // strcat(name_2, name_1);  // 这种方法也不行 ，不能进行修改
    // printf("%s\n", name_2);
    strcat(name_1, name_2);  // 这种方法可以的 
    printf("%s\n", name_1);
    return 0;
}