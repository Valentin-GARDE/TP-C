#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    double n;
    double result = 1;

    printf("Entrer la valeur pour x: ");
    scanf("%lf", &x);
    printf("Entrer la valeur pour n: ");
    scanf("%lf", &n);

    for (int i = 0; i < n; i++)
    {
        result = x*result;  
    }
    printf("Le resultat est: %.2f\n", result);
    return 0;
}