#include<stdio.h>

int main()
{
    int P_Gallon, P_Sickle, P_Knut; //应付
    int A_Gallon, A_Sickle, A_Knut; //实付
    scanf("%d.%d.%d %d.%d.%d", &P_Gallon, &P_Sickle, &P_Knut, &A_Gallon, &A_Sickle, &A_Knut);
    long long count_P = (long long)P_Gallon * 17 * 29 + P_Sickle * 29 + P_Knut;
    long long count_A = (long long)A_Gallon * 17 * 29 + A_Sickle * 29 + A_Knut;
    
    int out_Gallon, out_Sickle, out_knut;
    if(count_A > count_P) // 说明多给了 需要找零
    {
        int money = count_A - count_P;
        out_Gallon = money / (17 * 29); // 多少个out_Gallon
        money = money % (17 * 29);
        out_Sickle = money / 29;
        out_knut = money % 29;
        printf("%d.%d.%d\n", out_Gallon, out_Sickle, out_knut);
    }
    else if(count_A < count_P)  // 钱不够  
    {
        int money = count_P - count_A;
        out_Gallon = money / (17 * 29); // 多少个out_Gallon
        money = money % (17 * 29);
        out_Sickle = money / 29;
        out_knut = money % 29;
        printf("%d.%d.%d\n", (-1)*out_Gallon, out_Sickle, out_knut);
    }
    else{
        printf("0.0.0\n");
    }
    
    return 0;
}