#include <stdio.h>
#include <stdlib.h>

double hamMu (double x, int y)
{
    if (y==0)
    {
        return 1;
    }
    else if (y>0)
    {
        return x*hamMu(x, y-1);
    }
    else
    {
        return 1/hamMu(x, -y);
    }
}

int main()
{
    double x;
    int y;
    printf("Nhap x va y: ");
    scanf("%lf %d", &x, &y);
    printf("x^y =  %lf" ,hamMu(x, y));
    return 0;
}
