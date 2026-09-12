//Q67: Insert an element in an array at a given position.





#include <stdio.h>

int main() {
    int n, i, pos, element;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &element);

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;
    n++;

    // Print the array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}








//Q68: Delete an element from an array.





#include <stdio.h>

int main() {
    int n, i, pos;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    // Shift elements to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    // Print the array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
