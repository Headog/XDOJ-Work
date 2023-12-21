#include <stdio.h>

int main(void) {
    int n, temp;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    if (nums[0] > nums[1]) {
        temp = nums[1];
        nums[1] = nums[0];
        nums[0] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
}
