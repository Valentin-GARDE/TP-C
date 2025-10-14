#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int line = 0;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &line);

    for(int i = 0; i <= line; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < line; i++)
    {
        for(int j = line; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < line-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < line; i++)
    {
        for(int j = line; j > i; j--)
        {
            printf(" ");
        }
        for(int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < line; i++)
    {
        for(int j = line; j > i ; j--)
        {
            printf(" ");
        }
        if(i == 0)
        {
            printf("*");
        }
        else if(i > 0 && i < line-1)
        {
            printf("*");
            for(int k = 0 ; k<(i*2)-1; k++)
            {
                printf("o");
            }
            printf("*");
        }
        else if(i == line-1)
        {
            for(int j= 0; j < (line*2)-1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}