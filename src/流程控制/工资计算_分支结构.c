#include <stdio.h>

int main() {
    int S, A, tax;
    scanf("%d", &S);
    A = S - 3500;
    if (A <= 0) {
        tax = 0;
    } else if (A <= 1500) {
        tax = A * 0.03;
    } else if (A <= 4500) {
        tax = (A - 1500) * 0.10 + 45;
    } else if (A <= 9000) {
        tax = (A - 4500) * 0.20 + 345;
    } else if (A <= 35000) {
        tax = (A - 9000) * 0.25 + 1245;
    } else {
        tax = (A - 35000) * 0.30 + 7745;
    }
    printf("%d\n", S - tax);
    return 0;
}
