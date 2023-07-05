#include<stdio.h>
int main()
{
    int a,b,i,j,prime;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&b);

    for(i=a+1;i<b;i++){
        prime=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d\n",i);
        }
    }
}