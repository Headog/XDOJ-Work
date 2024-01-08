#include <stdio.h>

int main() {
    double a, max = -9999;
    scanf("%lf", &a);
    for (double i = 0; i <= 10; i += 0.0001) {
        if (-i * i * i + a * i * i > max) {
            max = -i * i * i + a * i * i;
        }
    }
    printf("%.2lf\n", max);
    return 0;
}
