#include <stdio.h>

int contains_7(int num) {
    for (; num > 0; num /= 10) {
        if (num % 10 == 7) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, counts[3] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 || contains_7(i)) {
            counts[i % 3] += 1;
            n++;
        }
    }
    printf("%d %d %d\n", counts[1], counts[2], counts[0]);
    return 0;
}
