#include <stdio.h>

int main() {
    int a, b, prime, i, j;  //declare
    printf("ENTER 2 NUMBERS: ");
    scanf("%d %d", &a, &b); //input

    for (i = a; i <= b; i++) {
        prime = 1; // Assume the number is prime initially

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0; // Set prime to 0 if number is divisible by j
                break;
            };
        }

        if (prime == 1) {
            printf("PRIME = %d\n", i);
        }
    }

    return 0;
}
