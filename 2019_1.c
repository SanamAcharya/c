#include<stdio.h>
int main(){
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int i;
    int found=0;
    int key;

    printf("ENTER TO SEARCH");
    scanf("%d",&key);

    for(i=0;i<10;i++){
        if(key==a[i]){
            printf("ELEMENT %d  found at a[%d]",key,i);
            found=1;
            break;
        }
    }
    if(!found){
        printf("NOT FOUND");
    }
}