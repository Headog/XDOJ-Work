#include <math.h>
#include <stdio.h>

#define pi 3.14
#define volume(r) pow(r, 3) * pi * 4 / 3

int main() {
    float r;
    scanf("%f", &r);
    printf("%.2f", volume(r));
    return 0;
}
