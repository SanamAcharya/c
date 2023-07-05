#include<stdio.h>
int main()
{
    char alphabet;
    printf("ENTER A ALPHABET:");
    scanf("%s",&alphabet);

    if(alphabet>='a' &&  alphabet<='z'){
        switch(alphabet){
            case 'a':printf("IT IS A VOWEL");
            break;

            case 'e':
            printf("IT IS A VOWEL");
            break;

            case 'i':
            printf("IT  IS  VOWEL");

            case 'o':
            printf("IT IS A VOWEL");

            case 'u':
            printf("IT IS A VOWEl");

            default:
            printf("IT IS NOT A VOWEL");
        }
    }
}