#include <math.h>
#include <stdio.h>

int legal(int n) {
    int m = 0, sum = 0, tmp = n;
    for (;; n /= 10) {
        m++;
        if (n < 10) {
            break;
        }
    }
    n = tmp;
    while (1) {
        sum += pow(n % 10, m);
        if (n < 10) {
            sum += n / pow(10, m - 1);
            break;
        }
        n /= 10;
    }
    if (sum == tmp) {
        return 1;
    }
    return 0;
}

int function(int a, int b) {
    int num = 0;
    scanf("%d %d", &a, &b);
    if (a > b) {
        if (b >= 100) {
            for (int i = b; i <= a; i++) {
                if (legal(i) == 1) {
                    num++;
                }
            }
        } else {
            for (int i = 100; i <= a; i++) {
                if (legal(i) == 1) {
                    num++;
                }
            }
        }
    } else {
        if (a >= 100) {
            for (int i = a; i <= b; i++) {
                if (legal(i) == 1) {
                    num++;
                }
            }
        } else {
            for (int i = 100; i <= b; i++) {
                if (legal(i) == 1) {
                    num++;
                }
            }
        }
    }
    return num;
}
