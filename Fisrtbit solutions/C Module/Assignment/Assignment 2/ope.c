#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to avoid newline problem

    if (op == '+')
        printf("Result: %d\n", a + b);
    else {
        if (op == '-')
            printf("Result: %d\n", a - b);
        else {
            if (op == '*')
                printf("Result: %d\n", a * b);
            else {
                if (op == '/') {
                    if (b != 0)
                        printf("Result: %d\n", a / b);
                    else
                        printf("Error: Division by zero not allowed.\n");
                }
                else {
                    if (op == '%') {
                        if (b != 0)
                            printf("Result: %d\n", a % b);
                        else
                            printf("Error: Modulus by zero not allowed.\n");
                    }
                    else
                        printf("Invalid operator!\n");
                }
            }
        }
    }

    return 0;
}

