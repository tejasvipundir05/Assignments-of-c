// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Cannot divide by zero");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d", a % b);
            else
                printf("Cannot find remainder with zero");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}




//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}