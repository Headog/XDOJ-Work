#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(long *)b - *(long *)a); }

int main(void) {
    size_t m, index_of_sum;
    long temp_sum = 0;
    scanf("%zu", &m);
    long matrix[m][m], sums[2 * m + 2];
    for (size_t i = 0; i < m; i++) {
        temp_sum = 0;
        for (size_t j = 0; j < m; j++) {
            scanf("%ld", &matrix[i][j]);
            temp_sum += matrix[i][j];
        }
        sums[index_of_sum++] = temp_sum;
    }
    for (size_t j = 0; j < m; j++) {
        temp_sum = 0;
        for (size_t i = 0; i < m; i++) {
            temp_sum += matrix[i][j];
        }
        sums[index_of_sum++] = temp_sum;
    }
    temp_sum = 0;
    for (size_t i = 0; i < m; i++) {
        temp_sum += matrix[i][i];
    }
    sums[index_of_sum++] = temp_sum;
    temp_sum = 0;
    for (size_t i = 0; i < m; i++) {
        temp_sum += matrix[i][m - 1 - i];
    }
    sums[index_of_sum] = temp_sum;
    qsort(sums, 2 * m + 2, sizeof(long), compare);
    for (size_t i = 0; i < 2 * m + 2; i++) {
        printf("%ld ", sums[i]);
    }
    putchar('\n');
    return 0;
}
