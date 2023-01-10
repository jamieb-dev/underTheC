#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <memory.h>

char *bar;

void refresh(void){
    system("clear");
    printf("%s\n", bar);
    usleep(1000000);
}

int main(void){
    bar = malloc(30);
    strcpy(bar, "[----------]");
    int barLen = (sizeof(*bar) / sizeof(char));

    printf("%s\n", bar);

    for(int i = 1; i < (barLen-1); i++){
        strcpy(bar, "#");
        refresh();
    }

    free(bar);
    



    return 0;
}