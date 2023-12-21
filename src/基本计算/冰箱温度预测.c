#include <stdio.h>

#define T(t) 4.0 * (t) * (t) / ((t) + 2) - 20

int main() {
    float h, m;
    scanf("%f %f", &h, &m);
    printf("%.2f\n", T(h + m / 60));
    return 0;
}
