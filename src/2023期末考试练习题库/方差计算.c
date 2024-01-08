#include <stdio.h>

int main(void) {
    size_t n, i;
    long nums[30], sum = 0, s = 0, mean;
    scanf("%zu", &n);
    for (i = 0; i < n; i++) {
        scanf("%ld", &nums[i]);
        sum += nums[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++) {
        s += (nums[i] - mean) * (nums[i] - mean);
    }
    printf("%ld\n", s / n);
    return 0;
}
