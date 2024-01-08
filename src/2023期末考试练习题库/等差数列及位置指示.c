#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long num;
    size_t index;
} nums_pair;

int compare_pair(const void *a, const void *b) {
    return ((nums_pair *)a)->num - ((nums_pair *)b)->num;
}

int main(void) {
    size_t n, i;
    nums_pair pairs[99];
    unsigned long max_delta = 0, min_delta = LONG_MAX, delta;
    scanf("%lu", &n);
    for (i = 0; i < n; i++) {
        scanf("%ld", &pairs[i].num);
        pairs[i].index = i;
    }
    qsort(pairs, n, sizeof(nums_pair), compare_pair);
    for (i = 1; i < n; i++) {
        delta = abs((int)(pairs[i].num - pairs[i - 1].num));
        if (delta > max_delta) {
            max_delta = delta;
        }
        if (delta < min_delta) {
            min_delta = delta;
        }
    }
    if (max_delta == min_delta) {
        for (i = 0; i < n; i++) {
            printf("%lu ", pairs[i].index + 1);
        }
        putchar('\n');
    } else {
        printf("%lu %lu\n", max_delta, min_delta);
    }
    return 0;
}
