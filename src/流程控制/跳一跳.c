#include <stdio.h>

int main() {
    int state, score = 0, bonus = 2;
    while (1) {
        scanf("%d", &state);
        if (state == 0) {
            break;
        } else if (state == 1) {
            score++;
            bonus = 2;
        } else {
            score += bonus;
            bonus += 2;
        }
    }
    printf("%d\n", score);
    return 0;
}
