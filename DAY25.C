// Q49: Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345



#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}



// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *




#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = i; j < 5; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
