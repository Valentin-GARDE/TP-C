#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int age;
    char accompagne;

    printf("Quel âge avez-vous ? ");
    scanf("%d", &age);
    if (age < 18) 
    {
        printf("Etes vous accompagné ? (o: Oui, n: Non) ");
        scanf(" %c", &accompagne);
        if (accompagne =='o') 
        {
            printf("Accès autorisé.\n");
            return 0;
        } 
        else 
        {
            printf("Accès refusé.\n");
            return 1;
        }
    }
    else 
    {
        printf("Accès autorisé.\n");
        return 0;
    }
}