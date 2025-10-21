#include <stdio.h>
#include <stdlib.h>

int VerificationDeParite(int x);
int tableMultiplication(int n);
int fDeX(int x);
int gDeX(int x);
int frondg(int x);

int main()
{
    int n;
    printf("Indiquer la valeur de x;\n");
    scanf("%d", &n);
    printf("f(%d) = %d\n", n, fDeX(n));
    printf("g(%d) = %d\n", n, gDeX(n));
    printf("f(g(%d)) = %d\n", n, frondg(n));
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