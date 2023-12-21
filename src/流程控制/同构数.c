#include <stdio.h>

int times(int num) {
    int pow10 = 1;
    while (num > 0) {
        pow10 *= 10;
        num /= 10;
    }
    return pow10;
}

int main() {
    int n;
    scanf("%d", &n);
    int i, a, a2;
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        a2 = a * a;
        if (a2 % times(a) == a) {
            printf("%d\n", a);
        } else {
            puts("No");
        }
    }
    return 0;
}
