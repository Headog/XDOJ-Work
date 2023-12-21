#include <stdio.h>

int sum_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n >= 10) {
        n = sum_digits(n);
    }
    printf("%d\n", n);
    return 0;
}
