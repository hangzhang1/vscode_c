#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h> 
int hash_s1[125]={0};
int hash_s2[125]={0};
int main()
{
    char s1[1010];
    char s2[1010];
    scanf("%s", s1);
    scanf("%s", s2);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i = 0; i < len1; i++)
    {// 统计字符串中每个字符的个数
        char c1 = s1[i];
        int k = (int)c1;
        hash_s1[k]++;
    }

    for(int i = 0; i < len2; i++)
    {// 统计字符串中每个字符的个数
        char c2 = s2[i];
        int k = (int)c2;
        hash_s2[k]++;
    }
    // 得到两个有字符个数的hash表
    bool flag = true;
    int false_count = 0;
    int true_count = 0;
    for(int i = 0; i < 125; i++)
    {
        
        if(hash_s2[i] > hash_s1[i])
        { // 需要的比给的多
            flag = false; // 说明店家给的不够
            false_count = false_count + (hash_s2[i] - hash_s1[i]);
        }
        else
        {
            true_count = true_count + (hash_s1[i] - hash_s2[i]);
        }
    }
    if(flag == true)
    {
        printf("Yes %d\n", true_count);
    }
    else
    {
        printf("No %d\n", false_count);
    }
    return 0;
}