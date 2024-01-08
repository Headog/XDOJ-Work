#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *((int *)a) - *((int *)b); }

int main() {
    int n, times = 1, record = 0, num;
    scanf("%d", &n);
    int *nums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    qsort(nums, n, sizeof(int), compare);
    if (n > 1) {
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                times++;
            } else {
                if (times > record) {
                    record = times;
                    num = nums[i - 1];
                }
                times = 1;
            }
            if (i == n - 1 && times > record) {
                num = nums[i - 1];
            }
        }
    } else {
        num = nums[0];
    }
    printf("%d\n", num);
    free(nums);
    return 0;
}