#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (is_prime(n)) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}
