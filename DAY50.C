//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/



#include <stdio.h>

int main() {
    char date[20];

    scanf("%s", date);

    printf("%.2s-Apr-%.4s", date, date + 6);

    return 0;
}



//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/


#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            printf("%.*s", j - i + 1, str + i);

            if (str[j + 1] != '\0' || str[i + 1] != '\0')
                printf(",");
        }
    }

    return 0;
}