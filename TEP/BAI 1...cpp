#include <stdio.h>

#define MAX 100

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n;
    FILE *fp;

    printf("Nhap so dong va cot cua ma tran: ");
    scanf("%d%d", &m, &n);

    printf("Nhap ma tran A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Nhap ma tran B:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    // Tinh tong
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];

    // Ghi vào file
    fp = fopen("CONG_MT.C", "w");
    fprintf(fp, "Ma tran tong C:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            fprintf(fp, "%5d", C[i][j]);
        fprintf(fp, "\n");
    }
    fclose(fp);
    printf("Da ghi ket qua vao file CONG_MT.C\n");
    return 0;
}

