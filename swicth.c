#include <stdio.h>
#include <stdlib.h>

void greet();
void hello(char user[20]);

int main() {
    greet();
}

void greet() {
    printf("Please enter your name.\n");
    char name[20];
    fgets(name, 20, stdin);
    printf("Nice to meet you %s", name);

}

void hello(char user[20]) {
    printf("Hello %s!\n", user);
}