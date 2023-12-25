#include <stdio.h>

int main(void) {
    long x;
    scanf("%ld", &x);
    if (x < 1) {
        printf("%ld\n", x);
    } else if (1 <= x && x < 10) {
        printf("%ld\n", 2 * x - 1);
    } else {
        printf("%ld\n", 3 * x - 11);
    }
    return 0;
}
