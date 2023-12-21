#include <stdio.h>

int main() {
    float s, fee = 0;
    int t;
    scanf("%f %d", &s, &t);
    if (s <= 3) {
        fee = 10;
    } else if (3 < s && s <= 10) {
        fee = 10 + (s - 3) * 2;
    } else {
        fee = 24 + (s - 10) * 3;
    }
    fee += (float)t / 5 * 2;
    printf("%.0f\n", fee);
    return 0;
}
