#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int lapin = 2; 
    int lapin2;
    int season;
    int total;

    printf("Indiquer le nombre de saison : \n");
    scanf("%d", &season);
    
    for(int i = 0; i < season; i++)
    {
        if (i== 0)
        {
            printf("Pour la saison %d, il y aura %d lapins. \n", i+1, lapin);
        }
        else if (i < 2)
        {
            lapin2 = lapin * 2;
            printf("Pour la saison %d, il y aura %d lapins. \n", i+1, lapin2);
        }
        else
        {
            total = lapin2 + lapin;
            printf("Pour la saison %d, il y aura %d lapins. \n", i+1, total);
            lapin = lapin2;
            lapin2 = total;
        }
    }
}