#include <stdlib.h>

unsigned int x = 0;

void does_not_terminate(void) {
    while (x >= 0) x++;
}

int main(void) {
    atexit(does_not_terminate);
    return 0;
}
