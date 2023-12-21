#include <stdio.h>
#include <string.h>

int is_sym(char *s) {
    const int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[101];
    scanf("%s", s);
    if (is_sym(s)) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}
