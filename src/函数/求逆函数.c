#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long a;
    long b;
} num_pair;

int compare_pairs(const void *a, const void *b) {
    return ((num_pair *)a)->b - ((num_pair *)b)->b;
}

int main(void) {
    num_pair relations[32];
    size_t length = 0;
    while (scanf("%*[(),]%ld%*[(),]%ld", &relations[length].a,
                 &relations[length].b) != EOF) {
        length++;
    }
    qsort(relations, length, sizeof(num_pair), compare_pairs);
    for (size_t i = 0; i < length; i++) {
        printf("(%ld,%ld)", relations[i].b, relations[i].a);
        if (i != length - 1) {
            putchar(',');
        }
    }
    putchar('\n');
    return 0;
}
