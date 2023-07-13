#include<stdio.h>


void hanoi(int n, char start, char middle, char target);
int main()
{

    hanoi(3, 'A', 'B', 'C');
    return 0;
}
void hanoi(int n, char start, char middle, char target)
{
    // base case
    if( n==1 )
    {
        printf("%c -> %c\n", start, target);
        return;
    }
    // 递推公式
    hanoi(n-1, start, target, middle); // n-1 个盘子
    // 把最大的盘子从start移动到target
    printf("%c -> %c\n", start, target);
    // 把n-1个盘子从middle移动到target
    hanoi(n-1, middle, start, target);

}