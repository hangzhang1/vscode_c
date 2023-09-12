#include<stdio.h>
#include<stdlib.h>
#define N 100

int main(int argc, char *argv[])
{
    // cp src dest
    if(argc != 3)
    {
        fprintf(stderr, "Invalid arguments.\n");
        exit(1);
    }

    FILE* src = fopen("in.txt", "r");
    if(src == NULL)
    {
        fprintf(stderr, "Error: open %s failed.\n", argv[1]);
        exit(1);
    }
    
    FILE* dest = fopen(argv[2], "w");
    if(dest == NULL)
    {
        fprintf(stderr, "Error: open %s failed.\n", argv[2]);
        fclose(src);
        exit(1);
    }
    // 读写数据
    // int ch;
    // while((ch = fgetc(src)) != EOF)
    // {
    //     fputc(ch, dest);
    // }

    char buf[N];
    while (fgets(buf, N, src) != NULL)
    {
        fputs(buf, dest);
    }
    
    // 关闭流
    fclose(src);
    fclose(dest);



    return 0;
}