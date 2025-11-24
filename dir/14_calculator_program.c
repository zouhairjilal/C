#include <stdio.h>

int main() {

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator (+ - * /): ");
    scanf("%c", &operator);
    
    printf("Enter number 1: ");
    scanf("%lf", &num1);
    
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    if (operator == '+'){
        result = num1 + num2;
        printf("%.2f", result);
    }
    else if (operator == '-'){
        result = num1 - num2;
        printf("%.2f", result);
    }
    else if (operator == '*'){
        result = num1 * num2;
        printf("%.2f", result);
    }
    else if (operator == '/'){
        result = num1 / num2;
        printf("%.2f", result);
    }
    else {
        printf("%c Not a valid operator", operator);
    }


    return 0;
}
