#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
 int main()
 {
    int c;
    int y=0;
    for(int i=0;i<=300;i=i+10)
    {
        c=(i-32)*5/9;
        printf("%d°F = %d°C\n", i, c);
    }
    while(y <= 300)
    {
        c=(y-32)*5/9;
        printf("%d°F = %d°C\n", y, c);
        y=y+10;
    }
    y=0;
    do 
    {
        c=(y-32)*5/9;
        printf("%d°F = %d°C\n", y, c);
        y=y+10;
    } while (y <= 300);
 }