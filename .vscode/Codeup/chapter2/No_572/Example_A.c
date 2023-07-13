// 完成一个对候选人得票的统计程序。假设有3个候选人，
//名字分别为Li，Zhang和Fun。使用结构体存储每一个候选人的名字和得票数。
//记录每一张选票的得票人名，输出每个候选人最终的得票数。
//结构体可以定义成如下的格式：
// struct person {
//     char name[20];
//     int count;
// }leader[3] = {“Li”, 0, “Zhang”, 0, “Fun”, 0};


#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int count;
   
}leader[3] = {"Li", 0 , "Zhang", 0, "Fun", 0};


int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // 使用了scanf 接着使用gets需要使用getchar() 获取掉\n
    
    for(int i = 0;i < n; i++)
    {
        char choice_name[20];
        gets(choice_name);

        if(strcmp(choice_name, "Li")==0)
        {
            leader[0].count++;
        }
        else if (strcmp(choice_name, "Zhang")==0)
        {
            leader[1].count++;
        }
        else
        {
            leader[2].count++;
        }  
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%s:%d\n", leader[i].name,leader[i].count);
    }
    return 0;
    
}