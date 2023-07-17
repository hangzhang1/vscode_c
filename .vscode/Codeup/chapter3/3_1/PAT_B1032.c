#include<stdio.h>

#define maxn 100010

int main()
{
    int n;
    scanf("%d", &n);
    int school[maxn] = {0}; //记录每个学校的总分

    int school_id, score;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &school_id, &score);
        school[school_id] += score;  
    }

    int max = -1;
    int index = 1;
    for(int i = 1; i < n; i++)
    {
        if(school[i]>max)
        {
            max = school[i];
            index = i;
        }
    }
    printf("%d %d\n", index, max);
    return 0;
}