#include<stdio.h>

int main()
{
    return 0;
}

// 自己编写strlen函数
size_t my_strlen(const char* s)
{
    size_t n;
    for(n = 0; *s != '\0'; s++){
        n++;
    }
    return n;
}

size_t my_strlen(const char* s)
{
    size_t n = 0;
    while(*s++)
    {
        n++;
    }
    return n;
}

size_t my_strlen(const char* s)
{
    char *p = s;
    while(*p)
    {
        p++;
    }
    return p-s;
}

// 搜索字符串末尾

void func(const char* s)
{
    while(*s)
    {
        s++;
    }// s指向了空字符
    while(*s++)
    {
        ;
    }// 指向了空字符后面的字符
}

char* my_strcat(char*s1, const char* s2)
{
    char* p = s1;
    while(*p)
    {
        p++;
    } // p指向s1结尾的空字符
    while(*s2 != '\0'){
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}

// 复制字符串，包括空字符
char* my_strcat(char* s1, const char* s2)
{
    char *p = s1;
    while(*p)
    {
        p++;
    } // p指向s1结尾的空字符
    while(*p++ == *s2++)   // ++ 优先级高于*
    {
        ;
    }
    return s1;
}