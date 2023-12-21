#include <stdio.h>

int main() {
    unsigned a, b;
    scanf("%u %u", &a, &b);
    if (a % b == 0) {
        puts("yes");
    } else {
        printf("%d %d\n", a / b, a % b);
    }
    return 0;
}
