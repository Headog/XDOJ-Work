#include <stddef.h>
#include <stdio.h>

int main(void) {
    size_t n;
    long num, sum = 0;
    scanf("%zu", &n);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (j == i || j == n - i - 1) {
                scanf("%ld", &num);
                sum += num;
            } else {
                scanf("%*d");
            }
        }
    }
    printf("%ld\n", sum);
    return 0;
}
