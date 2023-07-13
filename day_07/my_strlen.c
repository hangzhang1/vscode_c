#include<stdio.h>

int main()
{
     
    return 0;
}

// size_t my_strlen(const char* s)
// {
//     size_t n;
//     for(n = 0; *s != '\0'; s++)
//     {
//         n++;
//     }
//     return n;
// }

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
    char* p = s;

    while(*p)
    {
        p++;
    }

    return p-s;
}