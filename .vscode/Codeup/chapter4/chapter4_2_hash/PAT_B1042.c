#include<stdio.h>
#include<string.h>


int hash[30] = {0};

int main()
{
    char s1[1010];
    //scanf("%s", s1);
    gets(s1);
    int len1 = strlen(s1);
    // 不区分大小写，那需要把读入的字符由大写转变为小写  c - 'A' + 'a'
    for(int i = 0; i < len1; i++)
    {
        char c1 = s1[i]; // 得到一个字符
        if(c1 >= 'A' && c1 <= 'Z')
        {
            c1 = c1 - 'A' + 'a'; // 将大写字符转变为小写
            int k = (int)(c1 - 'a');
            hash[k]++;
        }
        else if(c1 >= 'a' && c1 <= 'z')
        {
            int k = (int)(c1 - 'a');
            hash[k]++;
        }
        else{
            continue;
        }
    }
    // 统计好字符后，进行输出
    int max = hash[0];
    char max_c = 'a';
    for(int i = 1; i < 30; i++)
    {
        if(hash[i] > max)
        {
            max = hash[i];
            max_c = (char)('a' + i);
        }
        else if(hash[i] == max)
        {
            continue; // 因为是输出字母序列最小的那个
        }
        else{
            continue; // 小就不交换了
        }
    }
    printf("%c %d\n", max_c, max);
    
    return 0;
}