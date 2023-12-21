#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) { return (*(long *)a - *(long *)b); }

int main(void) {
    size_t n;
    long delta = 9999, temp_delta;
    scanf("%zu", &n);
    long nums[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &nums[i]);
    }
    qsort(nums, n, sizeof(long), cmpfunc);
    for (size_t i = 0; i < n - 1; i++) {
        temp_delta = nums[i + 1] - nums[i];
        if (temp_delta < delta) {
            delta = temp_delta;
        }
    }
    printf("%ld\n", delta);
    return 0;
}
