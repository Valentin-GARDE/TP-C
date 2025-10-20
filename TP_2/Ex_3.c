#include <stdio.h>
#include <stdlib.h>

 
 int main()
 {
    int tab[10] = {5,3,8,4,7,2,1,9,6,0};
    int tmp = 0;
    int min;
    int max;
    int recursive = 1;

    RemplirTab(tab);
    while (recursive != 0)
    {
        for(int i=0; i<10; i++)
        {
            if (tab[i] < tab[i-1])
            {
                tmp = tab[i-1];
                tab[i-1] = tab[i];
                tab[i] = tmp;
                recursive = 2;
            }
        }
        if (recursive == 2)
        {
            recursive = 1;
        }
        else
        {
            recursive = 0;
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