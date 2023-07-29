#include<stdio.h>
#include<string.h>

int main()
{
    char str[256];
    scanf("%s", str);
    int str_len = strlen(str);
    if(str_len % 2 == 1)  // 奇数个字符
    {
        int k = str_len / 2;// k是单独那个字母的索引
        for(int i = 0; i < k; i++)
        {
            if(str[i] != str[str_len-1-i])
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        return 0;
    }
    else // 偶数个字符
    {
        int k = str_len / 2;// k最后那一对后一个字符的索引
        for(int i = 0; i < k; i++)
        {
            if(str[i] != str[str_len-1-i])
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        return 0;
    }
    
}