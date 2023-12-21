#include <stdio.h>

int main() {
    unsigned num;
    scanf("%u", &num);
    if (num % 5 == 0 && num % 7 == 0) {
        puts("yes");
    } else {
        puts("no");
    }
    return 0;
}
