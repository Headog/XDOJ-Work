#include <stdio.h>

int main(void) {
    size_t n, m;
    scanf("%zu%zu", &n, &m);
    unsigned long matrix[n][m];
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            scanf("%zu", &matrix[i][j]);
        }
    }
    for (size_t i = 0; i < m; i++) {
        for (long j = n - 1; j >= 0; j--) {
            printf("%zu ", matrix[j][i]);
        }
        putchar('\n');
    }
    return 0;
}
