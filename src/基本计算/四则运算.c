#include <stdio.h>

int eval(int a, int b, char opt) {
    switch (opt) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    }
    return -1;
}

int main() {
    int a, b;
    char opt;
    scanf("%d%c%d", &a, &opt, &b);
    printf("%d%c%d=%d\n", a, opt, b, eval(a, b, opt));
    return 0;
}
