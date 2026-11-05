//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/




#include <stdio.h>
#include <string.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char str[20];

    scanf("%s", str);

    if (strcmp(str, "SUCCESS") == 0)
    {
        printf("Operation successful");
    }
    else if (strcmp(str, "FAILURE") == 0)
    {
        printf("Operation failed");
    }
    else if (strcmp(str, "TIMEOUT") == 0)
    {
        printf("Operation timed out");
    }

    return 0;
}
