#include<stdio.h>
#include<string.h>
int main()
{


    struct data
    {
        int phone;
        char name[100];

    };

    struct data d[5];
    int i,j;
    char temp[100];
    for (i=0; i<5; i++)
    {
        printf("ENTER THE DAtA of %d\n",i+1);
        printf("ENTER NAME:");
        scanf("%s",d[i].name);
        printf("ENTER PHONE:");
        scanf("%d",&d[i].phone);
    }
    for (i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if (strcmp(d[i].name,d[j].name)<0)
            {
            strcpy(temp,d[i].name);
            strcpy(d[i].name,d[j].name);
            strcpy(d[j].name,temp);
            }
        }
    }
    printf("DATA:\n");
    for(i=0;i<5;i++){
    printf("NAME:%s\n",d[i].name);
    printf("PHONE:%d\n",d[i].phone);
}

}




