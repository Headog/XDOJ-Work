int fib(int n) {
    int a = 7, b = 11, c;
    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    }
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
