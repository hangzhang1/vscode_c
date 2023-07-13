#include<stdio.h>
#include<string.h>

#define N 100
void decode(char *p, int n);
int main()
{
    char str[N] ={'\0'};
    //scanf("%s", str);
    gets(str);
    int n = strlen(str);
    decode(str, n);
    printf("%s\n", str);

    return 0;
}

void decode(char *p, int n)
{   
    // for(int i =0; i< n; i++)
    // {
    //     //判断其中的字符是不是字母
    //     if(p[i]>=65 && p[i] <= 90) // 大写字母
    //     {
    //         p[i] = p[i] + 32;
    //     }
    //     else if(p[i]>=97 && p[i] <= 122) //小写字母
    //     {
    //         p[i] = p[i] - 32;
    //     }
    // }

    // 题目不是大写变小写 小写变大写
    for(int i =0; i< n; i++)
    {
        //判断其中的字符是不是字母
        if(p[i]>=65 && p[i] <= 90) // 大写字母  /  小写字母
        {
            p[i] = 90 - p[i] + 65;
        }
        else if(p[i]>=97 && p[i] <= 122)
        {
            p[i] = 122 - p[i] + 97;
        }
    }
}