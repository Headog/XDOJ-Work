#include <stdio.h>

int main(void) {
    int n;
    int even[50], odd[50];
    scanf("%d", &n);
    for (int i = 0; i < n / 2; i++) {
        scanf("%d", &odd[i]);
        scanf("%d", &even[i]);
    }
    if (n % 2 == 1) {
        scanf("%d", &odd[n / 2]);
    }
    for (int i = 0; i < n / 2; i++) {
        printf("%d ", odd[i]);
    }
    if (n % 2 == 1) {
        printf("%d ", odd[n / 2]);
    }
    for (int i = 0; i < n / 2; i++) {
        printf("%d ", even[i]);
    }
    return 0;
}
