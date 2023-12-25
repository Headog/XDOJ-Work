#include <stdbool.h>
#include <stdio.h>

bool is_prime(size_t n) {
    if (n <= 1) {
        return false;
    }
    for (size_t i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    size_t n;
    scanf("%zu", &n);
    for (size_t i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%zu %zu\n", i, n - i);
            break;
        }
    }
    return 0;
}
