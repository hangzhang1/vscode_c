#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define N 5
int main()
{
    char s1[100];
    char s2[100];
    bool hashTable[128] = {false}; // hashTable数组用来标记字符是否已输出
    //scanf("%s %s", s1, s2);
    gets(s1);
    gets(s2);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i = 0; i < len1; i++)
    {
        int j;
        char c1, c2;
        for(j = 0; j < len2; j++)
        {
            c1 = s1[i]; 
            c2 = s2[j];
            if(c1 >= 'a' && c1 <= 'z')
                c1 = c1 - 32;
            if(c2 >= 'a' && c2 <= 'z')
                c2 = c2 - 32;
            // c1 和 c2 都是大写字母了
            if(c1 == c2)
                break;
        }
        if(j == len2 && hashTable[c1] == false)
        {
            printf("%c", c1); //在第二个字符串中没有出现c1，且c1未被输出过
            hashTable[c1] = true;
        }
    }
    return 0;
}