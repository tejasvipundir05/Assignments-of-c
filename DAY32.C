//Q63: Merge two arrays.




#include <stdio.h>

int main() {
    int n, m, i;

    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    int b[m];
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    for (i = 0; i < m; i++)
        printf("%d ", b[i]);

    return 0;
}





//Q64: Find the digit that occurs the most times in an integer number.






#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, max = 0, ans = 0;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}

