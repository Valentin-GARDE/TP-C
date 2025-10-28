#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    int jour;
    char *mois;
    int annee;
};

struct Temps {
    int heures;
    int minutes;
    int secondes;
};

int main()
{
    struct Date d;
    struct Temps t;

    t.heures = 14;
    t.minutes = 30;
    t.secondes = 0;

    d.jour = 25;
    d.mois = "novembre";
    d.annee = 2023;

    printf("Date: %02d %s %04d\n", d.jour, d.mois, d.annee);
    printf("Temps: %02d:%02d:%02d\n", t.heures, t.minutes, t.secondes);
    return 0;
}