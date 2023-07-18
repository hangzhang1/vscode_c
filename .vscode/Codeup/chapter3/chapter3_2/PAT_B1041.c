#include<stdio.h>
#define max_size 1010

typedef struct student_s{
    long long numbers; // 准考证号
    int exam_id;       // 试机座位号
    int true_id;       // 考试座位号
}student;

int main()
{
    int N;
    scanf("%d", &N);
    student studentArray[max_size];
    
    for(int i = 1; i <= N; i++)
    {
        long long numbers_2; 
        int exam_id_2, true_id_2;
        scanf("%lld %d %d", &numbers_2, &exam_id_2, &true_id_2);
        studentArray[exam_id_2].exam_id = exam_id_2;
        studentArray[exam_id_2].numbers = numbers_2;
        studentArray[exam_id_2].true_id = true_id_2;
    }
    int M;
    scanf("%d", &M);
    for(int i = 0; i < M; i++)
    {
        int index;
        scanf("%d", &index);
        printf("%lld %d\n", studentArray[index].numbers, studentArray[index].true_id);
    }
    
    return 0;
}