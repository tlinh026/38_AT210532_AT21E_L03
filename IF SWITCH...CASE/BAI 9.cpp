#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x, m;
    int Nhuan;
    int So_ngay;
    printf("Nhap thang va nam: ");
    scanf("%d %u", &m, &x);
    if (x%4==0)
    {
        if (x%100==0 && x%400!=0)
        {
            Nhuan=0;
        }
        else if (x%400==0)
        {
            Nhuan=1;
        }
        else
        {
            Nhuan=1;
        }
    }
    else
    {
        Nhuan=0;
    }
    switch (m)
    {
    case 2:
        if (Nhuan==0)
        {
            So_ngay=28;
            break;
        }
        else
            So_ngay=29;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        So_ngay=30;
        break;
    default:
        So_ngay=31;
        break;
    }
    printf("Thang %d nam %u co %d ngay.", m, x, So_ngay);
    return 0;
}
