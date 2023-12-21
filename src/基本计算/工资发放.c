#include <stdio.h>

int main() {
    unsigned salary;
    scanf("%u", &salary);
    printf("%u ", salary / 100);
    salary %= 100;
    printf("%u ", salary / 50);
    salary %= 50;
    printf("%u ", salary / 20);
    salary %= 20;
    printf("%u ", salary / 10);
    salary %= 10;
    printf("%u ", salary / 5);
    salary %= 5;
    printf("%u\n", salary);
    return 0;
}
