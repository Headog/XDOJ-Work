#include <math.h>
#include <stdio.h>

int if_is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    scanf("%d", &n);
    m = (int)pow(2.0, n) - 1;
    printf("%d %d\n", m, if_is_prime(m));
    return 0;
}
