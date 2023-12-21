#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n, num, times = 0;
    long k;
    scanf("%zu%zu", &n, &k);
    long indexes[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &num);
        if (num == k) {
            indexes[times++] = i;
        }
    }
    if (times == 0) {
        puts("-1");
    } else {
        for (size_t i = 0; i < times; i++) {
            printf("%ld ", indexes[i]);
        }
        putchar('\n');
    }
    return 0;
}
