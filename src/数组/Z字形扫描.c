#include <stddef.h>
#include <stdio.h>

int main(void) {
    size_t n, i = 0, j = 0;
    long delta_x = 1, delta_y = -1;
    scanf("%zu", &n);
    long matrix[n][n];
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            scanf("%ld", &matrix[i][j]);
        }
    }
    while (i < n && j < n) {
        printf("%ld ", matrix[i][j]);
        if (i + delta_y == -1 && j + delta_x == n) {
            i++;
            delta_x = -delta_x;
            delta_y = -delta_y;
        } else if (i + delta_y == n && j + delta_x == -1) {
            j++;
            delta_x = -delta_x;
            delta_y = -delta_y;
        } else if (i + delta_y == -1 || i + delta_y == n) {
            j++;
            delta_x = -delta_x;
            delta_y = -delta_y;
        } else if (j + delta_x == -1 || j + delta_x == n) {
            i++;
            delta_x = -delta_x;
            delta_y = -delta_y;
        } else {
            i += delta_y;
            j += delta_x;
        }
    }
    putchar('\n');
    return 0;
}
