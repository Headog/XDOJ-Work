#include <stdio.h>

int dis(int x, int y) {
    if (y > -x)
        return 1;
    return 2;
}

int main() {
    int n, x, y;
    scanf("%d", &n);
    int signal[20];
    for (int i = 0; i < n; i++) {
        signal[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        scanf("%d", &y);
        signal[i] = dis(x, y);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", signal[i]);
    }
    return 0;
}