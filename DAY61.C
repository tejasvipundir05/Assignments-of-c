//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/  





#include <stdio.h>

void firstNegativeInWindow(int arr[], int n, int k) {
    int q[n];          // Stores indices of negative numbers
    int front = 0, rear = 0;

    // Process first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            q[rear++] = i;
        }
    }

    // Process remaining windows
    for (int i = k; i < n; i++) {
        // Print first negative of previous window
        if (front < rear)
            printf("%d ", arr[q[front]]);
        else
            printf("0 ");

        // Remove elements out of current window
        while (front < rear && q[front] <= i - k) {
            front++;
        }

        // Add current negative element
        if (arr[i] < 0) {
            q[rear++] = i;
        }
    }

    // Print result for last window
    if (front < rear)
        printf("%d", arr[q[front]]);
    else
        printf("0");

    printf("\n");
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    firstNegativeInWindow(arr, n, k);

    return 0;
}