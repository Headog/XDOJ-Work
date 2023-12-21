#include <stdio.h>

int main() {
    int n, amount, counts[6] = {0}, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &amount);
        sum += amount;
        if (amount >= 0 && amount <= 50) {
            counts[0]++;
        } else if (amount >= 51 && amount <= 100) {
            counts[1]++;
        } else if (amount >= 101 && amount <= 150) {
            counts[2]++;
        } else if (amount >= 151 && amount <= 200) {
            counts[3]++;
        } else if (amount >= 201 && amount <= 300) {
            counts[4]++;
        } else if (amount > 300) {
            counts[5]++;
        }
    }
    printf("%.2f\n", (float)sum / n);
    for (int i = 0; i < 6; i++) {
        printf("%d ", counts[i]);
    }
    putchar('\n');
    return 0;
}
