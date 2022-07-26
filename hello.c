#include <stdio.h>

int main() {
    char name[] = "John";
    int age = 35;
    char grade = 'A';
    char favTeacher[] = "Mrs Battleaxe";
    double averageScore = 95.5;
    int array[5] = [1, 2, 3, 4, 5];
    

    printf("Your name is %s.\n", name);
    printf("You are %d years old.\n", age);
    printf("When I was %d, I was a grade %c studen and my favourite teacher was %s.\n", age, grade, favTeacher);
    printf("She gave me an average score of %f %%. \n", averageScore);
    return 0;
}