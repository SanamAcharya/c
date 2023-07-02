#include <stdio.h>
int main()
{
    int i;
    struct address
    {
        char munni[20];
        int ward;
        char district[20];
        char country[20];
    };

    struct detail
    {
        char name[20];
        int  phone;
        struct address add;
    };

    struct detail person1;

    printf("ENTER NAME:");
    scanf("%s", person1.name);

    printf("ENTER PHONE:");
    scanf("%d", &person1.phone);

    printf("ENTER MUNICIPALITY:");
    scanf("%s", person1.add.munni);

    printf("ENTER WARD:");
    scanf("%d", &person1.add.ward);

    printf("ENTER DISTRICT:");
    scanf("%s", person1.add.district);

    printf("ENTER COUNTRY:");
    scanf("%s", person1.add.country);

    printf("DETAILS\n");

    printf("NAME:%s\n", person1.name);
    printf("PHONE:%d\n", person1.phone);
    printf("ADDRESS:%s,%d,%s,%s\n", person1.add.munni, person1.add.ward, person1.add.district, person1.add.country);
}
