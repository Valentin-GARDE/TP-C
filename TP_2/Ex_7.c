#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
 int main()
 {
   char sujet[20];
   char verbe[20];
   char complement[20];
   char phrase[60];

   printf("Saisisser un sujet :\n");
   fgets(sujet, 20, stdin);

   // Retirer le \n à la fin du nom si présent
   sujet[strcspn(sujet, "\n")] = '\0';

    printf("Saisisser un verbe :\n");
   fgets(verbe, 20, stdin);

   verbe[strcspn(verbe, "\n")] = '\0';

   printf("Saisisser un complément :\n");
   fgets(complement, 20, stdin);

   complement[strcspn(complement, "\n")] = '\0';

   strcat(phrase, sujet);
   strcat(phrase, " ");
   strcat(phrase, verbe);
   strcat(phrase, " ");
   strcat(phrase, complement);

   printf("La phrase est : %s\n", phrase);
 }
