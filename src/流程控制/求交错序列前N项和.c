#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += (i % 2 ? 1.0 : -1.0) * i / (2 * i - 1);
    }
    printf("%.3f\n", sum);
    return 0;
}
