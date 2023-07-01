#include <stdio.h>
int main()
{
    int m[3][3], t[3][3], i, j;
    printf("ENTER MATRIX:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    printf("ENTERED MATRIX:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }



for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           t[i][j]=m[j][i];

        }
    }

    printf("TRANSPOSE:\n");

   
   for  (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
           printf("%d\t",t[i][j]);

        }
        printf("\n");
    }

}