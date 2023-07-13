#include <stdio.h>

// struct student_s
// {
//     int id;
//     char name[20];
//     char gender;
//     int age;
//     int chinese;
//     int math;
//     int english;
// };  // 这里的分号不能少 定义了一个结构体类型


typedef struct student_s
{
    int id;
    char name[20];
    char gender;
    int age;
    int chinese;
    int math;
    int english;
}Student;  //为结构体类型取了一个别名，Student是别名，struct student_s是类型

int main()
{
    // struct student_s stu1 = {1001, "张三", 'M', 18, 90, 80, 70};  //struct student_s是类型，stu1是变量 
    // struct student_s stu2 = {1001};

    Student stu1 = {1001, "张三", 'M', 18, 90, 80, 70};  //struct student_s是类型，stu1是变量
    Student stu2 = {1001};
    return 0;
}