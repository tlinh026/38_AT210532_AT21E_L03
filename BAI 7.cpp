#include <stdio.h>
#include <math.h>

int main()
{
    double Diem;
    printf("Nhap diem:");
    scanf("%lf", &Diem);
    if (Diem<5)
    {
        printf("Yeu");
    }
    else if (Diem<7)
    {
        printf("TB");
    }
    else if (Diem<8)
    {
        printf("Kha");
    }
    else if (Diem<9)
    {
        printf("Gioi");
    }
    else
    {
        printf("Xuat sac");
    }
    return 0;
}
