#include <stdio.h>
int main()
{
    int a[50], i, count=0;
    for(i=0;i<50;i++){
    printf("ENTER NUMBER-%d",1+i);
    scanf("%d",&a[i]);}


  for(i=0;i<50;i++){
    if(a[i]>15 && a[i]%5==0){
        count=count+1;
    }
  }
  printf("TOTAL NUMBER THAT ARE EXACTLY DIVISIBLE BY  AND GREATER THAN 15 ARE %d",count);
}