#include <stdio.h>

int sum_factors(int num, int *count) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
            (*count)++;
        }
    }
    return sum;
}

int main() {
    int m, n, counts[2] = {0, 0};
    scanf("%d %d", &m, &n);
    if (((sum_factors(m, &counts[0])) == n) &
        (sum_factors(n, &counts[1]) == m)) {
        fputs("yes ", stdout);
    } else {
        fputs("no ", stdout);
    }
    printf("%d %d\n", counts[0], counts[1]);
    return 0;
}
