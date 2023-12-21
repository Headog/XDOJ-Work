#include <limits.h>
#include <stddef.h>
#include <stdio.h>

int main(void) {
    size_t n;
    scanf("%zu", &n);
    long nums[n], *pmax = nums, *pmin = nums, temp;
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &nums[i]);
        if (nums[i] > *pmax) {
            pmax = &nums[i];
        }
        if (nums[i] < *pmin) {
            pmin = &nums[i];
        }
    }
    temp = *pmin;
    *pmin = *pmax;
    *pmax = temp;
    for (size_t i = 0; i < n; i++) {
        printf("%ld ", nums[i]);
    }
    putchar('\n');
    return 0;
}
