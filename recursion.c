#include<stdio.h>
int fact(int);
int main()
{
    int a,n;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    a=fact(n);
    printf("FACTORIAL:%d",a);
    return 0;
}
int fact(n){
if(n<=1)
return 1;

else
return n*fact(n-1);
}
