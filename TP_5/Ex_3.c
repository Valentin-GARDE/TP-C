#include <stdio.h>
#include <stdlib.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    int note;
};

int main()
{
    struct Etudiant etu;
    
    int n;

    printf("indiuer le nombre d'etudiants: ");
    scanf("%d", &n);
    struct Etudiant *etudiants = (struct Etudiant *)malloc(n * sizeof(struct Etudiant));
    for (int i = 0; i < n; i++) 
    {
        printf("Entrez le nom, prenom et note de l'etudiant %d: ", i + 1);
        scanf("%s %s %d", etudiants[i].nom, etudiants[i].prenom, &etudiants[i].note);
    }
    printf("\nVoici la liste des étudiant avec une note >= 10:\n");
    for (int i = 0; i < n; i++) 
    {
        if (etudiants[i].note >= 10) 
        {
            printf("Nom: %s, Prenom: %s, Note: %d\n", etudiants[i].nom, etudiants[i].prenom, etudiants[i].note);
        }
    }
}