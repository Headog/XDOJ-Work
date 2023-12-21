#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char password[51] = {0};
    bool hasUpper = false, hasLower = false, hasDigit = false,
         hasSymbol = false;
    unsigned long score = 0, type = 0;
    size_t length = 0;
    scanf("%s%ln", password, &length);
    if (length > 0) {
        score = 1;
    }
    for (size_t i = 0; i < length; i++) {
        if (isupper(password[i]) && !hasUpper) {
            type++;
            hasUpper = true;
        } else if (islower(password[i]) && !hasLower) {
            type++;
            hasLower = true;
        } else if (isdigit(password[i]) && !hasDigit) {
            type++;
            hasDigit = true;
        } else if (ispunct(password[i]) && !hasSymbol) {
            type++;
            hasSymbol = true;
        }
    }
    if (length > 8) {
        score++;
    }
    if (type == 2) {
        score++;
    } else if (type == 3) {
        score += 2;
    } else if (type == 4) {
        score += 3;
    }
    printf("%zu\n", score);
    return 0;
}
