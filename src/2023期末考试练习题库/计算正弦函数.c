#include <math.h>
#include <stdio.h>

int f(int n) {
    int r = 1;
    for (int i = 1; i <= n; i++) {
        r *= i;
    }
    return r;
}

double expansion_sin(double x, int n) {
    double r = 0;
    for (int i = 1; i <= n; i++) {
        r += pow(-1.0, i + 1) * pow(x, 2 * i - 1) / f(2 * i - 1);
    }
    return r;
}

int main() {
    int n;
    double x;
    scanf("%d", &n);
    scanf("%lf", &x);
    printf("%.4lf", expansion_sin(x, n));
    return 0;
}
