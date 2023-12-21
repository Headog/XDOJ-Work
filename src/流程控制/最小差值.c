#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
    int n, nums[1000], delta = 9999, temp_delta;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    qsort(nums, n, sizeof(int), cmpfunc);
    for (int i = 0; i < n - 1; i++) {
        temp_delta = nums[i + 1] - nums[i];
        if (temp_delta < delta) {
            delta = temp_delta;
        }
    }
    printf("%d\n", delta);
    return 0;
}
