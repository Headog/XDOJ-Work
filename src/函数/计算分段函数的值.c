#include <math.h>
#include <stdio.h>

int main(void) {
    double x;
    scanf("%lf", &x);
    printf("%.2lf\n", x >= 0 ? sqrt(x) : (x + 1) * (x + 1) + 2 * x + 1.0 / x);
    return 0;
}
