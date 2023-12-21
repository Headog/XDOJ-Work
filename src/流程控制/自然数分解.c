#include <stdio.h>

int main() {
    int n, n3, sum;
    scanf("%d", &n);
    n3 = n * n * n;
    for (int i = 1;; i++) {
        sum = 0;
        for (int j = i; j < i + 2 * n; j += 2) {
            sum += j;
        }
        if (sum == n3) {
            for (int j = i; j < i + 2 * n; j += 2) {
                printf("%d ", j);
            }
            putchar('\n');
            return 0;
        }
    }
    return -1;
}
