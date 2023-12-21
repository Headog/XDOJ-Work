#include <stdio.h>

#define lower(c) c + 'a' - 'A'

int main() {
    char a, b, c, d, e;
    scanf("%c|%c|%c|%c|%c", &a, &b, &c, &d, &e);
    printf("%c%c%c%c%c!\n", lower(a), lower(b), lower(c), lower(d), lower(e));
    return 0;
}
