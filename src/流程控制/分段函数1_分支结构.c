#include <math.h>
#include <stdio.h>

float f(float x) { return x >= 0 ? sqrt(x) : pow(x + 1, 2) + 2 * x + 1 / x; }

int main() {
    float x;
    scanf("%f", &x);
    printf("%.2f\n", f(x));
    return 0;
}
