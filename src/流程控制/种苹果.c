#include <stdio.h>

int main() {
    int n, t, max_remove_round = 1, remove, max_remove = 0;
    scanf("%d %d", &n, &t);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &remove);
        t += remove;
        if (remove < 0 && remove < max_remove) {
            max_remove_round = i;
            max_remove = remove;
        }
    }
    printf("%d %d\n", t, max_remove_round);
    return 0;
}
