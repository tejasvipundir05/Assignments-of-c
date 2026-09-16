//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/






#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int distinct = 1;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j])
                distinct = 0;
        }
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}








//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/





#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        sum = sum + a[i][i];

    printf("%d", sum);

    return 0;
}