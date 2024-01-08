#include <stdio.h>

int main(void) {
    double s, fare = 0;
    unsigned long t;
    scanf("%lf%lu", &s, &t);
    if (s <= 3) {
        fare = 10;
    } else if (3 < s && s <= 10) {
        fare = 10 + (s - 3) * 2;
    } else {
        fare = 24 + (s - 10) * 3;
    }
    fare += t / 5 * 2;
    printf("%.1lf\n", fare);
    return 0;
}
