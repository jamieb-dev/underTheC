// Simple quiz game

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int greet() {
    printf("Would you like to play?\n");
    char playing[5];
    scanf("%s", playing);
    if(strcmp(playing, "yes") == 0) {
        printf("Great.");
        return 0;
    } else {
        printf("'yes' not entered. Quitting...");
        exit(0);

    }
    }



int main() {
    greet();
    if (greet() == 1) {
    printf("Testing...");
    }
}