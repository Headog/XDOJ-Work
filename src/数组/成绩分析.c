#include <stdio.h>

int main(void) {
    size_t n, counts[5] = {0};
    unsigned long score, max = 0, min = 100, sum = 0;
    scanf("%zu", &n);
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &score);
        sum += score;
        if (score > max) {
            max = score;
        }
        if (score < min) {
            min = score;
        }
        if (score >= 90) {
            counts[0]++;
        } else if (score >= 80 && score < 90) {
            counts[1]++;
        } else if (score >= 70 && score < 80) {
            counts[2]++;
        } else if (score >= 60 && score < 70) {
            counts[3]++;
        } else if (score < 60) {
            counts[4]++;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%zu\n", counts[i]);
    }
    printf("%.1f\n%zu-%zu\n", (double)sum / n, min, max);
    return 0;
}
