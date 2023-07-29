#include<stdio.h>

int main()
{
    int num = 0; // 单词个数
    char words[90][90];

    while(scanf("%s", words[num]) != EOF)
    {
        num++;
    }

    for(int i = num-1; i >= 0; i--)
    {
        if(i != 0)
        {
            printf("%s ", words[i]);
        }
        else{
            printf("%s", words[i]);
        }
    }
    printf("\n");
    return 0;
}