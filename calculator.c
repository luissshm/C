#include <stdio.h>

int main(){

    char operator;
    double num1, num2, result;

    printf("\nEnter an operator ( + - * / ): ");
    scanf("%c", &operator);
    
    printf("\nEnter number 1: ");
    scanf("%d", &num1);
    
    printf("\nEnter number 2: ");
    scanf("%d", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %d", result);
        break;

        case '-':
        result = num1 - num2;
        printf("Result: %d", result);
        break;

        case '*':
        result = num1 * num2;
        printf("Result: %d", result);
        break;

        case '/':
        result = num1 / num2;
        printf("Result: %.1f", result);
        break;
    
    default:
        printf("%c is not valid", operator);
        break;
    }




    return 0;
}