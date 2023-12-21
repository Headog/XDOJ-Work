#include <stdio.h>

int main() {
    unsigned num;
    scanf("%u", &num);
    if (num % 2 == 0) {
        puts("ż��");
    } else {
        puts("����");
    }
    return 0;
}
