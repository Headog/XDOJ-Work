#include <stdio.h>

int main(void) {
    size_t n;
    scanf("%zu", &n);
    double a1 = 2, a2 = 3, b1 = 1, b2 = 2, sum = a1 / b1 + a2 / b2, an, bn;
    for (int i = 3; i <= n; i++) {
        an = a1 + a2;
        bn = b1 + b2;
        sum += an / bn;
        a1 = a2;
        a2 = an;
        b1 = b2;
        b2 = bn;
    }
    printf("%.2lf\n", sum);
    return 0;
}
