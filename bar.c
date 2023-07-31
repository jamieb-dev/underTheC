#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    printf("Loading: ");
    for (i = 0; i <= 100; i++) {
        printf("%c", '=');
        fflush(stdout);
        usleep(100000);
    }
    printf("\nDone!\n");
    return 0;
}
