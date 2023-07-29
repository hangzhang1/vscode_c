#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool hashTable[256]; // 散列数组，用以记录键盘上的字符是否完好
const int maxn = 100010;

// char str[maxn]; // c语言里面不能这样用 c++里面才可以
char str[100010];

int main()
{
    memset(hashTable, true, sizeof(hashTable)); // 初始值为true表示所有键都是好的
    gets(str);  // 读入所有失效的键
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a'; //如果是大写字母，则化成小写字母
        }
        hashTable[str[i]] = false; //设置键str[i] 失效
    }
    gets(str); // 读入欲输入的字符串
    len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            int low = str[i] - 'A' + 'a'; //如果是大写字母，则化成小写字母
            if(hashTable[low] == true && hashTable['+'] == true)
            {
                printf("%c", str[i]); // 只有小写字母的键位与上档键均完好，才能进行输出
            }
        }
        else if(hashTable[str[i]] == true)
        {
            printf("%c", str[i]);  // 对于其他字符，只要键位完好，即输出
        }
    }

    printf("\n");
    return 0;
}