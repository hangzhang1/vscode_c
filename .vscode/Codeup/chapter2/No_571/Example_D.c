// 输入3个字符串，按从小到大的顺序输出。要求使用指针的方法进行处理。

#include<stdio.h>
#include<string.h>

void swap(char* p1, char* p2);
int main()
{
    char str_1[20];
    char str_2[20];
    char str_3[20];
    gets(str_1);
    gets(str_2);
    gets(str_3);

    if(strcmp(str_1, str_2) > 0)
    {
        swap(str_1, str_2);
    }
    if(strcmp(str_2, str_3) > 0)
    {
        swap(str_2, str_3);
    }
    if(strcmp(str_1, str_2) > 0)
    {
        swap(str_1, str_2);
    }
    puts(str_1);
    puts(str_2);
    puts(str_3);

    return 0;
}

void swap(char* p1, char* p2)
{
    // char* temp = NULL;
    // temp = p1;
    // p1 = p2;
    // p2 = temp;
    char temp[20];
    strcpy(temp, p1);
    strcpy(p1, p2);
    strcpy(p2, temp);
}