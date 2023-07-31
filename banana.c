#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 60000; i >= 0; i--) {
        printf("Time remaining: %d\r", i);
        fflush(stdout);
        usleep(1);
    }
    return 0;
}
