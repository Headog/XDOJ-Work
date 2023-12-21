#include <stdio.h>

int main(void) {
    int n, fresh;
    int sum = 0;
    scanf("%d", &n);
    int arr[n * n];
    for (int i = 0; i < n * n; i++) {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < n * n; i++) {
        scanf("%d", &fresh);
        *(arr + i) = (*(arr + i)) * fresh;
    }
    for (int i = 0; i < n * n; i += n + 1) {
        sum += *(arr + i);
    }
    printf("%d", sum);
    return 0;
}
