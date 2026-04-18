#include <stdio.h>
int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter the first number \n");
    scanf("%lf", &num1);

    printf("Enter the operator \n");
    scanf(" %c", &operator);

    printf("Enter the second number \n");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;

        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        
        printf("invalid input\n");
    
        
    }
    printf("Result: %.400lf", result);

    return 0;
}