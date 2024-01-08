#include <stdio.h>

const unsigned long pattern[] = {3, 5, 7};

int main(void) {
    size_t n, i, progress = 0, count = 0;
    unsigned long num;
    scanf("%lu", &n);
    for (i = 0; i < n; i++) {
        scanf("%lu", &num);
        if (num != pattern[progress]) {
            progress = 0;
        }
        if (num == pattern[progress]) {
            progress++;
        }
        if (progress == 3) {
            count++;
            progress = 0;
        }
    }
    printf("%lu\n", count);
    return 0;
}
