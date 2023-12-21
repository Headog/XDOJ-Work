#include <stdio.h>

int is_prime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b, count = 0, sum = 0, num = 2;
    scanf("%d %d", &a, &b);
    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    while (count < a + 10) {
        if (is_prime(num)) {
            count++;
            if (count >= a && count <= b) {
                sum += num;
            }
        }
        num++;
    }
    printf("%d\n", sum);
    return 0;
}
