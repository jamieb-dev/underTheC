#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
    int h, m ,s;
    h = 0;
    m = 0;
    s = 0;


    for(;;){
    system("clear");
    s++;
    if(s>=60){
        m++;
        s = 0;
    };
    if(m>=60){
        h++;
        m = 0;
    }
    printf("TIME: %02i:%02i:%02i\n", h, m, s);
    sleep(1);

    };


    return 0;
}