#include<stdio.h>
int main()
{
    FILE *fptr;
    char name[100];
    printf("ENTER NAME OF FILE");
    scanf("%s",name);

    fptr=fopen(name,"/home/sanam/Downloads/""w");

    if(fptr == NULL){
        printf("CANT OPEN");
        return 1;
    }
    fprintf(fptr, "HELLO WORLD");


    fclose(fptr);
}



//chalena