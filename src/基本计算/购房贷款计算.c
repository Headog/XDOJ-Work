#include <math.h>
#include <stdio.h>

int main() {
    float d, p, r;
    scanf("%f %f %f", &d, &p, &r);
    printf("%.2f\n", log(p / (p - d * r)) / log(1 + r));
    return 0;
}
