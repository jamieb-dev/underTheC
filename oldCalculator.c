#include <stdio.h>

void add(int a , int b) {
    printf("%d", (a + b));
}

void sub(int a, int b) {
    printf("%d", (a - b));
}

void div(int a, int b) {
    printf("%d", (a / b));
    
}

void mul(int a, int b) {
    printf("%d", (a * b));
}




int main() {

    printf("num1: ");
    int num1;
    scanf("%d", &num1);
    printf("Operator: ");
    char operator;
    scanf(" %c", &operator);
    printf("num1: ");
    int num2;
    scanf("%d", &num2);

    switch(operator) {
        case '+' :
        add(num1, num2);
        break;

        case '-' :
        sub(num1, num2);
        break;

        case '*' :
        mul(num1, num2);
        break;

        case '/' :
        div(num1, num2);
        break;  

        default:
        printf("invalid operator.");
        return 1;
    }


    return 0;
}

