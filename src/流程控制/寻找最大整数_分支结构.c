#include <stdio.h>

int main() {
    int num, max_num = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num);
        if (num > max_num) {
            max_num = num;
        }
    }
    printf("%d\n", max_num);
    return 0;
}
