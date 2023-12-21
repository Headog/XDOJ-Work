#include <stdio.h>

int main() {
    int a;
    char b;
    scanf("%d ,%c", &a, &b);
    printf("%d,%d\n", a + b, a - '0' + b);
    return 0;
}
