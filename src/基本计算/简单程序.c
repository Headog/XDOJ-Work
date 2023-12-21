#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 != 0 && num % 5 != 0) {
        puts("Nice");
    } else if (num % 3 == 0 && num % 2 != 0 && num % 5 != 0) {
        puts("Good");
    } else if (num % 5 == 0 && num % 2 != 0 && num % 3 != 0) {
        puts("Best");
    } else {
        puts("Bad");
    }
    return 0;
}
