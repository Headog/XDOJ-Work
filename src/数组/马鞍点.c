#include <limits.h>
#include <stdio.h>

struct saddle {
    size_t ln;
    size_t col;
    long value;
};

long index_of_min(long nums[], size_t size) {
    long min_num = LONG_MAX;
    size_t index_of_min_num = 0;
    for (size_t i = 0; i < size; i++) {
        if (nums[i] < min_num) {
            min_num = nums[i];
            index_of_min_num = i;
        }
    }
    return index_of_min_num;
}

int main(void) {
    size_t m, n, index_of_saddles = 0, index_of_min_num;
    scanf("%zu%zu", &m, &n);
    long matrix[m][n];
    struct saddle saddles[m];
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            scanf("%ld", &matrix[i][j]);
        }
    }
    for (size_t i = 0; i < m; i++) {
        index_of_min_num = index_of_min(matrix[i], n);
        for (size_t j = 0; j < m; j++) {
            if (matrix[j][index_of_min_num] > matrix[i][index_of_min_num]) {
                goto end_of_loop;
            }
        }
        saddles[index_of_saddles].ln = i;
        saddles[index_of_saddles].col = index_of_min_num;
        saddles[index_of_saddles++].value = matrix[i][index_of_min_num];
    end_of_loop:;
    }
    if (index_of_saddles == 0) {
        puts("no");
    } else {
        for (size_t i = 0; i < index_of_saddles; i++) {
            printf("%zu %zu %ld\n", saddles[i].ln, saddles[i].col,
                   saddles[i].value);
        }
    }
    return 0;
}
