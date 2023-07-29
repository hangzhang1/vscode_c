#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
typedef struct student_s
{
    int id;
    char name[20];
    int chinese;
    int math;
    int english;
    struct student_s *next;
    /* data */
}Student;


int compare(const void* p1, const void* p2);

int main()
{
    Student students[5]= {
        {1, "zhangsan", 90, 80, 70, NULL},
        {2, "lisi", 80, 70, 60, NULL},
        {3, "wangwu", 70, 60, 50, NULL},
        {4, "zhaoliu", 60, 50, 40, NULL},
        {5, "qianqi", 50, 40, 30, NULL}
    };
    qsort(students, 5, sizeof(Student), compare);//qsort默认是升序排列
    for(int i = 0; i < 5; i++)
    {
        printf("id = %d, name = %s, chinese = %d, math = %d, english = %d\n", students[i].id, students[i].name, students[i].chinese, students[i].math, students[i].english);
    }
    return 0;
}

// 比较规则：总分高的排在前面，总分相同的按照语文成绩排，语文成绩相同的按照数学成绩排，
// 数学成绩相同的按照英语成绩排，英语成绩相同的按照学号排，学号相同的按照姓名排
// 总分 = 语文成绩 + 数学成绩 + 英语成绩
// 请编写一个程序，对这5个学生按照上述规则进行排序，然后输出排序后的结果
int compare(const void* p1, const void* p2)
{
    Student* s1 = (Student*)p1;
    Student* s2 = (Student*)p2;
    int total1 = s1->chinese + s1->math + s1->english;
    int total2 = s2->chinese + s2->math + s2->english;
    if(total1 != total2)
    {
        //为什么不是total1 - total2呢？因为qsort是升序排列，所以如果total1 > total2，那么total1 - total2 > 0，那么s1就会排在s2前面
        return total2 - total1;// 降序
    }
    else if(s1->chinese != s2->chinese)
    {
        return s2->chinese - s1->chinese;
    }
    else if(s1->math != s2->math)
    {
        return s2->math - s1->math;
    }
    else if(s1->english != s2->english)
    {
        return s2->english - s1->english;
    }
    else if(s1->id != s2->id)
    {
        return s1->id - s2->id; // 升序
    }
    else
    {
        return strcmp(s1->name, s2->name); // 升序
    } 
}