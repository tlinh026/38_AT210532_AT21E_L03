#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    int Tri_Type=0;
    int Vuong=0;
    printf("Nhap 3 canh tam giac:");
    scanf ("%lf %lf %lf", &a, &b, &c);
    if ((a+b<=c)||(a+c<=b)||(c+b<=a))
    {
        printf("3 canh khong hop le");
        return 0;
    }
    double nua_chu_vi=(a+b+c)/2;
    double (dien_tich=sqrt((nua_chu_vi)*(nua_chu_vi-a)*(nua_chu_vi-b)*(nua_chu_vi-c));
    printf("Chu vi: %lf\nDien tich: %lf\n", nua_chu_vi*2.0, dien_tich);
    if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
    {
        Vuong=1;
    }
    if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
    {
        Tri_Type=1;
    }
    if (a==b && a==c)
    {
        Tri_Type=2;
    }
    switch (Vuong)
    {
    case 0:
        switch (Tri_Type)
        {
        case 0:
            printf("(%.5f, %.5f, %.5f) la tam giac thuong", a, b, c);
            break;
        case 1:
            printf("(%.5f, %.5f, %.5f) la tam giac can", a, b, c);
            break;
        case 2:
            printf("(%.5f, %.5f, %.5f) la tam giac deu", a, b, c);
            break;
        }
        break;
    case 1:
        switch (Tri_Type)
        {
        case 0:
            printf("(%.5f, %.5f, %.5f) la tam giac vuong", a, b, c);
            break;
        case 1:
            printf("(%.5f, %.5f, %.5f) la tam giac vuong can", a, b, c);
            break;
        }
    }
    return 0;
}
