# include<stdio.h>
int Fibonacci(int n);
int Fibonacci1(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int result = Fibonacci1(n);
    printf("%d\n", result);
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
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

int Fibonacci1(int n)
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