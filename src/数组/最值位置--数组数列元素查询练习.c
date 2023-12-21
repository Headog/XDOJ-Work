#include <limits.h>
#include <stdio.h>

int main(void) {
    size_t n, index_of_max;
    long num, max = LONG_MIN;
    scanf("%zu", &n);
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &num);
        if (num > max) {
            index_of_max = i;
            max = num;
        }
    }
    printf("%zu %ld %zu\n", n, max, index_of_max);
    return 0;
}
