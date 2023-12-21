#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define N 80

int compare(const void *a, const void *b) { return *(char *)a - *(char *)b; }

int main(void) {
    char str[N], abcs[N];
    size_t length = 0, index_of_abcs = 0;
    scanf("%s%ln", str, &length);
    for (size_t i = 0; i < length; i++) {
        if (isalpha(str[i])) {
            abcs[index_of_abcs++] = toupper(str[i]);
        }
    }
    qsort(abcs, index_of_abcs, sizeof(char), compare);
    index_of_abcs = 0;
    for (size_t i = 0; i < length; i++) {
        if (isalpha(str[i])) {
            putchar(abcs[index_of_abcs++]);
        } else {
            putchar(str[i]);
        }
    }
    putchar('\n');
    return 0;
}
