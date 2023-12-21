#include <stdio.h>

int main() {
    int n, current_num, last_num, count = 1;
    scanf("%d %d", &n, &last_num);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &current_num);
        if (current_num != last_num) {
            count++;
            last_num = current_num;
        }
    }
    printf("%d\n", count);
    return 0;
}
