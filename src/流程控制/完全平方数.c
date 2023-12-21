#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int m = 0; m <= n; m++) {
        if (m * m == n) {
            printf("%d\n", m);
            return 0;
        }
    }
    puts("no");
    return 0;
}
