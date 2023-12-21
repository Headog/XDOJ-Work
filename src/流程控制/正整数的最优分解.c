#include <stdio.h>

int main() {
    int n, part = 1;
    scanf("%d", &n);
    if (n % 2 == 1) {
        puts("-1");
        return 0;
    }
    while ((part *= 2) <= n) {
    }
    for (; part > 1; part /= 2) {
        if (part <= n) {
            printf("%d ", part);
            n -= part;
        }
    }
    putchar('\n');
    return 0;
}
