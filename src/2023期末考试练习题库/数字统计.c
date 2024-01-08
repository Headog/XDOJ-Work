#include <stdio.h>
#include <stdlib.h>

int fun(int x) {
    if (x == 1)
        return 2;
    if (x == 2)
        return 3;
    if (x > 2)
        return (x - 1) * (x - 1) + 3 * (x - 2) + 1;
    abort();
}

int main() {
    int m, k, nums[3] = {0};
    scanf("%d%d", &m, &k);
    for (int i = 1; i <= k; i++) {
        if (fun(i) % m == 0) {
            nums[0]++;
            continue;
        }
        if (fun(i) % m == 1) {
            nums[1]++;
            continue;
        }
        nums[2]++;
    }
    printf("%d %d %d\n", nums[0], nums[1], nums[2]);
    return 0;
}
