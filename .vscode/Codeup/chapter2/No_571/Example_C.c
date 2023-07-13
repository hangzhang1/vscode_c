// 给定字符串定义char *a = “I love China!”，读入整数n，
// 输出在进行了a = a + n这个赋值操作以后字符指针a对应的字符串。
#include<stdio.h>
#include<string.h>

int main()
{
    char *a = "I love China!";
    int n;
    scanf("%d", &n);
    char *p = a + n;
    printf("%s\n", p);
    return 0;
}