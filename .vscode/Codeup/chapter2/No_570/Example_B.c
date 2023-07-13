// 写一个函数，将一个字符串中的元音字母复制到另一个字符串中。  a e i o u
// 在主函数中输入一个字符串，通过调用该函数，
// 得到一个有该字符串中的元音字母组成的一个字符串，并输出。

#include<stdio.h>
#include<string.h>

void function(char *str, char *out_str, int n);
int main()
{

    char str[20] = {'\0'};
    char out_str[20] = {'\0'};
    gets(str);
    int n = strlen(str);
    function(str, out_str, n);
    printf("%s\n", out_str);

    return 0;
}

void function(char *str, char *out_str, int n)
{   
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        switch (str[i])
        {
        case 'a':
            out_str[k] = str[i];
            k++;
            break;
        case 'e':
            out_str[k] = str[i];
            k++;
            break;
        case 'i':
            out_str[k] = str[i];
            k++;
            break;
        case '0':
            out_str[k] = str[i];
            k++;
            break;
        case 'u':
            out_str[k] = str[i];
            k++;
            break;
        default:
            break;
        }
    }
}