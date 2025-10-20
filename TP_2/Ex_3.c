#include <stdio.h>
#include <stdlib.h>

 
 int main()
 {
    int tab[10] = {5,3,8,4,7,2,1,9,6,0};
    int tmp = 0;

    while (tab[0] !=0)
    {
         for(int i=0; i<10; i++)
    {
        
        if (tab[i] < tab[i-1])
        {
            tmp = tab[i-1];
            tab[i-1] = tab[i];
            tab[i] = tmp;
        }
    }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ", tab[i]);
    }
 }