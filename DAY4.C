// Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Before swap: %d %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}






// Q8: Write a program to find and display the sum of the first n natural numbers.


#include<stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("Sum=%d\n", sum);
    
    return 0;
}