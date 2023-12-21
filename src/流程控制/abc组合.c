#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for (a = 0; a <= 9; a++) {
        for (b = 0; b <= 9; b++) {
            for (c = 0; c <= 9; c++) {
                if (100 * a + 10 * b + c + 100 * c + 10 * b + a == n) {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}
