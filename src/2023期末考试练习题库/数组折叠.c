#include <math.h>
#include <stdio.h>

int main(void) {
    size_t n, m, i, j, actual_n;
    long nums[64];
    scanf("%lu%lu", &n, &m);
    actual_n = pow(2.0, (int)n);
    for (i = 0; i < actual_n; i++) {
        scanf("%ld", &nums[i]);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < actual_n / 2; j++) {
            nums[j] += nums[actual_n - j - 1];
        }
        actual_n /= 2;
    }
    for (i = 0; i < actual_n; i++) {
        printf("%ld ", nums[i]);
    }
    putchar('\n');
    return 0;
}
