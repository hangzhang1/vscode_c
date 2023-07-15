#include<stdio.h>
#include<math.h>
#define PI 3.1415926
double average(double (*f)(double), double a, double b);
double f(double x);
int main()
{

    double a = 1.0, b = 2.0;
    double avg = average(f, a, b); // 这个f可以是任何函数
    printf("avg = %lf\n", avg);
    double avg2 = average(sin, 0, PI);
    printf("avg2 = %lf\n", avg2);
    return 0;
}


double f(double x)
{
    return x * x;
}

double average(double (*f)(double), double a, double b)  // 加括号的原因是函数调用的优先级高于指针
{// f is a pointer to a function that takes a double and returns a double
    return (*f)((a+b)/2);
}
// 你传递一个函数给我，而我在函数内部调用这个函数，这就是函数指针的用法 也就是一个回调函数callback