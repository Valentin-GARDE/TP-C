#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int R=20;
    float Pi = 3.14;
    float D,P,S;

    D=2*R;
    P=2*Pi*R;
    S=Pi*R*R;

    printf("Le diametre du cercle est : %.2f \n", D);
    printf("Le perimetre du cercle est : %.2f \n", P);
    printf("La surface du cercle est : %.2f \n", S);
    return 0;
}