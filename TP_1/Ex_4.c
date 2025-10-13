#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0;
    int j=0;
    int n=0;

    printf("indiquer la valeur du coté 1 : \n");
    scanf("%d", &i);
    printf("indiquer la valeur du coté 2 : \n");
    scanf("%d", &j);
    printf("indiquer la valeur du coté 3 : \n");
    scanf("%d", &n);

    if (i+j > n)
    {
        printf("C'est longueurs permettent de créer un triangle.\n");
    }
    else
    {
        printf("Ces longueurs ne permettent pas de créer un triangle.\n");
    }

    return 0;
}