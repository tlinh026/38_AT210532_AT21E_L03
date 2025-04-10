#include <stdio.h>
#include <stdlib.h>

int fibonacci(unsigned int n)
{   
    if (n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else if (n>2)
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    unsigned int n;
    printf("Nhap n: ");
    scanf("%u", &n);
    printf("So fibonacci thu %u = %d" ,n, fibonacci(n));
    return 0;
}
