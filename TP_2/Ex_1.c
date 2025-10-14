#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tabnote[7] = { 12, 13, 12, 8, 14, 17,15};
    int note;
    int moyenne;
    int lastnote = 20;
    int eleves = 0;

    note = tabnote[6];
    printf("la note selectionner est %d \n", note);
    printf("[");
    for(int i=0; i<7; i++)
    {
        if(i < 6)
        {
            printf(" %d,", tabnote[i]);
        }
        else
        {
            printf(" %d", tabnote[i]);
        }
        
        moyenne = moyenne + tabnote[i];
    }
    printf("] \n");
    printf("la moyenne est de %d \n", moyenne/7);

    note = tabnote[2];
    tabnote[2] = note + 3;
    printf("la note modifier est %d \n", tabnote[2]);

    note = 0;
    for(int i=0; i<7; i++)
    {
        if(tabnote[i]>note)
        {
            note = tabnote[i];
        }

        if(tabnote[i]<lastnote)
        {
            lastnote = tabnote[i];
        }
    }
    printf("la meilleure note est %d \n", note);
    printf("la derniere note est %d \n", lastnote);

    for(int i=0; i<7; i++)
    {
        if(tabnote[i]>=10)
        {
            eleves++;
        }
    }
    printf("le nombre d'eleve ayant la moyenne est de %d \n", eleves);
}