#include <stdio.h>
#define MONTHS 12

int days_of_months[MONTHS] = {31, -1, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int y, d, m;
    scanf("%d %d", &y, &d);
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
        days_of_months[1] = 29;
    } else {
        days_of_months[1] = 28;
    }
    for (int i = 0; i < MONTHS; i++) {
        if (d - days_of_months[i] <= 0) {
            printf("%d %d\n", i + 1, d);
            return 0;
        }
        d -= days_of_months[i];
    }
    return -1;
}
