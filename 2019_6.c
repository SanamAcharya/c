#include <stdio.h>
int main()
{
    int n, temp, rem, sum = 0;
    printf("ENTER NUMBER");
    scanf("%d", &n);

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    };
    printf("SUM:%d", sum);
}