#include <stdio.h>
#include <stdlib.h>

int compare_ulong(const void *a, const void *b) {
    return *(unsigned long *)a - *(unsigned long *)b;
}

int main(void) {
    size_t n, i;
    unsigned long nums[21];
    scanf("%lu", &n);
    for (i = 0; i <= n; i++) {
        scanf("%lu", &nums[i]);
    }
    qsort(nums, n + 1, sizeof(unsigned long), compare_ulong);
    for (i = 0; i <= n; i++) {
        printf("%lu ", nums[i]);
    }
    putchar('\n');
    return 0;
}
