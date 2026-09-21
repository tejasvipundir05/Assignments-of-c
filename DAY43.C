//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/










#include <stdio.h>

int main() {
    char str[100], temp;
    int i, n = 0;

    scanf("%s", str);

    while (str[n] != '\0') {
        n++;
    }

    for (i = 0; i < n / 2; i++) {
        temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }

    printf("%s", str);

    return 0;
}



//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/






#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, n;

    scanf("%s", str);

    n = strlen(str);

    for (i = 0; i < n; i++) {
        rev[i] = str[n - 1 - i];
    }

    rev[n] = '\0';

    if (strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}