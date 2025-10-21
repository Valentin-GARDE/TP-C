#include <stdio.h>
#include <stdlib.h>

int VerificationDeParite(int x);

int main()
{
    for(int i=0; i<=10;i++)
    {
        if (VerificationDeParite(i) == 0)
        {
            printf("%d est pair\n", i);
        }
        else
        {
            printf("%d est impair\n", i);
        }
    }
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