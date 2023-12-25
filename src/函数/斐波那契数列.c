#include <stdio.h>

size_t is_prime(size_t n) {
    if (n <= 1) {
        return 0;
    }
    for (size_t i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

size_t fibonacci(size_t n) {
    if (n <= 2) {
        return 1;
    }
    size_t a = 1, b = 1, c;
    for (size_t i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(void) {
    size_t n;
    scanf("%zu", &n);
    size_t result = fibonacci(n);
    if (is_prime(result)) {
        printf("yes\n");
    } else {
        printf("%zu\n", result);
    }
    return 0;
}
