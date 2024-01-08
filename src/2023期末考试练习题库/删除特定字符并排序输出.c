#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_char(const void *a, const void *b) {
    return *(char *)a - *(char *)b;
}

int main(void) {
    char str[101];
    size_t i, j, len;
    fgets(str, 100, stdin);
    len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != '*') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    qsort(str, j, sizeof(char), compare_char);
    puts(str);
    return 0;
}
