#include<stdio.h>
#include<string.h>

#define N 20
int main()
{
    char str_arr[3][N];

    for(int i =0; i < 3; i++)
    {
        //scanf("%s ", &str_arr[i][N]);
        gets(str_arr[i]);
    }

    char *max_str = str_arr[0];
    for(int i =1; i < 3; i++)
    {
        if(strcmp(str_arr[i],max_str) > 0)
        {
            max_str = str_arr[i];
        }
    }
    puts(max_str);
    return 0;
}


