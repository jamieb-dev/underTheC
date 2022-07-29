#include <stdio.h>
#include <stdlib.h>
#include <sys/_types.h>


// prototyping: saves you from having to restructure/ reorder your code.
// just type the functions signature abode the main() function

void sayHi(char name[], int age);
int max(int a, int b);
int result;

int main() {


    sayHi("john", 4);
    printf("%d", max(5, 10));



    return 0;
}

void sayHi(char name[], int age) {
    printf("Hi %s.\n", name);
    printf("You are %d years old.\n", age);
    }

char[5] max(int a, int b){
    if(a < b) {
        result = b;
    } else if (a > b) {
        result = a;
    }
    printf("%d", result);
}
