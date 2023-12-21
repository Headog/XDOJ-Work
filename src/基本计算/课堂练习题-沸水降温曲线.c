#include <stdio.h>

float c(float t) {
    if (0 <= t && t <= 10) {
        return 100 - 5 * t;
    } else if (10 < t && t <= 30) {
        return 60 - t;
    } else if (30 < t && t <= 50) {
        return 45 - t / 2;
    } else {
        return 20;
    }
}

int main() {
    float m, s;
    scanf("%f %f", &m, &s);
    printf("%.1f\n", c(m + s / 60));
    return 0;
}
