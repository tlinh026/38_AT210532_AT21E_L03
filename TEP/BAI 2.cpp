#include <stdio.h>

#define MAX 100

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p;
    FILE *fp;

    printf("Nhap so dong cua ma tran A: ");
    scanf("%d", &m);
    printf("Nhap so cot cua A (va dong cua B): ");
    scanf("%d", &n);
    printf("Nhap so cot cua B: ");
    scanf("%d", &p);

    printf("Nhap ma tran A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Nhap ma tran B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    // Tinh tich
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    // Ghi vao file
    fp = fopen("TICH_MT.C", "w");
    fprintf(fp, "Ma tran tich C:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            fprintf(fp, "%5d", C[i][j]);
        fprintf(fp, "\n");
    }
    fclose(fp);
    printf("Da ghi ket qua vao file TICH_MT.C\n");
    return 0;
}

