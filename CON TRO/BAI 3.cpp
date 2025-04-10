#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void nhapMang(int *x, int len){
    for (int i=0; i<len; i++)
    {
        scanf("%d", &x[i]);
    }
}

void SapXep(int *a, int len)
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

int main()
{
    //freopen("/home/cao/Documents/input", "r", stdin);
    int len;
    printf("Nhap do dai mang: ");
    scanf("%d", &len);
    int *mang = (int*)malloc(len*sizeof(int));
    printf("Nhap mang: ");
    nhapMang(mang, len);
    SapXep(mang, len);
    printf("min: %d, max: %d", mang[0], mang[len-1]);
    free(mang);
    return 0;
}
