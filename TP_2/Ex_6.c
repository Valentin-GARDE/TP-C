#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
 int main()
 {
   char mdp[20] = "LeTest123";
   char mdpu[20];

   while(1)
   {
        printf("Saisisser le mdp :\n");
        fgets(mdpu, 20, stdin);

        // Retirer le \n à la fin du nom si présent
        mdpu[strcspn(mdpu, "\n")] = '\0';
        if(strcmp(mdp, mdpu) != 0)
        {
            printf("Mdp incorrect\n");
        }
        else
        {
            printf("Mdp correct\n");
            break;
        }
   }
 }