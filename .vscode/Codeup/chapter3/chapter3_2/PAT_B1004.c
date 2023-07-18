#include<stdio.h>
#include<string.h>
#define max_size 10000
typedef struct student_s{
    char name[11];
    char id[11];
    int score;
}student;
int main()
{
    int n;
    scanf("%d", &n);
    student arr[2];
    
    char temp_name[11];
    char temp_id[11];
    int temp_score;
    int max_score = 0;
    int min_score = 100;
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %d\n", temp_name, temp_id, &temp_score);
        if(temp_score > max_score)
        {
            max_score = temp_score;
            strcpy(arr[0].name, temp_name);
            strcpy(arr[0].id, temp_id);
            arr[0].score = temp_score;
        }
        if(temp_score < min_score)
        {
            min_score = temp_score;
            strcpy(arr[1].name, temp_name);
            strcpy(arr[1].id, temp_id);
            arr[1].score = temp_score;
        }
    }
    printf("%s %s\n", arr[0].name, arr[0].id);
    printf("%s %s\n", arr[1].name, arr[1].id);

    return 0;
}