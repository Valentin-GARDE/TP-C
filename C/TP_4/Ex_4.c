#include <stdio.h>
#include <string.h>

int main() {
    char SUJ[100] = "bonjour le monde";
    char OBJ[20] = "le";
    char res[100];
    char *pos;

    pos = strstr(SUJ, OBJ); // cherche la première occurrence

    if (pos != NULL) {
        int index = pos - SUJ; // position du début de OBJ
        strncpy(res, SUJ, index); // copie avant OBJ
        res[index] = '\0';
        strcat(res, pos + strlen(OBJ)); // ajoute la fin après OBJ
        printf("Résultat : %s\n", res);
    } else {
        printf("Aucune occurrence trouvée.\n");
    }

    return 0;
}
