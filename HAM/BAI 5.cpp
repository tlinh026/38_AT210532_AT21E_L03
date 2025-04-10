
#include <stdio.h>
#include <stdlib.h>

void doiHeCoSo(int n, int base)
{
    char result[32];
    char digits[] = "0123456789ABCDEF";
    int i = 0;

    printf("So %d trong he co so %d la ", n, base);

    if (n == 0) {
        printf("0");
        return;
    }

    while (n>0)
    {
        result[i++]=digits[n%base];
        n/=base;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", result[j]);
    }
    printf("\n");
}

int main()
{
    unsigned int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int i;
    printf("Nhap co so : ");
    scanf("%d", &i);

    doiHeCoSo(n, i);
    return 0;
}

