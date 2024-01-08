#include <stdio.h>

int main() {
    char str1[21], str2[21];
    int n;
    scanf("%s%s%d", str1, str2, &n);
    if (n != 0) {
        for (int i = 0; str1[i] != '\0'; i++) {
            printf("%c", str1[i]);
            if (i == n - 1) {
                printf("%s", str2);
            }
        }
    } else {
        printf("%s%s", str2, str1);
    }
    printf("\n");
    return 0;
}
