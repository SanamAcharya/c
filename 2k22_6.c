#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int vcount = 0;
    int ccount = 0;
    int ncount = 0;
    int bcount = 0;
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *ptr = sentence;

    while (*ptr != '\0') {
        if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z')) {
            if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
                *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
                vcount++;
            } else {
                ccount++;
            }
        } else if (*ptr >= '0' && *ptr <= '9') {
            ncount++;
        } else if (*ptr == ' ') {
            bcount++;
        }

        ptr++;
    }

    printf("Vowels: %d\n", vcount);
    printf("Consonants: %d\n", ccount);
    printf("Numbers: %d\n", ncount);
    printf("Blank Spaces: %d\n", bcount);

    return 0;
}
