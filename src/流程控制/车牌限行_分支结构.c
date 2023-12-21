#include <stdio.h>

int main() {
    int weekday, level, id;
    scanf("%d %d %d", &weekday, &level, &id);
    int last_digit = id % 10;
    int is_limited = 0;
    if (weekday == 6 || weekday == 7) {
        printf("%d no\n", last_digit);
        return 0;
    }
    if (200 <= level && level < 400 &&
        (last_digit == weekday || last_digit == (5 + weekday) % 10)) {
        is_limited = 1;
    } else if ((level >= 400) && ((weekday % 2 != 0 && last_digit % 2 != 0) ||
                                  (weekday % 2 == 0 && last_digit % 2 == 0))) {
        is_limited = 1;
    }
    printf("%d ", last_digit);
    if (is_limited) {
        puts("yes");
    } else {
        puts("no");
    }
    return 0;
}
