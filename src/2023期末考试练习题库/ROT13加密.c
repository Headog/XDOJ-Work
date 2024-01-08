#include <stdio.h>

int main() {
    char str[61];
    fgets(str, 60, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            if (str[i] + 13 > 'Z') {
                str[i] = 'A' + 12 - ('Z' - str[i]);
            } else {
                str[i] += 13;
            }
        } else if (str[i] <= 'z' && str[i] >= 'a') {
            if (str[i] + 13 > 'z') {
                str[i] = 'a' + 12 - ('z' - str[i]);
            } else {
                str[i] += 13;
            }
        }
    }
    puts(str);
    return 0;
}
