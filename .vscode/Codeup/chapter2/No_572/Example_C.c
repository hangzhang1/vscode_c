#include<stdio.h>


struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class1;
        char position[10];
    }category;  //共用体，只能存储其中一种数据类型
}person[10];
int main()
{

    int n;
    scanf("%d", &n);

    for(int i = 0;i < n; i++)
    {
        // int num = 0;
        // char name[10];
        // char sex;
        // char job;
        scanf("%d %s %c %c", &(person[i].num), person[i].name, &(person[i].sex), &(person[i].job));
        if(person[i].job=='s')
        {
            // getchar();
            scanf("%d", &(person[i].category.class1));
        }
        if(person[i].job=='t')
        {
            // getchar();
            scanf("%s", person[i].category.position);
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d %s %c %c ", person[i].num,person[i].name, person[i].sex, person[i].job);
        if(person[i].job=='s')
        {
            // getchar();
            printf("%d\n", person[i].category.class1);
        }
        if(person[i].job=='t')
        {
            // getchar();
            printf("%s\n", person[i].category.position);
        }
    }
    return 0;
}