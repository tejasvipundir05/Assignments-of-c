//Q35: Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}







//Q36: Write a program to find the HCF (GCD) of two numbers.



#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d", hcf);

    return 0;
}