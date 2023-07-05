#include <stdio.h>
int main()
{
    char alpha;

    printf("ENTER ");
    scanf("%c", &alpha);

    if (alpha >= 'a' && alpha <= 'z')
    {
        switch (alpha)
        {
        case 'a':
            printf("vowel");
            break;
        case 'e':
            printf("vowel");
            break;
        case 'i':
            printf("vowel");
            break;
        case 'o':
            printf("vowel");
            break;
        case 'u':
            printf("vowel");
            break;

        default:
            printf("NOT A VOWEL");
            break;
        }
    }

    else
    {
        printf("INVALID");
    }
    return 0;
}
