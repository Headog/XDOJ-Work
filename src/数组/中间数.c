#include <stddef.h>
#include <stdio.h>

int main(void) {
    size_t n, count_left, count_right;
    scanf("%zu", &n);
    long a[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &a[i]);
    }
    for (size_t i = 0; i < n; i++) {
        count_left = count_right = 0;
        for (size_t j = 0; j < n; j++) {
            if (a[j] < a[i]) {
                count_left++;
            } else if (a[j] > a[i]) {
                count_right++;
            }
        }
        if (count_left == count_right) {
            printf("%ld\n", a[i]);
            return 0;
        }
    }
    puts("-1");
    return 0;
}
