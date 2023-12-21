#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
    int a, b, nums[5];
    scanf("%d %d", &a, &b);
    nums[0] = (a + b) * (a + b);
    nums[1] = (a - b) * (a - b);
    nums[2] = a * a + b * b;
    nums[3] = a * a - b * b;
    qsort(nums, 4, sizeof(int), compare);
    printf("%d %d\n", nums[3], nums[0]);
    return 0;
}
