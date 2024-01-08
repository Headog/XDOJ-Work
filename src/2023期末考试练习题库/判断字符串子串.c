#include <stdio.h>
#include <string.h>

int main(void) {
    char str[21], sub[21], *pos;
    fgets(str, 20, stdin);
    fgets(sub, 20, stdin);
    sub[strcspn(sub, "\n")] = '\0';
    pos = strstr(str, sub);
    if (pos == NULL) {
        puts("No!");
    } else {
        printf("%lu\n", pos - str + 1);
    }
    return 0;
}
