#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *((int *)a) - *((int *)b); }

int if_tri(int length1[3]) {
    int length[3];
    for (int i = 0; i < 3; i++) {
        length[i] = length1[i];
    }
    qsort(length, 3, sizeof(int), compare);
    if (length[0] > abs(length[1] - length[2]) &&
        length[2] < length[0] + length[1]) {
        return 1;
    }
    return 0;
}

int main() {
    int n, num = 0, length[3];
    int test[3] = {2, 4, 4};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &length[i % 3]);
        if (i > 1 && if_tri(length) == 1) {
            for (int j = 0; j < 3; j++) {
            }
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}
