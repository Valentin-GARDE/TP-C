#include <stdio.h> //Librairie de fonctions Input/Output
#include <stdlib.h> //Librairie de fonctions mémoires
#include <string.h> //Librairie de fonctions permettant de manipuler les chaînes de caractères
#include <math.h> //Librairie permettant de réaliser des opérations mathématiques avancées
#include <time.h> //Librairie de fonctions sur le temps et les dates

/*Structure*/
struct Livre
{
    int identifiant;
    char titre[100];
    char auteur[100];
    int anneePublication;
};

/*Appel de Fonctions*/
int afficherMenu();
int ajouterLivre(struct Livre *bibliotheque, int *nbLivres);
int afficherLivres(const struct Livre *bibliotheque, int nbLivres, const char *titre);
int rechercherLivre(struct Livre *bibliotheque, int nbLivres, const char *titre);
int supprimerLivre(const struct Livre *bibliotheque, int nbLivres, int id);
int quitterProg();

int main()
{
    int a;
    int nbLivre = 0; 
    struct Livre Livre;
    struct Livre *livre = (struct Livre *)malloc(nbLivre * sizeof(struct Livre));

    while(1) //tant que nous ne selectionnons pas le cas 0, le programe continue
    {
        a = afficherMenu();
        switch (a)
        {
            case (0): //arret du programme en libérant l'espace memoir du tableau dynamique 
                free(livre);
                quitterProg();
                break;
            
            case (1): // Ajout d'une place pour le livre et appel la fonction ajouterLivre
                nbLivre++;
                ajouterLivre(livre, nbLivre);
                break;

            case (2): // Appel la fonction supprmier livre
                supprimerLivre(livre, nbLivre, Livre.identifiant);
                break;

            case (3): //Appel la fonction rechercherLivre
                rechercherLivre(livre, nbLivre, Livre.titre);
                break;
            
            case (4): //Appel la fonction afficherLivres
                afficherLivres(livre, nbLivre, Livre.titre);
                break;

            default:
                break;
        }
        printf("\n");
    }
}

int afficherMenu() // Permet de faire une interface pour que l'utilisateur connaisse le numéro a choisir pour chaque fonction
{
    int a;
    printf("1 : Ajouter un livre à la bibliotheque\n");
    printf("2 : Supprimer un livre à la bibliotheque\n");
    printf("3 : rechercher un livre à la bibliotheque\n");
    printf("4 : afficher la bibliotheque\n");
    printf("0 : Quitter le programme\n");
    scanf("%d", &a);
    return a;
}

int ajouterLivre(struct Livre *bibliotheque, int *nbLivres) // permet d'ajouter un livre à la liste
{
    for(int i=0; i < nbLivres; i++)
    {
        if(bibliotheque[i].identifiant == 0) // des qu'il y a un identifiant nul, on ajoute le livre(un id ne peux jamais etre nul sauf s'il y n'y en a pas)
        { // Puis demande à l'utilisateur les 4 composantes d'un livres
            printf("Entrez l'id: ");
            scanf("%d", &bibliotheque[i].identifiant);
            printf("Entrez le titre: ");
            scanf("%s", &bibliotheque[i].titre);
            printf("Entrez l'auteur: ");
            scanf("%s", &bibliotheque[i].auteur);
            printf("Entrez l'année de publication: ");
            scanf("%d", &bibliotheque[i].anneePublication);
        }
    }
    return 0;
}

int afficherLivres(const struct Livre *bibliotheque, int nbLivres, const char *titre) //Permet de parcourir le tableau de livres pour afficher les titres
{
    for(int i =0; i<nbLivres; i++)
    {
        printf("%s\n", bibliotheque[i].titre);
    }
    return 0;
}

int rechercherLivre(struct Livre *bibliotheque, int nbLivres, const char *titre) // demande un titre à l'utilisateur puis il va comparer le titre demandé avec les titres du tableau
{
    char recherche[50];
    int etat = 0;
    printf("indiquer le nom du livre cherché :\n");
    scanf("%s", recherche);
    for(int i=0; i<nbLivres; i++)
    {
        printf("%s\n", bibliotheque[i].auteur);
        if(strcmp(bibliotheque[i].titre,recherche) == 0) // si le titre est présent dans le tableau cela donne toutes les informations du livre concerné
        {
            etat = 1;
            printf("id: %d\n", bibliotheque[i].identifiant);
            printf("Titre: %s\n", bibliotheque[i].titre);
            printf("Auteur: %s\n", bibliotheque[i].auteur);
            printf("Date de Publication: %d\n", bibliotheque[i].anneePublication);
        }
    }
    if(etat == 0) // Si le livre n'est pas dans le tableau, cela indique à l'utilisateur que le livre n'est pas présent
    {
        printf("Le titre cherché ne fait pas partie de la bibliotheque");
    }
}

int supprimerLivre(const struct Livre *bibliotheque, int nbLivres, int id) // Cette fonction demande à l'utilisateur un id puis elle va comparer les id pour savoir quelle livre supprimer
{
    int supp;
    printf("indiquer le nom du livre à supprimer :\n");
    scanf("%d", &supp);
    for(int i=0; i<nbLivres; i++)
    {
        if(id == supp)
        {
            //*bibliotheque[i].identifiant = bibliotheque[i+1].identifiant;
        }
    }
}

int quitterProg() // permet de quitter le programe grace à un exit(0)
{
    printf("Vous allez quitter le programme");
    exit(0);
}