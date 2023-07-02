#include <stdio.h>
int main()
{
    int n, i, j, sum = 0, fact = 1;
    printf("ENTER NUMBER");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
    }
    printf("TOTAL:%d", sum);
}