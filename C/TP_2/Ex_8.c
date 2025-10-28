#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int RemplirTab(int tab[3][4]);
int AfficherTab(int tab[3][4]);

int main()
{
    int mat[3][4] = {{5, 8, 2, 4}, {6, 3, 9, 1}, {4, 7, 5, 2}};
    int mat2[3][4] = {{5, 8, 2, 4}, {6, 3, 9, 1}, {4, 7, 5, 2}};
    int matriceSomme[3][4];
    int vector[12];
    int sommeTotale = 0;
    int sommeLigne = 0;

    AfficherTab(mat);
    RemplirTab(mat);
    AfficherTab(mat);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            sommeTotale += mat[i][j];
            sommeLigne += mat[i][j];
        }
        printf("La somme de la ligne %d est : %d\n", i+1, sommeLigne);
        sommeLigne = 0;
    }
    printf("La somme totale des éléments du tableau est : %d\n", sommeTotale);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            vector[i*4 + j] = mat[i][j];
        }
    }
    printf("Le tableau sous forme de vecteur est :\n");
    for(int i=0; i<12; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            matriceSomme[i][j] = mat[i][j] + mat2[i][j];
        }
    }
    AfficherTab(matriceSomme);
}

int RemplirTab(int tab[3][4])
 {
    int t;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Entrez la valeur à la case %d;%d :\n ", i+1, j+1);
            scanf("%d", &t);
            tab[i][j]=t;
        }
    }
    return 0;
 }

int AfficherTab(int tab[3][4])
 {
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
 }