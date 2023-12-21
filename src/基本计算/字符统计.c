#include <stdio.h>

int main() {
    char c1, c2, c3, c4, c5;
    int count = 0;
    scanf("%c %c %c %c %c", &c1, &c2, &c3, &c4, &c5);
    if (c1 == 'A' || c1 == 'a') {
        count++;
    }
    if (c2 == 'A' || c2 == 'a') {
        count++;
    }
    if (c3 == 'A' || c3 == 'a') {
        count++;
    }
    if (c4 == 'A' || c4 == 'a') {
        count++;
    }
    if (c5 == 'A' || c5 == 'a') {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
