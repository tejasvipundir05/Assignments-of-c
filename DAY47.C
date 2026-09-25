//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/





#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[26] = {0};
    int i = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    // Count characters of first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        count[str1[i] - 'a']++;
    }

    // Subtract characters of second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        count[str2[i] - 'a']--;
    }

    // Check frequency
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}








//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/


#include <stdio.h>

int main()
{
    char str[200], word[100], longest[100];
    int i = 0, j = 0, len = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j++] = str[i];
            len++;
        }
        else
        {
            if (len > maxLen)
            {
                maxLen = len;
                word[j] = '\0';

                for (int k = 0; k <= j; k++)
                {
                    longest[k] = word[k];
                }
            }

            j = 0;
            len = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}