#include<stdio.h>
#include<string.h>

int main()
{
    char str[111];
    scanf("%s", str);
    char num_chinese[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int str_len = strlen(str);
    int sum = 0;
    for(int i =0 ;i < str_len; i++)
    {
        int temp = (int)(str[i] - '0');
        sum += temp;
    }
    //printf("%d", sum);
    int number[10000]= {0};
    int k = 0;
    while(sum)
    {
        number[k++] = sum % 10;
        sum = sum / 10;
    }

    for(int i = k-1; i >= 0; i--)
    {
        int temp = number[i];
        if(i != 0)
        {
            printf("%s ", num_chinese[temp]);
        }
        else
        {
            printf("%s", num_chinese[temp]);
        }
    }
    printf("\n");
    return 0;
}