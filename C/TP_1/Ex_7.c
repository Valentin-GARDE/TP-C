#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int result = 0;

    for(int i = 2; i <= 9; i++) 
    {
        for(int j = 0; j <= 10; j++) 
        {
            result = i * j;
            printf("%d * %d = %d\n", i, j, result);
        }
    }
    for(int i = 9; i >= 2; i--) 
    {
        for(int j = 10; j >= 0; j--) 
        {
            result = i * j;
            printf("%d * %d = %d\n", i, j, result);
        }
    }
    return 0;
}