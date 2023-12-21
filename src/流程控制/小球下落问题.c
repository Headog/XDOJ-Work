#include <stdio.h>

int main() {
    int n;
    double h = 100.0, s = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        s += h;
        h /= 2;
        if (i == n - 1) {
            break;
        }
        s += h;
    }
    printf("S=%.3lf h=%.3lf\n", s, h);
    return 0;
}
