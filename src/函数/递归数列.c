double function(int n) {
    double a = 1;
    for (unsigned long i = 1; i < n; i++) {
        a = 1 / (1 + a);
    }
    return a;
}
