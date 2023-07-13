#include<stdio.h>
#include<string.h>
int main()
{
    
    return 0;
}

char* my_strcat(char* s1, const char* s2)
{
    char *p = s1;
    while(*p)
    {
        p++;
    } // p指向s1结尾的空字符

    while(*s2!='\0')
    {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}