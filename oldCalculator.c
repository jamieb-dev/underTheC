#include <stdio.h>

void add(double a , double b) {
    printf("%lf\n", (a + b));
}

void sub(double a, double b) {
    printf("%lf\n", (a - b));
}

void div(double a, double b) {
    printf("%lf\n", (a / b));
    
}

void mul(double a, double b) {
    printf("%lf\n", (a * b));
}




int main() {

    printf("num1: ");
    double num1;
    scanf("%lf", &num1);
    printf("Operator: ");
    char operator;
    scanf(" %c", &operator);
    printf("num1: ");
    double num2;
    scanf("%lf", &num2);

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
        printf("invalid operator: '%c' \n", operator);
        return 1;
    }


    return 0;
}