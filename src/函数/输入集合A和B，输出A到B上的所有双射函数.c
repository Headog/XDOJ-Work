#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_long(const void *a, const void *b) {
    return *(long *)a - *(long *)b;
}

bool has_repeated(const size_t *nums, size_t length) {
    for (size_t i = 0; i < length; i++) {
        for (size_t j = i + 1; j < length; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

bool has_absence(const size_t *nums, size_t length, size_t max) {
    bool presented[max];
    memset(presented, false, max * sizeof(bool));
    for (size_t i = 0; i < length; i++) {
        presented[nums[i]] = true;
    }
    for (size_t i = 0; i < max; i++) {
        if (!presented[i]) {
            return true;
        }
    }
    return false;
}

int main(void) {
    size_t m, n, i;
    scanf("%zu %zu", &m, &n);
    if (n != m) {
        return 0;
    }
    long A[m], B[n];
    size_t indexes[m];
    for (i = n - 1; i > 0; i--) {
        indexes[m - n + i] = i;
    }
    for (i = 0; i <= m - n; i++) {
        indexes[i] = 0;
    }
    for (i = 0; i < m; i++) {
        scanf("%ld", &A[i]);
    }
    qsort(A, m, sizeof(long), compare_long);
    for (i = 0; i < n; i++) {
        scanf("%ld", &B[i]);
    }
    qsort(B, n, sizeof(long), compare_long);
    while (true) {
        putchar('{');
        for (i = 0; i < m; i++) {
            printf("<%ld,%ld>", A[i], B[indexes[i]]);
            if (i < m - 1) {
                putchar(',');
            }
        }
        puts("}");
        do {
            indexes[m - 1]++;
            for (i = m - 1; i > 0; i--) {
                if (indexes[i] == n) {
                    indexes[i - 1]++;
                    indexes[i] = 0;
                }
            }
            if (indexes[0] == n) {
                return 0;
            }
        } while (has_absence(indexes, m, n) || has_repeated(indexes, m));
    }
    return 1;
}
