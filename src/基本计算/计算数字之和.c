#include <stdio.h>

unsigned sum_digits(unsigned n) {
    unsigned result = 0;
    while (n != 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main() {
    unsigned n;
    scanf("%u", &n);
    printf("%u\n", sum_digits(n));
    return 0;
}
