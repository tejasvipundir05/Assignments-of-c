//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/



#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, columns;

    // Read number of rows and columns
    scanf("%d %d", &rows, &columns);

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}






//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/





#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, columns;
    int sum = 0;

    scanf("%d %d", &rows, &columns);

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}