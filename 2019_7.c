#include<stdio.h>
int main()
{
    int a=10,b=9;
    a=a+b; //a=10+9=19
    b=a-b; //b=19-9=10
    a=a-b; //a=19-10=9

    printf("a;%d\n",a);
    printf("b;%d\n",b);
}