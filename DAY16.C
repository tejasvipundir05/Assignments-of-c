// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;

}










//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if (original == reverse) {
        printf("Palindrome");
    }
    else {
        printf("Not palindrome");
    }

    return 0;
}