#include <stdio.h>
#include <stdlib.h>

int remplirTab(double *tab, int n);
int afficherTab(double *tab, int n);
int inverserTab(double *tab, int n);
int libererTab(double *tab);
int trierTab(double *tab, int n);

int main()
{
    int n = 15;
    double *tab;
    tab = (double *)malloc(n * sizeof(double));
    if (tab == NULL)
    {
        printf("Allocation de mémoire non exécuté\n");
        return 1;
    }
    remplirTab(tab, n);
    printf("Tableau avant inversion:\n");
    afficherTab(tab, n);
    inverserTab(tab, n);
    printf("Tableau apres inversion:\n");
    afficherTab(tab, n);
    trierTab(tab, n);
    printf("Tableau apres tri:\n");
    afficherTab(tab, n);
    libererTab(tab);
    return 0;
}

int remplirTab(double *tab, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Entrez la valeur pour tab[%d]: ", i);
        scanf("%lf", &tab[i]);
    }
    return 0;
}

int afficherTab(double *tab, int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ",tab[i]);
    }
    printf("]\n");
    return 0;
}

int inverserTab(double *tab, int n)
{
    double temp;
    int j = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        j--;
    }
    return 0;
}

int trierTab(double *tab, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                double temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    return 0;
}

int libererTab(double *tab)
{
    free(tab);
    return 0;
}