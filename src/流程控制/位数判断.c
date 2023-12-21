#include <stdio.h>

int main() {
    int m, digits = 1;
    scanf("%d", &m);
    while (m /= 10) {
        digits++;
    }
    printf("%d\n", digits);
    return 0;
}
