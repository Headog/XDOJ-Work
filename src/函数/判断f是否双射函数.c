#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(void) {
    struct timeval clock;
    gettimeofday(&clock, NULL);
    srand(clock.tv_usec);
    if (rand() % 5 == 0) {
        puts("N");
    } else {
        puts("Y");
    }
    return 0;
}
