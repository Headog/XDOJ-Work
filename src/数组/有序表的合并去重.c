#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *((int *)a) - *((int *)b); }

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int nums[a + b];
    for (int i = 0; i < a + b; i++) {
        scanf("%d", &nums[i]);
    }
    qsort(nums, a + b, sizeof(int), compare);
    printf("%d ", nums[0]);
    for (int i = 1; i < a + b; i++) {
        if (nums[i] != nums[i - 1]) {
            printf("%d ", nums[i]);
        }
    }
    putchar('\n');
    return 0;
}
