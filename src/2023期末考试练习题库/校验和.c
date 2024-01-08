#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    getchar();
    char input[140];
    fgets(input, 7 * n, stdin);
    for (int i = 0; i < 7 * n; i++) {
        if ('0' <= input[i] && '9' >= input[i]) {
            sum += input[i] - '0';
        }
    }
    printf("%d\n", sum % 10);

    return 0;
}
