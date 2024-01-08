#include <limits.h>
#include <stdio.h>

int main(void) {
    size_t n, m, i, actual_n;
    long scores[20], sum = 0, max_score = LONG_MIN, min_score = LONG_MAX;
    scanf("%lu%lu", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%ld", &scores[i]);
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
        if (scores[i] < min_score) {
            min_score = scores[i];
        }
    }
    actual_n = n;
    for (i = 0; i < n; i++) {
        if (scores[i] != scores[m - 1]) {
            if (scores[i] == max_score) {
                actual_n--;
                max_score = LONG_MAX;
                continue;
            } else if (scores[i] == min_score) {
                actual_n--;
                min_score = LONG_MIN;
                continue;
            }
        }
        sum += scores[i];
    }
    printf("%.2f\n", (float)sum / actual_n);
    return 0;
}
