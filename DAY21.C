//Q41: Write a program to swap the first and last digit of a number#include <stdio.h>

// int main()
// {
//     int n, first, last, temp, power = 1;

//     scanf("%d", &n);

//     temp = n;

//     // Find last digit
//     last = n % 10;

//     // Find first digit and power of 10
//     while (temp >= 10)
//     {
//         temp = temp / 10;
//         power = power * 10;
//     }

//     first = temp;

//     // Swap first and last digit
//     n = n - first * power;
//     n = n - last;
//     n = n + last * power;
//     n = n + first;

//     printf("%d", n);

//     return 0;
//}






//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/


#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}

