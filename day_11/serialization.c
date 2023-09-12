#include<stdio.h>
#include<stdlib.h>
typedef struct student_s{
    int number;
    char name[25];
    int chinese;
    int math;
    int english;
}Student;

int main()
{
    // 序列化：把内存中的对象持久化(格式：文本格式)xml json
    // Student s = {1, "xixi", 100, 100, 100};
    // FILE* fp = fopen("students.dat", "w");
    // if(fp == NULL)
    // {
    //     fprintf(stderr, "Error: open student.dat failed.\n");
    //     exit(1);
    // }
    // fprintf(fp, "%d %s %d %d %d\n", s.number, s.name, s.chinese, s.math, s.english);
    // fclose(fp);


    // 反序列化：把持久化的数据加载到内存中，并生成对应的对象
    
    // FILE* fp = fopen("students.dat", "r");
    // if(fp == NULL)
    // {
    //     fprintf(stderr, "Error: open student.dat failed.\n");
    //     exit(1);
    // }
    // Student s;
    // fscanf(fp, "%d%s%d%d%d", &s.number, s.name, &s.chinese, &s.math, &s.english);
    // fclose(fp);


    // 二进制形式进行序列化：把内存中的对象持久化(格式：文本格式)xml json
    // Student s = {1, "xixi", 100, 100, 100};
    // FILE* fp = fopen("students.dat", "wb+");
    // if(fp == NULL)
    // {
    //     fprintf(stderr, "Error: open student.dat failed.\n");
    //     exit(1);
    // }
    // fwrite(&s, sizeof(s), 1, fp);
    // fclose(fp);
    // return 0;

    // 二进制形式进行反序列化：把持久化的数据加载到内存中，并生成对应的对象
    
    FILE* fp = fopen("students.dat", "rb");
    if(fp == NULL)
    {
        fprintf(stderr, "Error: open student.dat failed.\n");
        exit(1);
    }
    Student s;
    fread(&s, sizeof(s), 1, fp);
    
    fclose(fp);
}