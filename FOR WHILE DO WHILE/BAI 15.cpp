#include <stdio.h>
#include <stdlib.h>

#define RATE 0.45/100.0;
int main()
{
    int von, n;
    printf("Nhap so von: ");
    scanf("%d", &von);
    printf("Nhap so thang gui: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        von += von * RATE;
    }
    printf("Sau %d thang rut duoc %d dong", n, von);
    return 0;
}
