#include<stdio.h>
int main()
{
    int a[5]= {324343,2323432,2323,22,3},i;
    int *ptr=a;
    int largest= *ptr;

    for(i=0; i<5; i++)
    {
        if(*(ptr+i)>largest)
        {
            largest=*(ptr+i);
        }
    }
    printf("LARGEST:%d",largest);
}

