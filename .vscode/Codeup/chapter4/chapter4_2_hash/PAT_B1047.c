#include<stdio.h>
#include<string.h>

int hash[1010] = {0};
int main()
{
    int N;
    scanf("%d", &N);
    // 队员编号根本不重要，重要的只有队伍编号和成绩
    for(int i = 0; i < N; i++)
    {
        int team_number;
        int id;
        int score;
        scanf("%d-%d %d", &team_number, &id, &score);
        hash[team_number] += score; 
    }
    int max_team = 0;
    int max_score = 0;
    for(int i = 1; i < 1010; i++)
    {
        if(hash[i] > max_score)
        {
            max_score = hash[i];
            max_team = i;
        }
    }
    printf("%d %d\n", max_team, max_score);
    return 0;
}