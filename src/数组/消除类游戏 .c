#include <stdbool.h>
#include <stdio.h>

int main(void) {
    size_t n, m;
    scanf("%zu%zu", &n, &m);
    int chessboard[n][m];
    bool to_be_deleted[n][m];
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            scanf("%d", &chessboard[i][j]);
        }
    }
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j <= m - 3; j++) {
            if (chessboard[i][j] == chessboard[i][j + 1] &&
                chessboard[i][j] == chessboard[i][j + 2]) {
                to_be_deleted[i][j] = to_be_deleted[i][j + 1] =
                    to_be_deleted[i][j + 2] = true;
            }
        }
    }
    for (size_t j = 0; j < m; j++) {
        for (size_t i = 0; i <= n - 3; i++) {
            if (chessboard[i][j] == chessboard[i + 1][j] &&
                chessboard[i][j] == chessboard[i + 2][j]) {
                to_be_deleted[i][j] = to_be_deleted[i + 1][j] =
                    to_be_deleted[i + 2][j] = true;
            }
        }
    }
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            if (to_be_deleted[i][j]) {
                chessboard[i][j] = 0;
            }
        }
    }
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            printf("%d ", chessboard[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
