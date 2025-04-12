#include <stdio.h>
#include <stdlib.h>

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhap kich thuoc ma tran vuong: n = ");
    scanf("%d", &n);
    
    if (n <= 0 || n > 100) {
        printf("Gia tri n khong hop le. Vui long nhap 1 <= n <= 100.\n");
        return 1;
    }

    int matrix[n][n];
    int x = 1;
    int vong = 0;
    
    while (x <= n * n) {
        for (int j = vong; j < n - vong; j++)       matrix[vong][j] = x++;
        for (int i = vong + 1; i < n - vong; i++)   matrix[i][n - vong - 1] = x++;
        for (int j = n - vong - 2; j >= vong; j--)  matrix[n - vong - 1][j] = x++;
        for (int i = n - vong - 2; i > vong; i--)   matrix[i][vong] = x++;
        vong++;
    }

    printf("Ma tran xoan oc voi n = %d:\n", n);
    printMatrix(n, matrix);

    return 0;
}

