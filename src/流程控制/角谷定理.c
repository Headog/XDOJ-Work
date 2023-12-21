#include <stdio.h>

int main() {
    int n, times;
    scanf("%d", &n);
    for (times = 0; n != 1; times++) {
        if (n % 2) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
    }
    printf("%d\n", times);
    return 0;
}
