#include <stdio.h>

int main() {
    int nums[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i + n]);
    }
    for (; i < 2 * n; i++) {
        scanf("%d", &nums[i - n]);
    }
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", nums[i]);
    }
    putchar('\n');
    return 0;
}
