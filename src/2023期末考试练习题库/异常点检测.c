#include <math.h>
#include <stdio.h>

int main(void) {
    size_t n, i, count = 0;
    double nums[100], x, s;
    scanf("%lu", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &nums[i]);
        x += nums[i];
    }
    x /= n;
    for (i = 0; i < n; i++) {
        s += (nums[i] - x) * (nums[i] - x);
    }
    s = sqrt(s / (n - 1));
    for (i = 0; i < n; i++) {
        if (nums[i] < x - 3 * s || nums[i] > x + 3 * s) {
            count++;
        }
    }
    printf("%.4lf %lu\n", s, count);
    return 0;
}
