#include <stdio.h>

int main() {
    int n, sum_o = 0, sum_d = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum_o += i;
        if (i + 1 <= n) {
            i++;
        }
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d %d\n", sum_o, sum - sum_o);
    return 0;
}