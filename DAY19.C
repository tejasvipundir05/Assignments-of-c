//Q37: Write a program to find the LCM of two numbers.


#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    lcm = (a > b) ? a : b;

    while (lcm % a != 0 || lcm % b != 0) {
        lcm++;
    }

    printf("%d", lcm);

    return 0;
}










//Q38: Write a program to find the sum of digits of a number.


#include <stdio.h>

int main() {
    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("%d", sum);

    return 0;
}
