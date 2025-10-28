#include "Fonction.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char mot[100];
    char motcherche[100];
    char lettre;
    char erreur[8] = ""; // Tableau pour stocker les lettres erronées
    printf("Bienvenue dans le jeu du pendu !\n");
    printf("Joueur 1, à vous de jouer !\n");
    *mot = saisirMot();
    printf("joueur 2, à vous de jouer !\n");
    printf("Voici les lettres déjà erronées : ");
    afficherErreur(erreur);
    lettre = saisirLettre();

    if(parcourirMot(mot, lettre)) 
    {
        printf("Bravo ! La lettre %c est dans le mot.\n", lettre);
    } 
    else 
    {
        printf("Dommage ! La lettre %c n'est pas dans le mot.\n", lettre);
        stockerErreur(erreur, lettre);
    }
    return 0;
}