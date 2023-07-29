#include<stdio.h>
#include<string.h>
int main()
{
    char str[4][65];
    char weeks[7][5] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    for(int i = 0; i < 4;i++)
    {
        scanf("%s", str[i]);
    }
    int len1 = strlen(str[0]);
    int len2 = strlen(str[1]);
    int len3 = strlen(str[2]);
    int len4 = strlen(str[3]);
    int i;
    for(i = 0; i < len1 && i < len2; i++)
    {
        if(str[0][i] == str[1][i] && str[0][i] >= 'A' && str[0][i] <= 'G')
        {
            printf("%s ", weeks[str[0][i]-'A']);// 输出是星期几
            break;
        }
    }
    // 在上面的基础上，往后寻找相同位置的0~9 或A~N的字符
    for(i++; i < len1 && i < len2; i++)
    {
        if(str[0][i] == str[1][i])
        {
            if(str[0][i]>='0' && str[1][i] <='9')
            {
                printf("%02d:", str[0][i]-'0');// 输出0~9
                break;
            }
            else if(str[0][i] >= 'A' && str[0][i] <= 'N')
            {
                printf("%02d:", str[0][i]-'A' + 10) ;// 输出10 ~ 23
                break;
            }
        }
    }

    // 寻找str3 和 str4中第一对相同位置的A-Z 或a~z 的英文字母
    for(i = 0; i < len3 && i< len4; i++)
    {
        if(str[2][i] == str[3][i])
        {
            if((str[2][i] >= 'A' && str[2][i] <= 'Z') || (str[3][i] >= 'a' && str[3][i] <= 'z'))
            {
                printf("%02d", i); // 输出当前位置
                    break;
            }
        }
    }

    return 0;
}