//SORTING ARRAY ELEMENT IN DECENDING ORDER

#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("ENTER 10 NUMBERS\n");
    for (i=0; i<10; i++)
    {
        printf("ENTER no %d:\t",i+1);
        scanf("%d",&a[i]);

    }
    for(i=0; i<10; i++)
{
    for(j=0; j<10; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }


    printf("DECENDING ORDER:\n");


    for(i=0;i<10;i++){
    printf("%d\n",a[i]);
    }
}
