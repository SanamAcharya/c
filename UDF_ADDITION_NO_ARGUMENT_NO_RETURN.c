#include<stdio.h>

void add(void);   //prototype

int main()
    {

    add();        //call
    return 0;
    }

void add(void)    //defination
    {
    int a,b,c;
    printf("ENTER FIRST NUMBER");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER");
    scanf("%d",&b);
    c=a+b;
    printf("SUM=%d",c);

    }
