#include <stdio.h>

int main() {
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        printf("%c ", c);
    }
    putchar('\n');
    for (c = 'z'; c >= 'a'; c--) {
        printf("%c ", c);
    }
    putchar('\n');
    return 0;
}
