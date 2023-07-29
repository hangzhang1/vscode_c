#include<stdio.h>
#include<stdlib.h>


// 选择排序
int main()
{

    int array[10] = {3, 7, 5, 9, 11, 13, 8 ,1, 21, 15};
    for(int i = 0 ; i < 10; i++)
    {
        // int temp = array[i];
        int k = i;
        for(int j = i + 1; j < 10; j++)
        {
            if(array[j] < array[k])
            {
                k = j;
            }
        }
        int temp = array[i];
        array[i] = array[k];
        array[k] = temp;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}