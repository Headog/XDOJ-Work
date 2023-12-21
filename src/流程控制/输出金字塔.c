#include <stdio.h>

char max_ch;

void print_chars(char ch) {
    putchar(ch);
    if (ch == max_ch) {
        return;
    }
    print_chars(ch + 1);
    putchar(ch);
}

int main() {
    char c;
    scanf("%c", &c);
    for (int i = 'A'; i <= c; i++) {
        for (int j = 0; j < c - i; j++) {
            putchar(' ');
        }
        max_ch = i;
        print_chars('A');
        putchar('\n');
    }
    return 0;
}
