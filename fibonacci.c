    #include <stdio.h>
    int main()
    {
    int n1=0,n2=1,n3,i,n;


    printf("ENETR num");
    scanf("%d",&n);

    printf("SERIES:\t%d\t%d",n1,n2);

    for(i=2;i<n;i++)
        {n3=n2+n1;
        printf("\t%d",n3);
        n1=n2;
        n2=n3;
        }

    return 0;

    }
