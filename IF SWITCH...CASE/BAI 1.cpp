
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("Nhap 3 he so a, b, c: ");
    scanf("%lf %lf %lf1", &a, &b, &c);
    double delta =(b*b - 4*a*c);
    printf("%lf\n1", delta);
    if (delta>0)
    {
        printf("Phuong trinh co 2 nghiem: %lf va %lf", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
    }
    else if (delta==0)
    {
        printf("Phuong trinh co nghiem kep: %lf", -b/(2*a));
    }
    else
    {
        printf("Phuong trinh vo nghiem");
    }
    return 0;
}
