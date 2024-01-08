#include <stdio.h>

int main() {
    float s, fare = 0;
    int t;
    scanf("%f %d", &s, &t);
    if (s <= 3) {
        fare = 10;
    } else if (3 < s && s <= 10) {
        fare = 10 + (s - 3) * 2;
    } else {
        fare = 24 + (s - 10) * 3;
    }
    fare += (float)t / 5 * 2;
    printf("%.0f\n", fare);
    return 0;
}
