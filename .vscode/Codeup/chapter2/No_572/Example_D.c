#include<stdio.h>

struct effort
{
    int class_1;
    int class_2;
    int class_3;
};


struct {
    int num;
    char name[10];
    struct effort threeClass;
}person[5];
int main()
{

    for(int i = 0;i < 5; i++)
    {
        scanf("%d %s %d %d %d", &(person[i].num), person[i].name, &(person[i].threeClass.class_1), &(person[i].threeClass.class_2), &(person[i].threeClass.class_3));
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d %s %d %d %d\n", person[i].num, person[i].name, person[i].threeClass.class_1, person[i].threeClass.class_2, person[i].threeClass.class_3);

    }
    return 0;
}