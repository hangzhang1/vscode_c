#include<stdio.h>
#include<string.h>
int hash[6] = {0}; //统计PATest 每个字符的个数
int main()
{
    char s1[10010];
    scanf("%s", s1);
    int len1 = strlen(s1);
    // 统计字符个数
    for(int i = 0; i < len1; i++)
    {
        switch (s1[i])
        {
        case 'P':
            hash[0]++;
            break;
        case 'A':
            hash[1]++;
            break;
        case 'T':
            hash[2]++;
            break;
        case 'e':
            hash[3]++;
            break;
        case 's':
            hash[4]++;
            break;
        case 't':
            hash[5]++;
            break;
        default:
            break;
        }
    }
    // 怎么判断是否全部输出了呢？
    int count = 0;
    for(int i = 0; i < 6; i++)
    {
        count += hash[i];
    }
    while(count)
    {
        // 每一轮输出的字符
        for(int i = 0; i < 6; i++)
        {
            if(hash[i] && i==0){
                printf("%c", 'P');
                hash[i]--;
                count--;
            }
            else if(hash[i] && i==1){
                printf("%c", 'A');
                hash[i]--;
                count--;
            }
            else if(hash[i] && i==2){
                printf("%c", 'T');
                hash[i]--;
                count--;
            }
            else if(hash[i] && i==3){
                printf("%c", 'e');
                hash[i]--;
                count--;
            }
            else if(hash[i] && i==4){
                printf("%c", 's');
                hash[i]--;
                count--;
            }
            else if(hash[i] && i==5){
                printf("%c", 't');
                hash[i]--;
                count--;
            }
        }
    }
    printf("\n");
    return 0;
}