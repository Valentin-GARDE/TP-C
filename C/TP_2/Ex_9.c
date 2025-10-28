#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int RemplirTab(int note[4][3], char nom[4][30], char matiere[3][20]);
int AfficherTab(int tab[4][3], char nom[4][30], char matiere[3][20]);

int main()
{
    char nom[4][30] = {"Cécile PAGNOUX","Etienne LANTIER","Julien BREVIER","Valentin GARDE"};
    char matiere[3][20] = {"Mathématiques","Electronique","Informatique"};
    int note[4][3];
    int sommeColonne[3];
    int sommeTotale = 0;
    int sommeLigne = 0;

    RemplirTab(note, nom, matiere);
    AfficherTab(note, nom, matiere);
}

int RemplirTab(int note[4][3], char nom[4][30], char matiere[3][20])
 {
    int t;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Entrez la note de %s en %s (entre 0 et 20):\n ", nom[i], matiere[j]);
            scanf("%d", &t);
            if(t<0 || t>20)
            {
                printf("Note invalide, réessayez.\n");
                j--;
                continue;
            }
            else 
            {
                note[i][j]=t;
            }
        }
    }
    return 0;
 }

int AfficherTab(int tab[4][3], char nom[4][30], char matiere[3][20])
 {
    int moyEleve;
    int moyMatiere;

    for(int i=0; i<5; i++)
    {
        if (i == 0)
        {
            printf("\n%-20s", "Élève");
            for(int j=0; j<3; j++)
            {
                printf("%-20s", matiere[j]);
            }
            printf("%-20s", "Moyenne");
            printf("\n");
            continue;
        }
        else
        {
            printf("%-20s: ", nom[i-1]);
        }
        moyEleve = 0;
        for(int j=0; j<3; j++)
        {   
            printf("%-20d", tab[i-1][j]);
            if (i==1)
            {
                moyEleve += tab[i][j];
            }
            else
            {
                moyEleve += tab[i-1][j];
            }
        }
        moyEleve = moyEleve / 3;
        printf("%-20d", moyEleve);
        printf("\n");
    }
    printf("\n%-20s", "Moyenne matière");
    for (int j = 0; j < 3; j++) {
        int somme = 0;
        for (int i = 0; i < 4; i++) {
            somme += tab[i][j];
        }
        double moy = (double)somme / 4;
        printf("%-20.2f", moy);
    }
    printf("\n\n");
    printf("\n");
    return 0;
 }