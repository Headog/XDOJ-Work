#include <stdio.h>
#include <math.h>

int main() {
    double r, x1, x_b, x_a;
    scanf("%lf%lf", &x1, &r);
    x_b = x1;
    for (int i = 0; i < 999; i++) {
        x_a = r * x_b * (1 - x_b);
        if (fabs(x_a - x_b) < 0.00001) {
            printf("%.4lf 1\n", x_b);
            return 0;
        }
        x_b = x_a;
    }
    printf("%.4lf 0\n", x_b);
    return 0;
}
