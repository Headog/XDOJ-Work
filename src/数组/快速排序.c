#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int left = 0, right = n - 1, key = nums[left], hole = left;
    while (left < right) {
        while (left < right && nums[right] >= key) {
            right--;
        }
        nums[hole] = nums[right];
        hole = right;
        while (left < right && nums[left] <= key) {
            left++;
        }
        nums[hole] = nums[left];
        hole = left;
    }
    nums[hole] = key;
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    putchar('\n');
    return 0;
}
