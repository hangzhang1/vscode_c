# include<stdio.h>
# include<string.h>

size_t strlen(const char *s);  // 指明在string.h中的strlen函数的原型
//计算字符串的长度，不包括空字符
int strcmp(const char *s1, const char *s2); // 比较两个字符串的大小，相等返回0，s1>s2返回正数，s1<s2返回负数
char *strcpy(char *dest, const char *src); // 把src所指向的字符串复制到dest所指向的空间中，返回dest   dest必须有足够的空间
//后面的参数使用了const，表示这个参数是只读的，不能修改
//不会检查dest是否有足够的空间，如果没有足够的空间，会导致程序崩溃

char *strncpy(char *dest, const char *src, size_t n); // 把src所指向的字符串的前n个字符复制到dest所指向的空间中，返回dest 
int main()
{
    printf("I am a student\n");
    return 0;
}