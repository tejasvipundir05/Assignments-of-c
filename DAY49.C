//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/


#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            printf("%c.", name[i + 1]);
    }

    return 0;
}




//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/


#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, last;

    fgets(name, sizeof(name), stdin);

    last = strlen(name) - 1;

    // Remove newline
    if (name[last] == '\n')
        name[last] = '\0';

    // Find last space
    last = strlen(name) - 1;
    while (name[last] != ' ')
        last--;

    // Print initials
    for (i = 0; i < last; i++) {
        if (i == 0)
            printf("%c.", name[i]);

        if (name[i] == ' ')
            printf("%c.", name[i + 1]);
    }

    // Print surname
    printf(" ");
    for (i = last + 1; name[i] != '\0'; i++)
        printf("%c", name[i]);

    return 0;
}