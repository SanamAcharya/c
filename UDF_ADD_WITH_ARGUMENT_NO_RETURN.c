#include<stdio.h>

void add(int,int);
int main()
    {
    int a,b;
    printf("ENTER 2 NUMBERS");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
    }

    add(int a, int b){
    int sum;
    sum=a+b;
    printf("SUM=%d",sum);
    }

