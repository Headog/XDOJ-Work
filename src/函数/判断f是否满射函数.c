#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) { return *((long *)a) - *((long *)b); }

int main(void) {
    size_t n;
    char read[50];
    scanf("%zu", &n);
    long record[n];
    for (size_t i = 0; i < n; i++) {
        record[i] = LONG_MIN;
    }
    getchar();
    fgets(read, 6 * n, stdin);
    if (strlen(read) != 6 * n - 1) {
        puts("N");
        return 0;
    }
    for (size_t i = 0; i < n; i++) {
        record[i] = read[3 + 6 * i];
    }
    qsort(record, n, sizeof(long), compare);
    for (size_t i = 0; i < n - 1; i++) {
        if (record[i] == record[i + 1]) {
            puts("N");
            return 0;
        }
    }
    puts("Y");
    return 0;
}
