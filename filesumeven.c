#include <stdio.h>

int main()
{
    FILE *fptr;
    int n, i;

    printf("ENTER NUMBER: ");
    scanf("%d", &n);

    fptr = fopen("number.txt", "w+");
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        int num;
        printf("ENTER NUMBER %d: ", i);
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }

    // Reset the file position indicator to the beginning of the file
    rewind(fptr);

    int sum = 0;
    int read_num;

    printf("Even numbers from the file:\n");

    while (fscanf(fptr, "%d", &read_num) == 1) {
        if (read_num % 2 == 0) {
            printf("%d\n", read_num);
            sum += read_num;
        }
    }

    printf("Sum of even numbers: %d\n", sum);

    fclose(fptr);

    return 0;
}
