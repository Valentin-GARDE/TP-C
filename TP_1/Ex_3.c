#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0;
    int j=0;

    printf("indiquer la valeur de i : \n");
    scanf("%d", &i);
    printf("indiquer la valeur de j : \n");
    scanf("%d", &j);

    if (i>j)
        printf("i est superieur a j \n");
    else if (i<j)
        printf("i est inferieur a j \n");
    else
        printf("i est egal a j \n");

    return 0;
}