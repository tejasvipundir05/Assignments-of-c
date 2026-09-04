// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345


#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}




// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *


#include <stdio.h>

int main() {
    int i, j;

    // First group
    for (i = 1; i <= 4; i++)
        printf("*\n");

    printf("\n");

    // Second group
    for (i = 1; i <= 5; i++)
        printf("*\n");

    printf("\n");

    // Third group
    for (i = 1; i <= 3; i++)
        printf("*\n");

    printf("\n");

    // Fourth group
    printf("*\n");

    return 0;
}

