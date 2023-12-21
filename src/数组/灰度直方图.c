#include <stdio.h>

int main(void) {
    size_t m, n;
    unsigned long level;
    scanf("%zu%zu", &m, &n);
    size_t amounts[16] = {0};
    for (size_t i = 0; i < m * n; i++) {
        scanf("%zu", &level);
        amounts[level]++;
    }
    for (size_t i = 0; i < 16; i++) {
        if (amounts[i] != 0) { // XDOJ 有误
            printf("%zu %zu\n", i, amounts[i]);
        }
    }
    return 0;
}
