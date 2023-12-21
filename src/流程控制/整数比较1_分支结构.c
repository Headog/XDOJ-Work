#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("%d %d\n", num1 % 10, num2 * num2);
    } else {
        printf("%d %d\n", num2 % 10, num1 * num1);
    }
    return 0;
}
