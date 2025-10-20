#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
 int main()
 {
   char nom[20];
   int age;
   int poids;

   printf("Donner votre nom :\n");
   fgets(nom, 20, stdin);

   // Retirer le \n à la fin du nom si présent
   nom[strcspn(nom, "\n")] = '\0';

   printf("Indiquer votre age :\n");
   scanf("%d", &age);

   printf("Indiquer votre poids :\n");
   scanf("%d", &poids);

   printf("Bonjour %s ! Vous avez %d ans et pesez %d kg.\n", nom, age, poids);
 }
