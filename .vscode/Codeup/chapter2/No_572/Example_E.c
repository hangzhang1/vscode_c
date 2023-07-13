#include<stdio.h>

struct effort
{
    int class_1;
    int class_2;
    int class_3;
};


struct {
    int num;
    char name[19];
    struct effort threeClass;
}person[10];
int main()
{

    for(int i = 0;i < 10; i++)
    {
        scanf("%d %s %d %d %d", &(person[i].num), person[i].name, &(person[i].threeClass.class_1), &(person[i].threeClass.class_2), &(person[i].threeClass.class_3));
    }

    int sum1 = 0, sum2 = 0, sum3=0;
    for(int i = 0; i < 10; i++)
    {
        sum1 +=  person[i].threeClass.class_1;
        sum2 +=  person[i].threeClass.class_2;
        sum3 +=  person[i].threeClass.class_3;
    }
    printf("%.2f %.2f %.2f\n", (double)sum1/10, (double)sum2/10, (double)sum3/10);

    double mean_score[10]= {0};
    int index = 0;
    double max = 0;
    for(int i = 0; i < 10; i++)
    {
        
        int temp = person[i].threeClass.class_1 + person[i].threeClass.class_2 + person[i].threeClass.class_3;
        mean_score[i] = (double)temp / 3;
        if(mean_score[i] > max)
        {
            index = i;
            max = mean_score[i];
        }
    }
    printf("%d %s %d %d %d", person[index].num, person[index].name, person[index].threeClass.class_1, person[index].threeClass.class_2, person[index].threeClass.class_3);

    return 0;
}