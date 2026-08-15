// Q11: Write a program to input an integer and check whether it is even or odd using if–else.
 
#include<stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
    return 0;
}






// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n < 0) {
        printf("%d is negative\n", n);
    } else {
        printf("The number is zero\n");
    }
    return 0;
}