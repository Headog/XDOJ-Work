#include <stdio.h>

int sum_fators(int num) {
    int sum = 0;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            sum += num / i;
        }
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (sum_fators(i) == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
