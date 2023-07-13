#include<stdio.h>

// enum Weekday
// {
//     Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
// };
typedef enum Weekday
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
}Weekday;

int main()
{
    // enum Weekday today = Monday;
    Weekday today = Monday;
    printf("%d\n", today);
    int a = Monday;
    printf("%d\n", a);
    return 0;
}