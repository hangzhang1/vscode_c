// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     char a[111];  // 加密用正整数
//     char b[111];  // 正整数
//     scanf("%s %s", &a, &b);
//     int len_a = strlen(a);
//     int len_b = strlen(b);
//     int len = len_a > len_b ? len_a : len_b;
//     // 先进行字符串的反转
//     for(int i = 0; i < len_a/2; i++)
//     {
//         int temp = a[i];
//         a[i] = a[len_a-i -1];
//         a[len_a-i -1] = temp;
//     }
//     for(int i = 0; i < len_b/2; i++)
//     {
//         int temp = b[i];
//         b[i] = b[len_b-i -1] ;
//         b[len_b-i -1] = temp;
//     }

//     // 对数字b用a进行加密
//     for(int i = 0; i < len; i++)
//     {
//         // a[i] = i < len_a?a[i]-'0':0;
//         // b[i] = i < len_b?a[i]-'0':0;
//         int num_a = i < len_a?a[i]-'0':0;
//         int num_b = i < len_b?b[i]-'0':0;
//         if((i+1) % 2 == 0)
//         {
//             int temp = (int)(num_b - num_a);
//             if(temp < 0)
//             {
//                 temp += 10;
//             }
//             b[i] = temp + '0';
//         }
//         else
//         {
//             int num = (num_a + num_b) % 13;
//             if(num>=0 && num < 10)
//             {
//                 char c = num + '0'; // 这里将int 转变为 char
//                 b[i] = c;
//             }
//             else
//             {
//                 if(num == 10){
//                     b[i] = 'J';
//                 }
//                 else if(num == 11){
//                     b[i] = 'Q';
//                 }
//                 else if(num == 12){
//                     b[i] == 'K';
//                 }
//             }
//         }
//     }

//     // 先对b进行字符串反转
//     for(int i = 0; i < len_b/2; i++)
//     {

//         int temp = b[i];
//         b[i] = b[len_b-i -1] ;
//         b[len_b-i -1] = temp;
//     }

//     // 输出
//     for(int i = 0; i < len_b; i++)
//     {
//         printf("%c", b[i]);
//     }
//     printf("\n");
//     return 0;

// }

#include<stdio.h>
#include<string.h>


int main()
{
    char a[111];  // 加密用正整数
    char b[111];  // 正整数
    char result[111];
    scanf("%s %s", &a, &b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len = len_a > len_b ? len_a : len_b;
    // 先进行字符串的反转
    for(int i = 0; i < len_a/2; i++)
    {
        int temp = a[i];
        a[i] = a[len_a-i -1];
        a[len_a-i -1] = temp;
    }
    for(int i = 0; i < len_b/2; i++)
    {
        int temp = b[i];
        b[i] = b[len_b-i -1] ;
        b[len_b-i -1] = temp;
    }

    // 对数字b用a进行加密
    for(int i = 0; i < len; i++)
    {
        // a[i] = i < len_a?a[i]-'0':0;
        // b[i] = i < len_b?a[i]-'0':0;
        int num_a = i < len_a?a[i]-'0':0;
        int num_b = i < len_b?b[i]-'0':0;
        if((i+1) % 2 == 0)
        {
            int temp = (num_b - num_a);
            if(temp < 0)
            {
                temp += 10;
            }
            result[i] = temp + '0';
        }
        else
        {
            int num = (num_a + num_b) % 13;
            if(num < 10)
            {
                result[i] = num + '0'; // 这里将int 转变为 char
            }
            else
            {
                if(num == 10){
                    result[i] = 'J';
                }
                else if(num == 11){
                    result[i] = 'Q';
                }
                else if(num == 12){
                    result[i] == 'K';
                }
            }
        }
    }

    // 先对b进行字符串反转
    for(int i = 0; i < len_b/2; i++)
    {

        int temp = result[i];
        result[i] = result[len_b-i -1] ;
        result[len_b-i -1] = temp;
    }

    // 输出
    for(int i = 0; i < len_b; i++)
    {
        printf("%c", result[i]);
    }
    printf("\n");
    return 0;
}