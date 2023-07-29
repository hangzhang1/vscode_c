#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    scanf("%s", str);
    int str_len = strlen(str);
    int count[10] = {0};
    for(int i = 0; i < str_len; i++)
    {
        count[str[i] - '0']++; // 累计每个数出现的次数
    }
    for(int i = 0; i < 10; i++)
    {
        if(count[i]!=0)
        {
            printf("%d:%d\n", i, count[i]);
        }
    }
    return 0;
}