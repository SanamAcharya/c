#include <stdio.h>
void prime(int);
int main()

{
    int n;
    printf("ENTER A NUM");
    scanf("%d", &n);
     prime(n);
}

void prime(int n)
{
    int i, count = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
}