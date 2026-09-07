//Q57: Find the sum of array elements.






#include <stdio.h>

int main() {
    int n, i, sum = 0, a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
        sum += a[i];

    printf("%d", sum);

    return 0;
}







//Q58: Find the maximum and minimum element in an array.







#include <stdio.h>

int main() {
    int n, i, a[100], max, min;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}

