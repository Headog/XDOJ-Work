#include <math.h>
#include <stdio.h>

#define PI 3.1415926
#define iron_factor 7.86
#define gold_factor 19.3
#define volume(d) pow(d, 3) * PI / 6

int main() {
    float iron, gold;
    scanf("%f%f", &iron, &gold);
    printf("%.3f %.3f\n", volume(iron / 10) * iron_factor,
           volume(gold / 10) * gold_factor);
    return 0;
}
