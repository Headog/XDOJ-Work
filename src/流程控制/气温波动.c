#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp, last_temp, max_delta = 0, delta;
    scanf("%d %d", &n, &last_temp);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &temp);
        delta = abs(temp - last_temp);
        if (delta > max_delta) {
            max_delta = delta;
        }
        last_temp = temp;
    }
    printf("%d\n", max_delta);
    return 0;
}
