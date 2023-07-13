#include<stdio.h>

int main()
{
    int arr[4][5]={1,2,3,4,5,2,4,6,8,10,3,6,9,12,15,4,8,12,16,20};
    for(int i =0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");

    }

    return 0;
}