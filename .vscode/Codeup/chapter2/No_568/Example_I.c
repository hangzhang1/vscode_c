#include<stdio.h>
#include<stdlib.h>
int Fibonacci(int n);

int main()
{
    int n = 20;
    double sum = 0;
    for (size_t i = 1; i <= n; i++)
    {
        
        int divident = Fibonacci(i+2);
        int divisor = Fibonacci(i+1);
        sum += (double)divident / (double)divisor; 
    }  
    printf("%.6lf\n", sum);
    return 0;
}

int Fibonacci(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        int a = 1;
        int b = 1;
        int c;
        for(int i=3; i<=n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}