#include <stdbool.h>
#include <stdio.h>

typedef struct {
    size_t x;
    size_t y;
} point;

int main(void) {
    size_t n, m, t, count = 0;
    unsigned long k;
    point first = {0, 0}, last;
    scanf("%zu%zu%zu%zu", &n, &m, &t, &k);
    unsigned long matrix[n + 2][m + 2];
    bool visited[t + 1];
    for (size_t i = 1; i <= t; i++) {
        visited[i] = false;
    }
    for (size_t i = 0; i <= n + 1; i++) {
        for (size_t j = 0; j <= m + 1; j++) {
            if (i == 0 || i == n + 1 || j == 0 || j == m + 1) {
                matrix[i][j] = 0;
                continue;
            }
            scanf("%zu", &matrix[i][j]);
            if (matrix[i][j] == k) {
                if (first.x == 0 || first.y == 0) {
                    first.x = j;
                    first.y = i;
                }
                last.x = j;
                last.y = i;
            }
        }
    }
    for (size_t i = first.y - 1; i <= last.y + 1; i++) {
        for (size_t j = first.x - 1; j <= last.x + 1; j++) {
            if (((i == first.y - 1 || i == last.y + 1) &&
                 (first.x <= j && j <= last.x)) ||
                ((j == first.x - 1 || j == last.x + 1) &&
                 (first.y <= i && i <= last.y))) {
                visited[matrix[i][j]] = true;
            }
        }
    }
    for (size_t i = 1; i <= t; i++) {
        if (visited[i]) {
            count++;
        }
    }
    printf("%zu\n", count);
    return 0;
}
