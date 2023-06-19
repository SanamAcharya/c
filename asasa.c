//write a program using pointer, to find the the largest element in an array...


#include<stdio.h>
int main()
{
    int a[100],i,n,*ptr,*max;

    printf("ENTER THE NUMBER YOU WANT");
    scanf("%d",&n);

    printf("ENTER THE NUM");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    max=&a[0];
    ptr=&a[0];



    for(i=0; i<n; i++)
    {
        if(*ptr>*max)
        {
        max=ptr;
        }        ptr++;

    }

    printf("THE LARGEST:%d",*max);
}
