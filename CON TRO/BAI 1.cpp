#include <stdio.h>
#include <stdlib.h>

void swap(double *a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    double a, b;
    printf("Nhap lan luot a va b: ");
    scanf("%lf %lf", &a, &b);
    printf("a = %.5f, b= %.5f\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan doi: a = %.5f, b=%.5f", a, b);
    return 0;
}
