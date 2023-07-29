#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
struct student_s{
    char id[10];
    int morality;
    int talent;
    int sum;
    int flag;
}student[100010];

bool cmp(student_s a, student_s b);

int main()
{
    int N, L, H;
    scanf("%d %d %d", &N, &L, &H);
    int m = N;
    for(int i = 0; i < N; i++)
    {
        scanf("%s %d %d", student[i].id, &(student[i].morality), &(student[i].talent));
    }
    for(int i = 0; i < N; i++)
    {
        student[i].sum = student[i].morality + student[i].talent;
        if(student[i].morality < L || student[i].talent < L)
        {
            student[i].flag = 5;
            m--;
        }else if(student[i].morality >= H && student[i].talent >= H) // 德才全备
        {
            student[i].flag = 1;
        }
        else if(student[i].morality >= H && student[i].talent < H) // 第二类
        {
            student[i].flag = 2;
        }
        else if(student[i].morality >= student[i].talent)
        {
            student[i].flag = 3;
        }
        else
        {
            student[i].flag = 4;
        }
    }

    // 开始计划排序

    sort(student, student + N, cmp);
    printf("%d\n", m);
    for(int i = 0; i < m; i++)
    {
        printf("%s %d %d\n", student[i].id, student[i].morality, student[i].talent);
    }
    
    return 0;
}

bool cmp(student_s a, student_s b)
{
    if(a.flag != b.flag)
    {
        return a.flag < b.flag; // 类别小的在前面
    }
    else if(a.sum != b.sum)
    {
        return a.sum > b.sum; // 类别相同时 总分大的在前面
    }
    else if(a.morality != b.morality)
    {
        return a.morality > b.morality;
    }
    else
        return strcmp(a.id, b.id) < 0;
}