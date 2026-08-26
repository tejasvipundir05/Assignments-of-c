//Q33: Write a program to check if a number is an Armstrong number.


    #include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}





//Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}