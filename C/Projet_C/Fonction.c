#include "Fonction.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char saisirMot(void) 
{
    char mot[100];
    printf("Saisir un mot : ");
    scanf("%99s", mot);
    return mot;
}

char saisirLettre(void) 
{
    char lettre;
    printf("Saisir une lettre : ");
    scanf(" %c", &lettre);
    return lettre;
}

int stockerErreur(char erreur[], char lettre) 
{
    for (int i = 0; erreur[i] != '\0'; i++) 
    {
        if (erreur[i] == lettre) 
        {
            return 0; // Lettre déjà présente
        }
        else if (erreur[i] == '\0') 
        {
            erreur[i] = lettre;
            erreur[i + 1] = '\0'; // Ajouter le caractère de fin de chaîne
            return 1; // Lettre ajoutée avec succès
        }
    }
} 

int afficherErreur(char erreur[])
{
    for(int i = 0; erreur[i] != '\0'; i++) 
    {
        printf("%c ", erreur[i]);
    }
    printf("\n");
    return 0;
}

int parcourirMot(char *mot, char lettre) 
{
    for (int i = 0; mot[i] != '\0'; i++) {
        presenceLettre(mot[i], lettre);
        if (mot[i] == lettre) 
        {
            return 1; // Lettre trouvée dans le mot
        }
        else 
        {
            return 0; // Lettre non trouvée dans le mot
        }
    }
}

int presenceLettre(char a, char b) 
{
    if (a == b) 
    {
        printf("la lettre %c se trouve dans le mot.\n", b);
        return 1;
    } 
    else 
    {
        printf("la lettre %c ne se trouve pas dans le mot.\n", b);
        return 0;
    }
}