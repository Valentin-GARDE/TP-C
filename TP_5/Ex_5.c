#include <stdio.h>
#include <stdlib.h>

struct Date {
    int jour;
    int mois;
    int année;
};
struct Fiche {
    char nom[20];
    char prenom[20];
    struct Date dateDeNaissance;
    int numéroDeGroupe;
    char formation[30];
    int redoublant;
    int note[5];
};

int ecrireFiche(struct Fiche *f);
int lireFiche(struct Fiche *f);
int ajouterNote(struct Fiche *f, int note);
int calculerMoyenne(struct Fiche *f);

int main()
{
    struct Fiche f;
    int n;

    ecrireFiche(&f);
    printf("\nVoici les informations de la fiche:\n");
    lireFiche(&f);
    printf("\nEntrez une nouvelle note a ajouter: ");
    scanf("%d", &n);
    ajouterNote(&f, n);
    printf("\nVoici les informations mises a jour de la fiche:\n");
    lireFiche(&f);
    int moyenne = calculerMoyenne(&f);
    printf("\nLa moyenne des notes est: %d\n", moyenne);
    return 0;
}

int ecrireFiche(struct Fiche *f)
{
    printf("Entrez le nom: ");
    scanf("%s", f->nom);
    printf("Entrez le prenom: ");
    scanf("%s", f->prenom);
    printf("Entrez la date de naissance (jour mois année): ");
    scanf("%d %d %d", &f->dateDeNaissance.jour, &f->dateDeNaissance.mois, &f->dateDeNaissance.année);
    printf("Entrez le numéro de groupe: ");
    scanf("%d", &f->numéroDeGroupe);
    printf("Entrez la formation: ");
    scanf("%s", f->formation);
    printf("Est-ce un redoublant (1 pour oui, 0 pour non): ");
    scanf("%d", &f->redoublant);
    for (int i = 0; i < 5; i++) 
    {
        printf("Entrez la note %d: ", i + 1);
        scanf("%d", &f->note[i]);
    }
    return 0;
}

int lireFiche(struct Fiche *f)
{
    printf("Nom: %s\n", f->nom);
    printf("Prenom: %s\n", f->prenom);
    printf("Date de naissance: %02d/%02d/%04d\n", f->dateDeNaissance.jour, f->dateDeNaissance.mois, f->dateDeNaissance.année);
    printf("Numéro de groupe: %d\n", f->numéroDeGroupe);
    printf("Formation: %s\n", f->formation);
    printf("Redoublant: %s\n", f->redoublant ? "Oui" : "Non");
    for (int i = 0; i < 5; i++) 
    {
        printf("Note %d: %d\n", i + 1, f->note[i]);
    }
    return 0;
}

int ajouterNote(struct Fiche *f, int note)
{
    for (int i = 0; i < 5; i++) 
    {
        if (f->note[i] == 0) 
        {
            f->note[i] = note;
            return 0;
        }
    }
    printf("Toutes les notes sont deja remplies.\n");
    return -1;
}

int calculerMoyenne(struct Fiche *f)
{
    int somme = 0;
    int count = 0;
    for (int i = 0; i < 5; i++) 
    {
        if (f->note[i] != 0) 
        {
            somme += f->note[i];
            count++;
        }
    }
    if (count == 0) 
    {
        printf("Aucune note disponible pour calculer la moyenne.\n");
        return 0;
    }
    return somme / count;
}
