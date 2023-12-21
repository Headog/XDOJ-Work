#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return *((int *)a) - *((int *)b); }

int main(void) {
    int a, b, index = 0, flag = 0, f = 0;
    scanf("%d", &a);
    int arr1[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &b);
    int arr2[b], arr[a + b], tag[a + b];
    for (int i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr1[i] == arr2[j]) {
                tag[index] = arr2[j];
                index++;
            }
        }
    }
    for (int i = 0; i < a; i++) {
        arr[i] = arr1[i];
    }
    for (int i = a; i < a + b; i++) {
        arr[i] = arr2[i - a];
    }
    qsort(arr, a + b, sizeof(int), compare);
    for (int i = 0; i < a + b; i++) {
        flag = 0;
        for (int j = 0; j < index; j++) {
            if (arr[i] == tag[j]) {
                flag = 1;
            }
        }
        if (flag == 0) {
            printf("%d ", arr[i]);
            f = 1;
        }
    }
    if (f == 0) {
        puts("NULL");
    } else {
        putchar('\n');
    }
    return 0;
}
