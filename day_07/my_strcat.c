#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* my_strcat(char* s1, const char* s2);
int main()
{
    char *s1 = "hello ";
    char *s2 = "world";
    char *s = my_strcat(s1, s2);
    printf("%s\n", s);
    return 0;
}

// char* my_strcat(char* s1, const char* s2)
// {
//     char *p = s1;
//     while(*p)
//     {
//         p++;
//     } // p指向s1结尾的空字符

//     while(*s2!='\0')
//     {
//         *p = *s2;
//         p++;
//         s2++;
//     }
//     *p = '\0';
//     return s1;
// }
char* my_strcat(char* s1, const char* s2)
{
    char* s = (char *)malloc(strlen(s1) + strlen(s2) + 1);
    if(s == NULL){
        printf("malloc failed\n");
        return NULL;
    }
    //拼接两个字符串
    char* p = s;
    while(*s1)
    {
        *p = *s1;
        p++;
        s1++;
    }
    while(*s2)
    {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s;
}
