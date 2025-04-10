#include <stdio.h>
#include <stdlib.h>

int giaithua(int n)
{
    if (n>0)
    {
        return n * giaithua(n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("n! =  %d" ,giaithua(n));
    return 0;
}
