#include <stdio.h>
#include <stdlib.h>

int VerificationDeParite(int x);
int tableMultiplication(int n);
int fDeX(int x);
int gDeX(int x);
int frondg(int x);
int Echanger(int a, int b);
int EchangerAvecPointeur(int *a, int *b);

int main()
{
    int n;
    int z;
    printf("Indiquer la valeur de x;\n");
    scanf("%d", &n);
    printf("indiquer la valeur de y;\n");
    scanf("%d", &z);
    Echanger(n, z);
    printf("x = %d et y = %d après échange\n", n, z);
    //Cela ne marche pas car nous avons passé les variables par valeur et non par référence, il faut donc utiliser des pointeurs pour que la fonction modifie les valeurs des variables d'origine.
    EchangerAvecPointeur(&n, &z);
    printf("x = %d et y = %d après échange avec pointeurs\n", n, z);
}

int VerificationDeParite(int x)
{
    if (x % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int tableMultiplication(int n)
{
    if (n==0)
    {
        exit(1);
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

int fDeX(int x)
{
    return(2*x+5);
}

int gDeX(int x)
{
    return(3*x*x+4);
}

int frondg(int x)
{
    return(fDeX(gDeX(x)));
}

int Echanger(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}

int EchangerAvecPointeur(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}