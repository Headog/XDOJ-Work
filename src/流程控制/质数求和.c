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
    int p, count = 0, sum = 0, num = 2;
    scanf("%d", &p);
    while (count < p + 10) {
        if (is_prime(num)) {
            count++;
            if (count >= p && count <= p + 10) {
                sum += num;
            }
        }
        num++;
    }
    printf("%d\n", sum);
    return 0;
}
