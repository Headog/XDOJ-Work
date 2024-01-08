#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int n, min, max, index_min = 0, index_max = 0;
    int *nums;
    scanf("%d", &n);
    nums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    min = nums[0];
    max = nums[0];

    for (int i = 0; i < n; i++) {
        if (nums[i] < min) {
            index_min = i;
            min = nums[i];
        }
        if (nums[i] > max) {
            index_max = i;
            max = nums[i];
        }
    }
    swap(nums, nums + index_min);
    if (index_max == 0) {
        index_max = index_min;
    }
    swap(nums + n - 1, nums + index_max);
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    free(nums);
    return 0;
}
