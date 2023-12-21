#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(long *)a - *(long *)b; }

int main(void) {
    size_t n;
    long delta;
    scanf("%zu", &n);
    if (n < 3) {
        puts("no");
        return 0;
    }
    long nums[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &nums[i]);
    }
    qsort(nums, n, sizeof(long), compare);
    delta = nums[1] - nums[0];
    for (size_t i = 2; i < n; i++) {
        if (nums[i] - nums[i - 1] != delta) {
            puts("no");
            return 0;
        }
    }
    printf("%ld\n", labs(delta));
    return 0;
}
