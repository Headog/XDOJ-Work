#include <stdio.h>

int main() {
    char c;
    unsigned char sum = 0;
    while ((c = getchar()) != EOF) {
        sum += c;
    }
    printf("%hhu\n", sum);
    return 0;
}
