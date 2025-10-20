#include <stdio.h>
#include <stdlib.h>

 
 int main()
 {
    int tab[10] = {};
    int tmp = 0;
    int zero;

    RemplirTab(tab);
    AfficherTab(tab);
    for(int j=0; j<10; j++)
    {
        for(int i=0; i<9; i++)
        {
            if (tab[i] == 0)
            {
                tab[i]=tab[i+1];
                tab[i+1]=0;
            }
        }
    }
    AfficherTab(tab);
 }

 int RemplirTab(int tab[])
 {
    int t;
    for(int i=0; i<10; i++)
    {
         printf("Entrez la valeur %d : ", i+1);
         scanf("%d", &t);
         tab[i]=t;
    }
    return 0;
 }

 int AfficherTab(int tab[])
 {
    for(int i=0; i<10; i++)
    {
         printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
 }