#include <stdio.h>
int main()
{
    int n, a, b, add, mul;
    printf("ENTER:\n1 FOR ADDING\n2 FOR MULTIPLYING\n3 TO EXIT ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("ENTER FIRST NUMBER");
        scanf("%d", &a);
        printf("ENTER SECOND NUMBER");
        scanf("%d", &b);
        add = a + b;
        printf("SUM:%d", add);
        break;

    case 2:
        printf("ENTER FIRST NUMBER");
        scanf("%d", &a);
        printf("ENTER SECOND NUMBER");
        scanf("%d", &b);
        mul = a * b;
        printf("PRODUCT:%d", mul);

    case 3:
        printf("EXITING");
        break;

    default:
        printf("INVALID INPUT");
        break;
    }
}
