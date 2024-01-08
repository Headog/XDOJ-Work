#include <stdio.h>

int main(void) {
    size_t n, i;
    long nums[30];
    scanf("%lu", &n);
    for (i = 0; i < n; i++) {
        scanf("%ld", &nums[i]);
    }
    printf("%ld ", (nums[0] + nums[1] + nums[2]) / 3);
    for (i = 1; i < n - 1; i++) {
        printf("%ld ", (nums[i - 1] + nums[i] + nums[i + 1]) / 3);
    }
    printf("%ld\n", (nums[n - 3] + nums[n - 2] + nums[n - 1]) / 3);
    return 0;
}
