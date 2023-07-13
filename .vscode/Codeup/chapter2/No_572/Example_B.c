// 定义一个结构体student，存储学生的学号、名字、性别和年龄，
// 读入每个学生的所有信息，保存在结构体中，并输出。
// 结构体student的定义如下：
// struct student {
//     int num;
//     char name[20];
//     char sex;
//     int age;
// };
// 本题要求使用指向结构体数组的指针进行输入和输出。


#include<stdio.h>

#include<string.h>
struct student
{
    int num;
    char name[20];
    char sex;
    int age;
}students[10], *p;


int main()
{
    int n;
    scanf("%d", &n);
    // getchar(); // 使用了scanf 接着使用gets需要使用getchar() 获取掉\n
    
    p = students;
    for(int i = 0;i < n; i++)
    {
        int num = 0;
        char name[20];
        char sex;
        int age;
        scanf("%d %s %c %d", &num, name, &sex, &age);
        (p+i)->num = num;
        strcpy((p+i)->name,name);
        (p+i)->sex = sex;
        (p+i)->age = age;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d %s %c %d\n", students[i].num,students[i].name, students[i].sex, students[i].age);
    }
    return 0;

}