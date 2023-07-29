#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    char id[19];

    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int problem_count = 0;
    char checksum[11] = {'1','0','X','9','8','7','6','5','4','3','2'};

    for(int i= 0; i < N; i++ )
    {
        scanf("%s", id);
        int temp= 0;
        // 检测前17位是否全为数字， 第十八位是否准确
        for(int i=0; i < 17; i++)
        {
            if((id[i]-'0')>=0 && ('9' - id[i])>=0)
            { // 某一位是否为数字
                continue;
            }
            else
            {
                printf("%s\n", id);
                problem_count++;
                temp++;
                break;
            }
        }
        if(temp ==0)
        {
            int count=0;
            for(int i =0; i < 17; i++)
            {
                count = count + ((int)(id[i]-'0')) * weight[i];
            }
            int z = count % 11;
            char m = checksum[z];  // m是校验码
            if((m - id[17]) != 0)
            {// 校验码不准确
                problem_count++;
                printf("%s\n", id);
            }
        }

    }

    if(problem_count == 0)
    {
        printf("All passed\n");
    }
        // 接下来检测第18位是否第十八位是否准确

    return 0;
}