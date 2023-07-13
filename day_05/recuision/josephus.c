#include <stdio.h>

int josephus(int n, int m) {
    int i, pos = 0;
    for (i = 2; i <= n; i++) {
        pos = (pos + m) % i;
    }
    return pos;
}

int main() {
    int n = 7, m = 3;
    int result = josephus(n, m);
    printf("The last person's position is %d\n", result);
    return 0;
}