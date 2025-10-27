#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparerChaines(char *str1, char *str2);

int main()
{
    char str1[100];
    char str2[100];

    printf("Entrez la premiere chaine de caracteres: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Entrez la deuxieme chaine de caracteres: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    int result = comparerChaines(str1, str2);

    if (result == 0)
    {
        printf("Les chaines sont egales.\n");
    }
    else if (result > 0)
    {
        printf("La premiere chaine est inferieure a la deuxieme.\n");
    }
    else
    {
        printf("La premiere chaine est superieure a la deuxieme.\n");
    }

    return 0;
}

int comparerChaines(char *str1, char *str2)
{
    if (strcmp(str1, str2) == 0)
    {
        return 0;
    }
    else if (strcmp(str1, str2) < 0)
    {
        return 1;
    }
    else if (strcmp(str1, str2) > 0)
    {
        return -1;
    }
}