#include <stdio.h>

int main(void) {
    int temp, n, arr[200];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            if (arr[i] > arr[i + n / 2]) {
                temp = arr[i];
                arr[i] = arr[i + n / 2];
                arr[i + n / 2] = temp;
            }
        }
    } else if (n % 2 == 1) {
        for (int i = 0; i <= n / 2; i++) {
            if (arr[i] > arr[i + n / 2]) {
                temp = arr[i];
                arr[i] = arr[i + n / 2];
                arr[i + n / 2] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
    return 0;
}
