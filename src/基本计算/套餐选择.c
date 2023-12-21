#include <stdio.h>

int main() {
    float t;
    scanf("%f", &t);
    const float cost_A = t * 0.6;
    const float cost_B = 50.0 + t * 0.4;
    printf("%.2f\n%.2f\n", cost_A, cost_B);
    if (cost_A < cost_B) {
        puts("A");
    } else {
        puts("B");
    }
    return 0;
}
