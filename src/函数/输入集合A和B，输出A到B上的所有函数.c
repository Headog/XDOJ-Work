#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_long(const void *a, const void *b) {
    return *(long *)a - *(long *)b;
}

int main(void) {
    size_t m, n;
    scanf("%zu %zu", &m, &n);
    long A[m], B[n];
    size_t indexes[m];
    memset(indexes, 0, m * sizeof(size_t));
    for (size_t i = 0; i < m; i++) {
        scanf("%ld", &A[i]);
    }
    qsort(A, m, sizeof(long), compare_long);
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &B[i]);
    }
    qsort(B, n, sizeof(long), compare_long);
    while (true) {
        putchar('{');
        for (size_t i = 0; i < m; i++) {
            printf("<%ld,%ld>", A[i], B[indexes[i]]);
            if (i < m - 1) {
                putchar(',');
            }
        }
        puts("}");
        indexes[m - 1]++;
        for (size_t i = m - 1; i > 0; i--) {
            if (indexes[i] == n) {
                indexes[i - 1]++;
                indexes[i] = 0;
            }
        }
        if (indexes[0] == n) {
            return 0;
        }
    }
    return 1;
}
