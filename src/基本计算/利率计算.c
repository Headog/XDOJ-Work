#include <math.h>
#include <stdio.h>

int main() {
    float r, n;
    scanf("%f %f", &r, &n);
    printf("%.2f\n", pow(1 + r, n));
    return 0;
}
