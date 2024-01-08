#include <stdio.h>
#include <string.h>

int main() {
    char c[50] = {'^'};
    int flag = 0, sum = 0;
    fgets(c, 50, stdin);
    for (int i = 0; i < 50; i++) {
        if (c[i] >= '0' && c[i] <= '9') {
            flag = 1;
            sum += c[i] - '0';
        } else if (c[i] >= 'A' && c[i] <= 'F') {
            sum += c[i] - 'A' + 10;
        } else if (c[i] >= 'a' && c[i] <= 'f') {
            sum += c[i] - 'a' + 10;
        }
    }
    if (flag == 0) {
        printf("NO\n");
    } else {
        printf("%d\n", sum);
    }

    return 0;
}
