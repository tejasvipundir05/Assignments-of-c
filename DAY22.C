//Q43: Write a program to check if a number is a strong number.







#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, fact;

    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}










//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1)
            sum += 1;
        else
            sum += (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
