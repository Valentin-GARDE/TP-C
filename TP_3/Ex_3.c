#include <stdio.h>
#include <stdlib.h>

int VerificationDeParite(int x);
int tableMultiplication(int n);

int main()
{
    int n;
    printf("Sélectionnez un nombre pour afficher sa table de multiplication (0 pour quitter):\n");
    scanf("%d", &n);
    tableMultiplication(n);
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