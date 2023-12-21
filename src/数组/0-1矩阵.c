#include <stdio.h>

int main(void) {
    size_t m, n, max_length, length;
    long num, first_1_index = -1;
    scanf("%zu%zu", &m, &n);
    long bounds[m][2];
    for (size_t i = 0; i < m; i++) {
        max_length = 0;
        bounds[i][0] = bounds[i][1] = first_1_index = -1;
        for (size_t j = 0; j < n; j++) {
            scanf("%ld", &num);
            if (num == 1 && first_1_index == -1) {
                first_1_index = j;
            }
            if (num == 0 && first_1_index != -1) {
                length = j - first_1_index;
                if (length > max_length) {
                    max_length = length;
                    bounds[i][0] = first_1_index;
                    bounds[i][1] = j - 1;
                }
                first_1_index = -1;
            }
        }
        if (first_1_index != -1 && n - first_1_index > max_length) {
            bounds[i][0] = first_1_index;
            bounds[i][1] = n - 1;
        }
    }
    for (size_t i = 0; i < m; i++) {
        printf("%ld %ld\n", bounds[i][0], bounds[i][1]);
    }
    return 0;
}
