#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const bool afalse = false;

const char *func_type[] = {"nf", "f", "d", "m", "s"};

void read_nums_set(const char *str, long *nums, size_t *length) {
    size_t read, offset = 0;
    long num;
    *length = 0;
    for (size_t i = 0;
         sscanf(str + sizeof(char) * offset, "%*[{, ]%ld%ln", &num, &read) != 0;
         i++) {
        offset += read;
        nums[(*length)++] = num;
    }
}

void read_nums_pairs_set(const char *str, long nums[][2], size_t *length) {
    size_t read, offset = 0;
    long num1, num2;
    *length = 0;
    for (size_t i = 0;
         sscanf(str + sizeof(char) * offset, "%*[{<>, ]%ld%*[, ]%ld%ln", &num1,
                &num2, &read) != 0;
         i++) {
        offset += read;
        nums[(*length)][0] = num1;
        nums[(*length)++][1] = num2;
    }
}

int compare_long(const void *a, const void *b) {
    return *(long *)a - *(long *)b;
}

int compare_bool(const void *a, const void *b) {
    return *(bool *)a != *(bool *)b;
}

const char *check_func_type(const long domain[], const long range[],
                            long relations[][2], size_t length_of_domain,
                            size_t length_of_range,
                            size_t length_of_relations) {
    bool checked_domain[length_of_domain];
    bool checked_range[length_of_range];
    bool repeated_range = false, repeated_domain = false;
    long *search_result;
    memset(checked_domain, false, sizeof(bool) * length_of_domain);
    memset(checked_range, false, sizeof(bool) * length_of_range);
    for (size_t i = 0; i < length_of_relations; i++) {
        search_result =
            (long *)bsearch(relations[i] + 1, range, length_of_range,
                            sizeof(long), compare_long);
        if (checked_range[search_result - range]) {
            repeated_range = true;
            if ((long *)bsearch(&range[search_result - range], domain,
                                length_of_range, sizeof(long),
                                compare_long) != NULL &&
                (checked_domain[(long *)bsearch(&range[search_result - range],
                                                domain, length_of_range,
                                                sizeof(long), compare_long) -
                                domain])) {
                return func_type[0];
            }
        }
        checked_domain[(long *)bsearch(relations[i], domain, length_of_domain,
                                       sizeof(long), compare_long) -
                       domain] = true;
        checked_range[search_result - range] = true;
    }
    if (bsearch(&afalse, checked_domain, length_of_domain, sizeof(bool),
                compare_bool) != NULL) {
        return func_type[0];
    }
    if (bsearch(&afalse, checked_range, length_of_range, sizeof(bool),
                compare_bool) == NULL) {
        if (repeated_range) {
            return func_type[3];
        } else {
            return func_type[4];
        }
    }
    if (repeated_range) {
        return func_type[1];
    } else {
        return func_type[2];
    }
}

int main(void) {
    long domain[32], range[32], relations[32][2];
    char *str = NULL;
    size_t n = 0, length_of_domain, length_of_range, length_of_relations;
    getline(&str, &n, stdin);
    read_nums_set(str, domain, &length_of_domain);
    free(str);
    n = 0;
    getline(&str, &n, stdin);
    read_nums_set(str, range, &length_of_range);
    free(str);
    n = 0;
    getline(&str, &n, stdin);
    read_nums_pairs_set(str, relations, &length_of_relations);
    for (size_t i = 0; i < length_of_relations; i++) {
        printf("%ld %ld\n", relations[i][0], relations[i][1]);
    }
    putchar('{');
    for (size_t i = 0; i < length_of_domain; i++) {
        if (i == length_of_domain - 1) {
            printf("%ld", domain[i]);
        } else {
            printf("%ld,", domain[i]);
        }
    }
    printf("} -> {");
    for (size_t i = 0; i < length_of_range; i++) {
        if (i == length_of_range - 1) {
            printf("%ld", range[i]);
        } else {
            printf("%ld,", range[i]);
        }
    }
    printf("}:%s\n",
           check_func_type(domain, range, relations, length_of_domain,
                           length_of_range, length_of_relations));
    return 0;
}
