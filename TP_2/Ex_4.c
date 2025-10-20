#include <stdio.h>
#include <stdlib.h>

 
 int main()
 {
    int tab[10] = {};
    int tmp = 0;

    RemplirTab(tab);
    AfficherTab(tab);
    for(int i=0; i<10; i++)
    {
        if (tab[i] == 0)
        {
            tab[i]=tab[i+1];
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
    return 0;
 }