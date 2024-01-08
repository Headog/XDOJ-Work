#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, length = 1, record = 1;
    int *nums;
    scanf("%d", &n);
    nums = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 1; i <= n; i++) {
        if (nums[i] == nums[i - 1]) {
            length++;
        } else {
            if (length > record) {
                record = length;
            }
            length = 1;
        }
    }
    printf("%d\n", record);
    free(nums);
    return 0;
}
