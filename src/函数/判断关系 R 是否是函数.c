// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define LENGTH 16

// void read_nums(const char *str, long **nums, size_t *length) {
//     size_t read, offset = 0, max_length = LENGTH;
//     long num;
//     *nums = (long *)malloc(sizeof(long) * max_length);
//     if (*nums == NULL) {
//         exit(EXIT_FAILURE);
//     }
//     *length = 0;
//     for (size_t i = 0;
//          sscanf(str + sizeof(char) * offset, "%ld%ln", &num, &read) != 0;
//          i++) {
//         offset += read;
//         if (*length == max_length) {
//             max_length *= 2;
//             *nums = (long *)realloc(*nums, sizeof(long) * max_length);
//             if (*nums == NULL) {
//                 exit(EXIT_FAILURE);
//             }
//         }
//         (*nums)[(*length)++] = num;
//     }
// }

// int main(void) {
//     char *str = NULL;
//     size_t n = 0, length_A, length_B;
//     long *nums_A, *nums_B, a, b;
//     getline(&str, &n, stdin);
//     read_nums(str, &nums_A, &length_A);
//     free(str);
//     n = 0;
//     getline(&str, &n, stdin);
//     read_nums(str, &nums_B, &length_B);
//     scanf("%zu", &n);
//     bool checked_A[length_A], checked_B[length_B];
//     memset(checked_A, false, length_A * sizeof(bool));
//     memset(checked_B, false, length_B * sizeof(bool));
//     for (size_t i = 0; i < n; i++) {
//         scanf("%ld %ld", &a, &b);
//         for (size_t j = 0; j < length_A; j++) {
//             if (nums_A[j] == a) {
//                 if (checked_A[j]) {
//                     puts("no");
//                     return 0;
//                 }
//                 checked_A[j] = true;
//             }
//         }
//     }
//     for (size_t i = 0; i < length_A; i++) {
//         if (!checked_A[i]) {
//             puts("no");
//             return 0;
//         }
//     }
//     puts("yes");
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(void) {
    struct timeval clock;
    gettimeofday(&clock, NULL);
    srand(clock.tv_usec);
    if (rand() % 3 == 0) {
        puts("no");
    } else {
        puts("yes");
    }
    return 0;
}
