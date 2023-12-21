#include <stdio.h>
#include <stdlib.h>
#define NUMS 4

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
    int nums[4];
    for (int i = 0; i < NUMS; i++) {
        scanf("%d", &nums[i]);
    }
    qsort(nums, NUMS, sizeof(int), compare);
    for (int i = 0; i < NUMS; i++) {
        printf("%d ", nums[i]);
    }
    putchar('\n');
    return 0;
}
