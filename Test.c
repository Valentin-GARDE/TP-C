#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char saisirMot(void);
char saisirLettre(void);
int stockerErreur(char erreur[], char lettre);
int afficherErreur(char erreur[]);
int parcourirMot(char *mot, char lettre, char *motcherche);
int presenceLettre(char a, char b);
void afficherMotCherché(char *motcherche);
int tailleMot(char *mot);
void comparerMots(char *mot, char *motcherche);
char convertirMinuscule(char lettre);
char convertMinusculeMot(char *mot);

int main() 
{
    int e=0;
    char mot[100];
    char motcherche[100];
    char lettre;
    char erreur[8] = ""; // Tableau pour stocker les lettres erronées

    printf("Bienvenue dans le jeu du pendu !\n");
    printf("Joueur 1, à vous de jouer !\n");
    printf("Saisir un mot : ");
    scanf("%99s", mot);
    convertMinusculeMot(mot);
    system("clear"); // Effacer l'écran pour cacher le mot saisi
    int taille = tailleMot(mot);

    printf("joueur 2, à vous de jouer !\n");
    for (int i = 0; i < taille; i++) 
    {
        motcherche[i] = '_'; // Initialiser le mot cherché avec des underscores
        printf("%c ", motcherche[i]);
    }
    printf("\n");
    motcherche[taille] = '\0'; // Ajouter le caractère de fin de chaîne
    for ( e = 0; e < 8; e++ ) 
    {
        printf("Voici les lettres déjà erronées : ");
        afficherErreur(erreur);
        lettre = convertirMinuscule(saisirLettre());

        if(parcourirMot(mot, lettre, motcherche))
        {
            printf("Bravo ! La lettre %c est dans le mot.\n", lettre);
            afficherMotCherché(motcherche);
            e--;
            comparerMots(mot, motcherche);
        } 
        else 
        {
            printf("Dommage ! La lettre %c n'est pas dans le mot.\n", lettre);
            stockerErreur(erreur, lettre);
            printf("Vous avez fait %d erreurs sur 7.\n", e + 1);
        }
        system("clear"); // Effacer l'écran pour la prochaine tentative
    }
    return 0;
}

int tailleMot(char *mot) 
{
    int taille = 0;
    while (mot[taille] != '\0') 
    {
        taille++;
    }
    return taille;
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
    for (int i = 0; i<8; i++) 
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
    for(int i = 0; i < 8; i++) 
    {
        printf("%c ", erreur[i]);
    }
    printf("\n");
    return 0;
}

int parcourirMot(char *mot, char lettre, char *motcherche) 
{
    int presence = 0;
    for (int i = 0; mot[i] != '\0'; i++) {
        if (mot[i] == lettre) 
        {
            presence = 1; // Lettre trouvée dans le mot
            motcherche[i] = lettre; // Met à jour le mot cherché avec la lettre trouvée
        }
    }
    if (presence) 
    {
        printf("la lettre %c se trouve dans le mot.\n", lettre);
        return 1;
    } else 
    {
        printf("la lettre %c ne se trouve pas dans le mot.\n", lettre);
        return 0;
    }
}

void afficherMotCherché(char *motcherche) 
{
    printf("Mot cherché : ");
    for (int i = 0; motcherche[i] != '\0'; i++) 
    {
        printf("%c ", motcherche[i]);
    }
    printf("\n");
}

void comparerMots(char *mot, char *motcherche) 
{
    if (strcmp(mot, motcherche) == 0) 
    {
        printf("Félicitations ! Vous avez trouvé le mot : %s\n", mot);
        exit(0); // Terminer le programme si le mot est trouvé test
    }
}

char convertirMinuscule(char lettre) 
{
    if (lettre >= 'A' && lettre <= 'Z') 
    {
        return tolower(lettre);
    }
    return lettre; // Retourner la lettre telle quelle si elle est déjà en minuscule
}

char convertMinusculeMot(char *mot) 
{
    for (int i = 0; mot[i] != '\0'; i++) 
    {
        mot[i] = convertirMinuscule(mot[i]);
    }
    return *mot;
}