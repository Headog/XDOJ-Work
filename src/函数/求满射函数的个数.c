#include <math.h>
#include <stdio.h>

#define NUMS(CHARS) ((CHARS - 1) / 2)

int main(void) {
    size_t m, n, read;
    scanf("%*s%ln", &read);
    m = NUMS(read);
    scanf("%*s%ln", &read);
    n = NUMS(read);
    printf("%zu\n", (size_t)pow(n, m) - 2);
    return 0;
}
