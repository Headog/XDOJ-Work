#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(void) {
    struct timeval clock;
    gettimeofday(&clock, NULL);
    srand(clock.tv_usec);
    if (rand() % 5 < 2) {
        puts("Y");
    } else {
        puts("N");
    }
    return 0;
}
