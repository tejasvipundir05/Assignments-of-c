//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.





#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        double numerator = 2 * i;
        double denominator = 4 * i - 1;

        sum += numerator / denominator;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}




// Q46: Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****




#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
