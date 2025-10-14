#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
 int main()
 {
    int code = 2022;
    
    while (1)
    {
        int saisie;
        printf("Veuillez entrer le code pour continuer: ");
        scanf("%d", &saisie);
        if (saisie == code)
        {
            printf("Code correct, vous pouvez continuer.\n");
            break;
        }
        else
        {
            printf("Code incorrect, veuillez reessayer.\n");
        }
    }

 }