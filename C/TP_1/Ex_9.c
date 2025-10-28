#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
 
 int main()
 {
    int nb = 21;
    int x;

    srand(time(NULL));
    nb = rand() % 100;
    printf("Nombre à deviner : %d\n", nb);
    
    while(1) /*mettre for(int i=0;i<10;i++)*/
    {
        printf("Veuillez entrer un nombre entre 0 et 99 : ");
        scanf("%d", &x);
        if(x<nb)
        {
            printf("C'est plus !\n");
        }
        else if(x>nb)
        {
            printf("C'est moins !\n");
        }
        else
        {
            printf("Bravo, vous avez trouve le nombre !\n");
            break;
        }
    }
 }