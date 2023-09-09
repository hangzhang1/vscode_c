#include<stdio.h>


long long fib1(long long n);
int main()
{

    long long n;
    scanf("%lld", n);
    printf("%lld\n", fib1(n));

    return 0;
}

// 该方法存在大量重复计算
long long fib1(long long n)
{
    if(n >= 2)
    {
        return fib1(n-1) + fib1(n-2);
    }
    else if(n == 1)
    {
        return 1;
    }
    else if(n == 0)
    {
        return 0;
    }
    else
        return -1;
}

// 这个方法好一些
int fib2(int n)
{
    int a = 0, b = 1, c;
    if(n == 0){
        return a;
    }
    else if(n == 1){
        return b;
    }
    else{
        for(int i = 2; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}