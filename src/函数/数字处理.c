#include <stdio.h>

int main(void) {
    size_t n;
    scanf("%zu", &n);
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    printf("%zu\n", n);
    return 0;
}
