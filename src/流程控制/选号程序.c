#include <stdio.h>

int sum_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, id, sum, max_id = 0, sub_max_sum = 0, max_sum = 0, max_sum_id = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &id);
        sum = sum_digits(id);
        if (sum > max_sum) {
            max_sum = sum;
            max_sum_id = id;
        } else if (sum == max_sum) {
            sub_max_sum = sum;
        }
        if (id > max_id) {
            max_id = id;
        }
    }
    if (sub_max_sum == max_sum) {
        printf("%d\n", max_id);
    } else {
        printf("%d\n", max_sum_id);
    }
    return 0;
}
