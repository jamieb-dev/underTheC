// TASKS
// Create a bar that increases up to 10
// Start with [----------] and replace each - with a # incrementally







#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <memory.h>

// prototypes
void refresh(void);


char *bar;

int main(void){
    bar = malloc(50);
    strcpy(bar, "[-------------------]");
    int barLen = ((sizeof(bar)) / (sizeof(char)));
    //printf("%s\n", bar);
    /*for(int i = 0; i < barLen; i++){
        printf("");
        }
        */
    for(int i = 1; i < barLen; i++){
        strcpy(&bar[i], "#");

        refresh();




    }

   // printf("%s\n", bar);
    free(bar);
return 0;}

void refresh(void){
    system("clear");
    printf("%s\n", bar);
    usleep(200000);
    }
