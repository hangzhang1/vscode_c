#include<stdio.h>
#include<stdlib.h>


// 插入排序
int main()
{

    int array[10] = {3, 7, 5, 9, 11, 13, 8 ,1, 21, 15};
    for(int i = 1 ; i < 10; i++)
    {
        for(int j = i; j > 0; j--)
        {
            
            if(array[j] >= array[j-1])
                break;
            else if(array[j] < array[j-1])
            {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}