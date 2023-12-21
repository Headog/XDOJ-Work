#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(long *)a - *(long *)b; }

int main(void) {
    size_t m, n;
    scanf("%zu%zu", &m, &n);
    long nums[m + n];
    for (size_t i = 0; i < m + n; i++) {
        scanf("%ld", &nums[i]);
    }
    qsort(nums, m + n, sizeof(long), compare);
    for (size_t i = 0; i < m + n; i++) {
        printf("%ld ", nums[i]);
    }
    putchar('\n');
    return 0;
}
