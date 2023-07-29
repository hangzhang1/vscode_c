#include<stdio.h>
#include<stdlib.h>


int main()
{

    int array[10] = {3, 7, 5, 9, 11, 13, 8 ,1, 21, 15};
    for(int i = 0 ; i < 10; i++)
    {
        for(int j = 0; j < 9 - i; j++)
        {
            int temp = 0;
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}