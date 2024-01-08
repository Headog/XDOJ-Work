#include <stdio.h>

int main(void) {
    size_t n, i;
    double x, p0 = 1, p1, p2, sum;
    scanf("%lu%lf", &n, &x);
    sum = p1 = x;
    for (i = 2; i <= n; i++) {
        p2 = ((2 * i - 1) * x * p1 - (i - 1) * p0) / i;
        p0 = p1;
        p1 = p2;
        sum += p2;
    }
    printf("%.4lf\n", sum);
    return 0;
}
