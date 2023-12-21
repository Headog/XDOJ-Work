#include <stdio.h>

int main() {
    float temp;
    scanf("%f", &temp);
    printf("%.2f\n", (temp - 32) * 5 / 9);
    return 0;
}
