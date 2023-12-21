#include <stdio.h>

int main() {
    int n, count = 0, max = 0, min = 9, digit;
    scanf("%d", &n);
    do {
        digit = n % 10;
        if (digit > max) {
            max = digit;
        }
        if (digit < min) {
            min = digit;
        }
        n /= 10;
        count++;
    } while (n != 0);
    printf("%d %d %d\n", count, max, min);
    return 0;
}
