//Q39: write a program to find the product of odd digits of a number.


#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product = product * digit;
        }

        num = num / 10;
    }

    printf("Product of odd digits = %d", product);

    return 0;
}





//Q40: write a program to find the 1's complement of a binary number and print it.



#include <stdio.h>

int main() {
    long long num, result = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;

        num = num / 10;
    }

    printf("1's complement = %lld", result);

    return 0;
}











