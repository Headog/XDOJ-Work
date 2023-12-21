#include <math.h>
#include <stdio.h>

int main() {
    double a, x = 1, last_x;
    scanf("%lf", &a);
    do {
        last_x = x;
        x = 1.0 / 2 * (x + a / x);
    } while (fabs(x - last_x) >= 1e-5);
    printf("%.5lf\n", x);
    return 0;
}
