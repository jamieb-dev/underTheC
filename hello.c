#include <stdio.h>

int main() {
    char name[] = "John";
    int age = 35;
    char grade = 'A';
    char favTeacher[] = "Mrs Battleaxe";
    

    printf("Your name is %s.\n", name);
    printf("You are %d years old.\n", age);
    printf("When I was %d, I was a grade %c studen and my favourite teacher was %s.\n", age, grade, favTeacher);
    return 0;
}