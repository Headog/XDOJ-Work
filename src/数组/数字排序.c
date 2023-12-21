#include <stdio.h>
#include <stdlib.h>

struct nums_pair {
    long num;
    long digits_sum;
};

int compare_nums_pair(const void *a, const void *b) {
    if (((struct nums_pair *)a)->digits_sum ==
        ((struct nums_pair *)b)->digits_sum) {
        return ((struct nums_pair *)a)->num -
               ((struct nums_pair *)b)->num;
    }
    return ((struct nums_pair *)b)->digits_sum -
           ((struct nums_pair *)a)->digits_sum;
}

long sum_digits(long num) {
    long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(void) {
    long n;
    scanf("%ld", &n);
    struct nums_pair pairs[n];
    for (size_t i = 0; i < n; i++) {
        scanf("%ld", &pairs[i].num);
        pairs[i].digits_sum = sum_digits(pairs[i].num);
    }
    qsort(pairs, n, sizeof(struct nums_pair), compare_nums_pair);
    for (size_t i = 0; i < n; i++) {
        printf("%ld %ld\n", pairs[i].num, pairs[i].digits_sum);
    }
    return 0;
}
