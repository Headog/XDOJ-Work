#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a * a + b * b == c * c) {
        printf("%d\n", a * b);
    } else if (a * a + c * c == b * b) {
        printf("%d\n", a * c);
    } else if (b * b + c * c == a * a) {
        printf("%d\n", b * c);
    } else {
        puts("no");
    }
    return 0;
}
