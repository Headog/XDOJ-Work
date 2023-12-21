#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct num_freq_entry {
    long num;
    unsigned long freq;
    size_t occurs[MAX_SIZE];
};

typedef struct {
    struct num_freq_entry entries[MAX_SIZE];
    size_t size_of_map;
} num_freq_map;

int main(void) {
    long num;
    size_t index = 0;
    num_freq_map *nfmap = (num_freq_map *)malloc(sizeof(num_freq_map));
    struct num_freq_entry *temp_entry, *max_freq_entry = nfmap->entries;
    for (nfmap->size_of_map = 0; scanf("%ld", &num) != EOF; index++) {
        temp_entry = NULL;
        for (size_t i = 0; i < nfmap->size_of_map; i++) {
            if (nfmap->entries[i].num == num) {
                temp_entry = nfmap->entries + i;
            }
        }
        if (temp_entry == NULL) {
            nfmap->entries[nfmap->size_of_map].num = num;
            nfmap->entries[nfmap->size_of_map].occurs[0] = index;
            nfmap->entries[nfmap->size_of_map++].freq = 1;
        } else {
            temp_entry->occurs[temp_entry->freq++] = index;
            if (temp_entry->freq > max_freq_entry->freq) {
                max_freq_entry = temp_entry;
            }
        }
    }
    printf("%ld\n", max_freq_entry->num);
    for (index = 0; index < max_freq_entry->freq; index++) {
        printf("%zu ", max_freq_entry->occurs[index]);
    }
    putchar('\n');
    free(nfmap);
    return 0;
}
