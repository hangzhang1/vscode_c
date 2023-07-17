#include<stdio.h>


int main()
{
    int C1, C2;
    scanf("%d %d", &C1, &C2);
    int dis = C2 - C1;
    int CLK_TCK_1 = 100;
    int seconds;
    if((C2 - C1) % CLK_TCK_1 >= 50)
    {
        seconds = (C2 - C1) / CLK_TCK_1  + 1;
    }
    else
    {
        seconds = (C2 - C1) / CLK_TCK_1;
    }
    int hours = seconds/3600;
    seconds = seconds - 3600 * hours;
    int minutes = seconds/60;
    seconds = seconds - 60 * minutes;
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
