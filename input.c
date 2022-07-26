#include <stdio.h>
#include <stdlib.h>

char name[20];
int age;

void getName() {
    printf("What's your name?\n");
    fgets(name, 20, stdin);
    printf("Pleased to meet you %s", name);

}

void getAge() {
    printf("And how old are you %s?\n", name);
    scanf("%d", &age);
    printf("Your name is %s and you are %d years old.\n", name, age);
}


int main() {
    getName();
    getAge();
    return 0;
}