#ifndef FONCTION_H
#define FONCTION_H

char saisirMot(void);
char saisirLettre(void);
int stockerErreur(char erreur[], char lettre);
int afficherErreur(char erreur[]);
int parcourirMot(char *mot, char lettre);
int presenceLettre(char a, char b);

#endif // FONCTION_H