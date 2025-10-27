#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mesurerX(int x1, int x2);
int mesurerY(int y1, int y2);

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point p1, p2;
    p1.x = 2;
    p1.y = 3;
    p2.x = 5;
    p2.y = 3;

    printf("la distance entre les deux points est %d", mesurerX(p1.x,p2.x) + mesurerY(p1.y,p2.y));
}

int mesurerX(int x1, int x2)
{
    return x2-x1;
}

int mesurerY(int y1, int y2)
{
    return y2-y1;
}