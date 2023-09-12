#include<stdio.h>
#include<errno.h>
#include<math.h>
#include<string.h>
int main()
{
    // printf("%d\n", errno);
    // log(0.0);
    // printf("%d\n", errno);
    // printf("%s\n", strerror(errno));
    // log(0.0);
    // printf("%s\n", strerror(errno));
    perror("Error");
    log(0.0);
    perror("Error");
    return 0;
}