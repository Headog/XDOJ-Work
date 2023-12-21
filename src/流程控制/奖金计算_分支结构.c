#include <stdio.h>

int main() {
    double I;
    double bonus = 0.0;
    scanf("%lf", &I);
    if (I <= 100000) {
        bonus = I * 0.1;
    } else if (I <= 200000) {
        bonus = 2500 + I * 0.075;
    } else if (I <= 400000) {
        bonus = 7500 + I * 0.05;
    } else if (I <= 600000) {
        bonus = 15500 + I * 0.03;
    } else if (I <= 1000000) {
        bonus = 24500 + I * 0.015;
    } else {
        bonus = 29500 + I * 0.01;
    }
    printf("%d\n", (int)bonus);
    return 0;
}
