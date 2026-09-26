//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];

    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not rotation");
    }
     else {
         strcpy(temp, a);
         strcat(temp, a);

         if (strstr(temp, b))
             printf("Rotation");
         else
             printf("Not rotation");
     }

    return 0;
 }






//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/




#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start = 0;

    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            int j;

            for (j = i - 1; j >= start; j--)
                printf("%c", str[j]);

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}