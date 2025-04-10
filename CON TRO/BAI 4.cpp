#include <stdio.h>
#include <stdlib.h>

void swap(double *a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void nhapMang(double *x, int len){
    for (int i=0; i<len; i++)
    {
        scanf("%lf", &x[i]);
    }
}

void SapXep(double *a, int len)
{
    int i, j;
    for (i=len-1; i>0; i--){
        for (j=0 ; j<i; j++){
            if (a[j]>a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

void printMang(double a[], int len)
{
  for (int i=0; i<len; i++){
    printf("%lf ",a[i]);
  }
}

int main()
{
    //freopen("/home/cao/Documents/input", "r", stdin);
    int len;
    printf("Nhap do dai mang can sap xep: ");
    scanf("%d", &len);
    double *mang = (double*)malloc(len*sizeof(double));
    printf("Nhap mang can sap xep: ");
    nhapMang(mang, len);
    SapXep(mang, len);
    printf("Mang da sap xep: ");
    printMang(mang, len);
    free(mang);
    return 0;
}
