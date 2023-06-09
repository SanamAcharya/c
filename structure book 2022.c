#include <stdio.h>
int main ()
{

struct Book{
int book_id;
char book_name[20];
int price;
};
        int x;
        printf("ENTER THE NUMBERS OF BOOKS:");
        scanf("%d",&x);

        struct Book b[x];

        int i;
        for(i=0;i<x;i++)
            {
            printf("ENTER THE DETAILS OF THE BOOK %d:",i+1);
            printf("\nENTER ID");
            scanf("%d",&b[i].book_id);
            printf("\nENTER NAME:");
            scanf("%s",&b[i].book_name);
            printf("\nENTER PRICE:");
            scanf("%d",&b[i].price);
            }

        int maxprice=b[0].price;
        int maxindex=0;

            for(i=1;i<x;i++){
                                if(b[i].price>maxprice)
                                            {
                                            maxprice=b[i].price;
                                            maxindex=i;
                                            }
                            }

                         printf("THE BOOK WITH MAX PRICE IS %s",b[maxindex].book_name);
}
