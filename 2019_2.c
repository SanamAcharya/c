#include <stdio.h>
int main()
{

    struct detail
    {
        char name[20];
        char nation[20];
        int match;
        int runs;
    };
    int n;
    printf("ENTER THE NUMBER OF PLAYERS:");
    scanf("%d", &n);

    struct detail p[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ENTER NAME:");
        scanf("%s", p[i].name);
        printf("ENTER NATION:");
        scanf("%s", p[i].nation);
        printf("ENTER MATCH PALYED");
        scanf("%d", &p[i].match);
        printf("ENTER RUNS SCORED");
        scanf("%d", &p[i].runs);
    }
    printf("DATA:\n");
    for (i = 0; i < n; i++)
    {
        printf("NAME:%s\n",p[i].name);
        printf("NATION:%s\n",p[i].nation);
        printf("MATCH:%d\n",p[i].match);
        printf("RUNS:%d\n",p[i].runs);
        printf("\n");
    }
}