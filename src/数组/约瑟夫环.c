#include <stdio.h>
#include <stdlib.h>

typedef struct num_node {
    size_t id;
    size_t code;
    struct num_node *next;
} person;

typedef struct {
    person *root;
    size_t size;
} nums_list;

nums_list *create_nums_list(person *root) {
    nums_list *result = (nums_list *)malloc(sizeof(nums_list));
    result->root = root;
    result->size = 1;
    return result;
}

person *create_person(size_t id, size_t code) {
    person *result = (person *)malloc(sizeof(person));
    result->id = id;
    result->code = code;
    result->next = NULL;
    return result;
}

void push_back_persons_list(nums_list *plist, person *new_person) {
    person *now = plist->root;
    while (now->next) {
        now = now->next;
    }
    now->next = new_person;
    plist->size++;
}

person *delete_person(nums_list *plist, person *to_be_deleted) {
    person *now = to_be_deleted;
    while (to_be_deleted != now->next) {
        now = now->next;
    }
    now->next = to_be_deleted->next;
    plist->size--;
    return now->next;
}

void shift_person(person **person, size_t index_diff) {
    while (index_diff--) {
        *person = (*person)->next;
    }
}

void stroke_persons_list(nums_list *plist) {
    person *now = plist->root;
    while (now->next) {
        now = now->next;
    }
    now->next = plist->root;
}

int main(void) {
    size_t n, m, code;
    scanf("%zu%zu%zu", &n, &m, &code);
    nums_list *plist = create_nums_list(create_person(1, code));
    person *now = plist->root;
    for (size_t i = 2; i <= n; i++) {
        scanf("%zu", &code);
        push_back_persons_list(plist, create_person(i, code));
    }
    stroke_persons_list(plist);
    do {
        shift_person(&now, m - 1);
        m = now->code;
        printf("%zu ", now->id);
        now = delete_person(plist, now);
    } while (plist->size != 0);
    putchar('\n');
    return 0;
}
