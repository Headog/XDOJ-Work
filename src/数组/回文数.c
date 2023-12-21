#include <stdbool.h>
#include <stdio.h>

bool is_sym(char *s, size_t len) {
    for (size_t i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    char num_str[10];
    size_t len;
    long sum = 0;
    scanf("%s%ln", num_str, &len);
    if (is_sym(num_str, len)) {
        for (size_t i = 0; i < len; i++) {
            sum += num_str[i];
        }
        printf("%ld\n", sum - len * '0');
    } else {
        puts("no");
    }
    return 0;
}
