#include <limits.h>
#include <stdio.h>

int main(void) {
    size_t n, i;
    unsigned long num, sum = 0, max = 0, index_of_max, min = LONG_MAX,
                       index_of_min;
    scanf("%lu", &n);
    for (i = 0; i < n; i++) {
        scanf("%lu", &num);
        if (num > max) {
            max = num;
            index_of_max = i;
        }
        if (num < min) {
            min = num;
            index_of_min = i;
        }
        sum += num;
    }
    printf("%lu %lu %lu %lu %lu\n", sum, max, index_of_max + 1, min,
           index_of_min + 1);
    return 0;
}
