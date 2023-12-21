#include <stdbool.h>
#include <stdio.h>

#define SIZE 101

typedef struct {
    size_t x;
    size_t y;
} point;

int main(void) {
    bool painted[SIZE][SIZE] = {false};
    size_t n, count = 0;
    point left_down, right_up;
    scanf("%zu", &n);
    for (size_t i = 0; i < n; i++) {
        scanf("%zu%zu%zu%zu", &left_down.x, &left_down.y, &right_up.x,
              &right_up.y);
        for (size_t j = left_down.y; j < right_up.y; j++) {
            for (size_t k = left_down.x; k < right_up.x; k++) {
                if (!painted[j][k]) {
                    painted[j][k] = true;
                    count++;
                }
            }
        }
    }
    printf("%zu\n", count);
    return 0;
}
