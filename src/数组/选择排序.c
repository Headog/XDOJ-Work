#include <stdio.h>
#include <stdlib.h>

int compare_long(const void *a, const void *b) { return *(long *)a - *(long *)b; }

int main(void) {
    size_t n;
    scanf("%zu", &n);
    long nums[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &nums[i]);
    }
    qsort(nums, n, sizeof(long), compare_long);
    for (size_t i = 0; i < n; i++) {
        printf("%ld ", nums[i]);
    }
    putchar('\n');
    return 0;
}
