#include <stdio.h>
#include <stdlib.h>

void NhapMang2Chieu(int mang[][3], int rows, int cols)
{
    int i, j;
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            scanf("%d", &mang[i][j]);
        }
    }
}

void printMang2Chieu(int mang[][3], int rows, int cols)
{
    int i, j;
    for(i=0;i<rows; i++)
    {
        for(j=0;j<cols; j++)
        {
            printf("%5d", mang[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int mang2chieu[3][3]= { {2, 5, 7},
                            {3, 5, 12},
                            {41, 112, 132}};

    printMang2Chieu(mang2chieu, 3, 3);
    printf("Nhap mang 2 chieu 3x3 moi: ");
    NhapMang2Chieu(mang2chieu, 3, 3);
    printMang2Chieu(mang2chieu, 3, 3);
    
    return 0;
}
