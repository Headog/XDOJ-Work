#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *((int *)a) - *((int *)b); }

int main(void) {
    int na, nb;
    scanf("%d", &na);
    int a[na];
    for (int i = 0; i < na; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &nb);
    int b[na + nb];
    for (int i = 0; i < nb; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = nb; i < na + nb; i++) {
        b[i] = a[i - nb];
    }
    qsort(b, na + nb, sizeof(int), compare);
    printf("%d ", b[0]);
    for (int i = 1; i < na + nb; i++) {
        if (b[i] != b[i - 1]) {
            printf("%d ", b[i]);
        }
    }
    putchar('\n');
    return 0;
}
