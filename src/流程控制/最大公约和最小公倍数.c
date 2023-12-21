#include <stdio.h>

unsigned gcd(unsigned a, unsigned b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    unsigned m, n, factor;
    scanf("%u %u", &m, &n);
    factor = gcd(m, n);
    printf("%u %u\n", factor, m * n / factor);
    return 0;
}
