//Q61: Search for an element in an array using linear search.




#include <stdio.h>

int main() {
    int n, target, i;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}






//Q62: Reverse an array without taking extra space.






#include <stdio.h>

int main() {
    int n, i, temp;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array using two pointers
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
