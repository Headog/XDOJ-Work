#include <stdio.h>

int main() {
    size_t n, i;
    long nums[100];
    scanf("%lu", &n);
    for (i = 0; i < n / 2; i++) {
        scanf("%ld", &nums[i + n / 2 + n % 2]);
    }
    if (n % 2 == 1) {
        scanf("%ld", &nums[n / 2]);
        i++;
    }
    for (; i < n; i++) {
        scanf("%ld", &nums[i - n / 2 - n % 2]);
    }
    for (i = 0; i < n; i++) {
        printf("%ld ", nums[i]);
    }
    putchar('\n');
    return 0;
}
