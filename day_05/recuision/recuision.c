#include<stdio.h>
long long fib1(long long n);
int fib2(int n);
int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", fib1(n));
    return 0;
}
long long fib1(long long n) //存在大量重复计算，效率低
{
    if(n >= 2)
    {
        return fib1(n-1) + fib1(n-2);
    }
    else if( n==1 )
        return 1;
    else if( n==0 )
        return 0;
    else
        return -1;
}
// 写一个效率高的斐波那契数列计算函数
int fib2(int n)
{
    int a = 0, b = 1, c;
    if(n == 0)
        return a;
    else if(n == 1)
        return b;
    else
    {
        for(int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

