#include <stdio.h>

int main() {
    int m, n, q, r;
    scanf("%d %d %d %d", &m, &n, &q, &r);
    if (m / n == q && m % n == r) {
        puts("yes");
    } else {
        printf("%d %d\n", m / n, m % n);
    }
    return 0;
}
