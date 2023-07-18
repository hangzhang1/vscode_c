#include<stdio.h>
#include<string.h>
typedef struct person_s
{
    char name[6];
    int years;
    int months;
    int days;
}person;
person oldest,youngest;
void init_person();

int main()
{
    init_person();
    int N;
    scanf("%d", &N);
    
    char name[6];
    int years;
    int months;
    int days;
    int count = 0;
    
    for (size_t i = 0; i < N; i++)
    {
        scanf("%s %d/%d/%d", name, &years, &months, &days);
        // 判断是否是不合理的
        if((years < 1814)||(years == 1814&&months<9) ||(years == 1814&&months==9&&days<6))
        {// 这代表是不合理的输入
            continue;
        }
        if(years > 2014||(years == 2014&&months>9)||(years == 2014&&months==9&&days>6))
        {
            continue;
        }
        if(years < oldest.years||(years==oldest.years&&months<oldest.months)||(years==oldest.years&&months==oldest.months&&days<oldest.days))
        {
            oldest.years = years;
            oldest.months = months;
            oldest.days = days;
            strcpy(oldest.name, name);
            
        }
        if(years > youngest.years||(years==youngest.years&&months>youngest.months)||(years==youngest.years&&months==youngest.months&&days>youngest.days))
        {
            youngest.years = years;
            youngest.months = months;
            youngest.days = days;
            strcpy(youngest.name, name);
        }
        count++;
    }

    if(count==0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d %s %s\n", count, oldest.name, youngest.name);
    }
    return 0;
}

void init_person()
{
    oldest.years = 2014;  // 比它小的都比他老
    youngest.years = 1814; // 比它大的都比他年轻
    oldest.months = youngest.months = 9;
    oldest.days = oldest.days = 6;
}