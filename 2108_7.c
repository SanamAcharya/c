#include <stdio.h>
int main()
{
    int a[10], i, *ptr, sum = 0;
    *ptr = a;

    printf("ENTER 10 ELEMENTS");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &ptr);
    }

    sum=a[0]+a[9];
    printf("SUM:%d",sum);
}