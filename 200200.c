/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LENGTH 100
#define MAX_NUM_STRINGS 10

int main()
{
    char a[10][10];
    char temp[100];
    int i, j, n;

    printf("ENTER THE NUMBER OF STRINGS: ");
    scanf("%d", &n);
    getchar(); // Clear the newline character from the input buffer

    printf("ENTER %d STRINGS:\n", n);
    for (i = 0; i < n; i++)
    {
        fgets(a[i], MAX_STR_LENGTH, stdin);
        a[i][strcspn(a[i], "\n")] = '\0'; // Remove the newline character
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("SORTED STRINGS:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}
*/