#include <stdio.h>
#include <string.h>

int main(void) {
    char m[4], s[51];
    size_t len_m, len_s, i, count = 0;
    scanf("%s%ln", m, &len_m);
    scanf("%s%ln", s, &len_s);
    for (i = 0; i <= len_s - len_m; i++) {
        if (memcmp(s + i, m, len_m) == 0) {
            count++;
        }
    }
    printf("%lu\n", count);
    return 0;
}
