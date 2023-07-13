# include<stdio.h>
# include<math.h>
# include<stdbool.h>
int main()
{
    double i =0;
    double pi = 0;
   
    while (true)
    {
        double divisor = 2 * i + 1;
        double divident = pow(-1.0, i);
        if(fabs(divident/divisor) < 0.000001)
        {
            break;
        }
        pi = pi + divident / divisor;
        i += 1.0;
    }
    printf("PI=%10.8f\n", pi * 4.0);

    return 0;
}
//求圆周率的近似值，直到发现某一项的绝对值小于10-6为止。圆周率的计算公式如下：
//π/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...
//在这个公式中每一项的系数是（-1）i和分母是2i+1。编写程序，计算π的近似值，直到发现某一项的绝对值小于10-6为止。
//输出π的近似值，以及进行到多少项的时候终止的。
//输入:无
//输出:PI=3.14159265
//     500000
//要求:使用while循环
//     使用double类型
//     使用math.h中的pow函数
//     使用math.h中的fabs函数
