#include <stdio.h>

int main(void) {
    char str[50];
    size_t m;
    fgets(str, 49, stdin);
    scanf("%zu", &m);
    puts(str + m + 1);
}
