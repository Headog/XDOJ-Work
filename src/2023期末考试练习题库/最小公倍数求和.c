#include <stdio.h>

unsigned long gcd(unsigned long a, unsigned long b) {
    if (a && b)
        for (; (a %= b) && (b %= a);)
            ;
    return a | b;
}

int main(void) {
    size_t n, i;
    unsigned long num0, num1, sum = 0;
    scanf("%lu%lu", &n, &num0);
    for (i = 0; i < n - 1; i++) {
        scanf("%lu", &num1);
        sum += num0 * num1 / gcd(num0, num1);
        num0 = num1;
    }
    printf("%lu\n", sum);
    return 0;
}
