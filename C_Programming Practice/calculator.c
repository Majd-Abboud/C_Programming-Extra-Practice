#include <stdio.h>


int main(){

    float num1 = 0.0f;
    float num2 = 0.0f;
    char operator;
    float result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    
    printf("Enter the operator (+, -, /, *): ");
    scanf(" %c", &operator);
   

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch(operator){

        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '/':
        result = num1 / num2;
        break;

        case '*':
        result = num1 * num2;
        break;
        default:
        printf("Not an operator try again\n!");
    }

    printf("Result: %.2f\n", result);


    return 0;
}