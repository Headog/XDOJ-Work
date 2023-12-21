#include <stdio.h>

#define DELTA ('a' - 'A')

int main() {
    char c;
    scanf("%c", &c);
    if ('A' <= c && c <= 'Z') {
        putchar(c + DELTA);
    } else if ('a' <= c && c <= 'z') {
        putchar(c - DELTA);
    } else {
        putchar(c);
    }
    putchar('\n');
    return 0;
}
