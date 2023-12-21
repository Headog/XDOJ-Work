#include <stdbool.h>
#include <stdio.h>

int main() {
    size_t n, m;
    scanf("%zu %zu", &n, &m);
    bool lamps_lit[n + 1];
    for (size_t i = 1; i <= n; i++)
        lamps_lit[i] = false;
    for (size_t i = 1; i <= m; i++) {
        for (size_t j = 0; j <= n; j++) {
            if (j % i == 0) {
                lamps_lit[j] = !lamps_lit[j];
            }
        }
    }
    for (size_t i = 1; i <= n; i++) {
        if (lamps_lit[i]) {
            printf("%zu ", i);
        }
    }
    putchar('\n');
    return 0;
}
