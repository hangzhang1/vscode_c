#include<stdio.h>
#include<string.h>
#define N 20

int compare(char *s1, char *s2, int len_s1, int len_s2);
int main()
{
    char s1[N];
    char s2[N];
    gets(s1);
    gets(s2);

    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    int distence  = compare(s1, s2, len_s1, len_s2);
    printf("%d\n", distence);
    
    return 0;
}

int compare(char *s1, char *s2, int len_s1, int len_s2)
{   
    for(int i = 0; i < len_s1; i++)
    {
        int temp = (int)s1[i] - (int)s2[i];
        if(temp)
        {
            return temp;
        }
    }
    return 0;
}