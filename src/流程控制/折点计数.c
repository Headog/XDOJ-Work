#include <stdio.h>

int main() {
    int n, count = 0, last_sale, sale;
    int is_rising;
    scanf("%d %d %d", &n, &last_sale, &sale);
    is_rising = sale > last_sale;
    for (int i = 0; i < n - 2; i++) {
        scanf("%d", &sale);
        if ((sale > last_sale) != is_rising) {
            count++;
            is_rising = !is_rising;
        }
        last_sale = sale;
    }
    printf("%d\n", count);
    return 0;
}
