#include <stdio.h>

int main() {
    float electricity, cost = 0;
    scanf("%f", &electricity);
    if (electricity <= 110) {
        cost = electricity * 0.5;
    } else if (electricity <= 210) {
        cost = 55 + (electricity - 110) * 0.55;
    } else {
        cost = 110 + (electricity - 210) * 0.70;
    }
    printf("%.2lf\n", cost);
    return 0;
}
