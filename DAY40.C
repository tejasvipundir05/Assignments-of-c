//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/





#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r + c - 1; i++) {
        for (j = 0; j < c; j++) {
            int x = i - j;

            if (x >= 0 && x < r)
                printf("%d ", a[x][j]);
        }
    }

    return 0;
}









//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/




#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k;

    scanf("%d %d", &r1, &c1);

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);

    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;

            for (k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}
