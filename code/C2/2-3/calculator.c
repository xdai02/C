#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter an expression: ");
    scanf("%d %c %d", &num1, &operator, & num2);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Error! Operator is not supported\n");
        break;
    }

    return 0;
}