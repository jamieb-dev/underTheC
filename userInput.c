#include <stdio.h>
#include <stdlib.h>

int main() {
    
    
    char quote[100];
    printf("Do you have a favourite quote? \n");
    fgets(quote, 100, stdin);
    printf("%s\n", quote);


    // single word input
    char name[20];
    printf("Please enter your name: ");
    scanf("%s", name);


// multiple word input (does not work in conjuntion to scanf. Pick one or the other.)
  



    // single number input
    int age;
    printf("And how old are you %s?\n", name);
    scanf("%d", &age);
    printf("Your are %d years old.\n", age);



    





    return 0;
}