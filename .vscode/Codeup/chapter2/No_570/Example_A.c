//写一个函数将一个字符串按反序存放。
//在主函数中输入一个字符串，通过调用该函数，
//得到该字符串按反序存放后的字符串，并输出。

#include<stdio.h>
#include<string.h>

void antitone_str(char *str, char *str_s, int str_len);
int main()
{
    char str[20] = {'\0'};
    // puts(str);  // 默认不是空串
    gets(str);
    int str_len = strlen(str); // 包括'\0'吗？ 不包括'\0'和换行符
    // printf("%d\n", str_len);

    char str_s[20] = {'\0'};

    antitone_str(str, str_s, str_len);
    puts(str_s);
    return 0;
}

// 反序函数
void antitone_str(char *str, char *str_s, int str_len)
{   
    for(int i = 0; i < str_len; i++)
    {
        str_s[str_len - i - 1] = str[i];
    }
}