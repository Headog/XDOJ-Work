#include <stdio.h>
#include <stdlib.h>

int compare_nums(const void *a, const void *b) {
    if (*(long *)a % 2 == 0 && *(long *)b % 2 != 0) {
        return -1;
    }
    if (*(long *)a % 2 != 0 && *(long *)b % 2 == 0) {
        return 1;
    }
    return *(long *)b - *(long *)a;
}

int main(void) {
    size_t n;
    scanf("%zu", &n);
    long nums[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &nums[i]);
    }
    qsort(nums, n, sizeof(long), compare_nums);
    for (size_t i = 0; i < n; i++) {
        printf("%ld ", nums[i]);
    }
    putchar('\n');
    return 0;
}
