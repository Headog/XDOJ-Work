#include <stdio.h>

int main() {
    int n, temp_cel;
    float temp_fah, min = 104, max = 14, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &temp_cel);
        temp_fah = 9.0 / 5 * temp_cel + 32;
        if (temp_fah > max) {
            max = temp_fah;
        }
        if (temp_fah < min) {
            min = temp_fah;
        }
        sum += temp_fah;
        printf("%.1f ", temp_fah);
        if (i % 5 == 0 && i != n) {
            putchar('\n');
        }
    }
    putchar('\n');
    printf("%.1f %.1f %.1f\n", min, max, sum / n);
    return 0;
}
