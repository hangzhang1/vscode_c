#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    char *ptr1 = (char*)malloc(N * sizeof(char) + 1);
    char *ptr2 = (char*)malloc(N * sizeof(char) + 1);
    for(int i = 0;i < N;i++)
    {
        ptr1[i] = getchar();
        getchar();
        ptr2[i] = getchar();
        getchar();
        //scanf("%c %c", &ptr1[i], &ptr2[i]);
    }
    int count_win = 0, count_lose = 0, Draw = 0;
    int a[3] = {0}; // 三个元素分别代表 C  J  B
    int b[3] = {0}; // 三个元素分别代表 C  J  B
    for(int i = 0;i < N;i++)
    {
        if(ptr1[i]=='C'&&ptr2[i]=='J' ||ptr1[i]=='J'&&ptr2[i]=='B' ||ptr1[i]=='B'&&ptr2[i]=='C')
        {
            count_win++;
            switch(ptr1[i])
            {
                case 'C':
                    a[0]++;
                    break;
                case 'J':
                    a[1]++;
                    break;
                case 'B':
                    a[2]++;
                    break;
            }
        }
        else if(ptr1[i]=='C'&&ptr2[i]=='C' ||ptr1[i]=='J'&&ptr2[i]=='J' ||ptr1[i]=='B'&&ptr2[i]=='B')
        {
            Draw++;
        }
        else
        {
            count_lose++;
            switch(ptr2[i])
            {
                case 'C':
                    b[0]++;
                    break;
                case 'J':
                    b[1]++;
                    break;
                case 'B':
                    b[2]++;
                    break;
            }
        }
    }

    int a_index = 0, b_index = 0;
    int a_max = 0, b_max = 0;
    for(int i = 0;i < 3;i++)
    {    
        if(a[i] > a_max)
        {
            a_max = a[i];
            a_index = i;
        }
        else if(a[i] == a_max)
        {
            if( i== 1)
            {
                a_index = 0;
            }
            else if(i == 2)
            {
                a_index = 2;
            }
        }
    }

    for(int i = 0;i < 3;i++)
    {    
        if(b[i] > b_max)
        {
            b_max = b[i];
            b_index = i;
        }
        else if(b[i] == b_max)
        {
            if( i== 1)
            {
                b_index = 0;
            }
            else if(i == 2)
            {
                b_index = 2;
            }
        }
    }

    printf("%d %d %d\n", count_win, Draw, count_lose);
    printf("%d %d %d\n", count_lose, Draw, count_win);
    switch(a_index)
    {
        case 0:
            printf("%c ", 'C');
            break;
        case 1:
            printf("%c ", 'J');
            break;
        case 2:
            printf("%c ", 'B');
            break;
    }
    switch(b_index)
    {
        case 0:
            printf("%c\n", 'C');
            break;
        case 1:
            printf("%c\n", 'J');
            break;
        case 2:
            printf("%c\n", 'B');
            break;
    }
    return 0;
}