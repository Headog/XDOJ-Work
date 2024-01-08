#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a1, a2, n, num, loc = 0, i = 0;
    char str[2] = {'^'};
    int *nums;
    scanf("%d%d%d", &a1, &a2, &n);
    nums = (int *)malloc((n + 1) * sizeof(int));
    nums[0] = a1;
    nums[1] = a2;
    for (int index = 2; index < n;) {
        num = nums[i] * nums[i + 1];
        i++;
        sprintf(str, "%d", num);
        while (str[loc] >= '0' && str[loc] <= '9') {
            nums[index] = str[loc] - '0';
            loc++;
            index++;
        }
        loc = 0;
        str[0] = {'^'};
        str[1] = {'^'};
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    free(nums);
    return 0;
}
