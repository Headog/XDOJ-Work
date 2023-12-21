#include <stdio.h>

#define PRECISION 500000

int main() {
    double pi = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= PRECISION; i++) {
        pi += (i % 2 ? 1.0 : -1.0) / (2 * i - 1);
    }
    printf("%.*f\n", n, pi * 4);
    return 0;
}
