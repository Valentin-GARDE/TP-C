#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tab[10] = {0,1,2,3,4,5,6,7,8,9};
    int j = 9;
    int tmp;

    for(int i=0; i<5; i++)
    {
        tmp=tab[i];
        tab[i]= tab[j];
        tab[j]=tmp;
        j--;
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ", tab[i]);
    }
}