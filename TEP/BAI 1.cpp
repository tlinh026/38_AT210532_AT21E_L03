#include <stdio.h>

void nhapMaTran(int m, int n, int mat[][n], char ten) {
	printf("Nhap ma tran %c co kich thuoc %dx%d:\n", ten, m, n);
	for (int i=0; i < m; i++){
		for (int j = 0; j < n; j++) {
			printf("%c[%d][%d]; ", ten, i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}
void ghiMaTran(const char *tenTep, int m, int n, int mat[][n]) {
	FILE *file = fopen(tenTep, "w");
	if (file == NULL) {
		printf("Khong the mo tep!\n");
		return;
	}
	fprinf(file, "Ma tran ket qua:\n ");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			fprintf(file, "%d", mat[i][j]);
		}
		fprintf(file, "\n");
	}
	fclose(file);
	printf("Da ghi ma tran vao tep %s\n", tenTep);
}
void tongMaTran(int m, int n, int matA[][n], int matB[][n], int matC[][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
}
int main() {
	int m, n;
	printf("Nhap kich thuoc ma tran (m,n): ");
	scanf("%d %d", &m, &n);
	
	int matA[m][n], matB[m][n], matC[m][n];
	nhapMaTran(m, n, matA, 'A');
	nhapMaTran(m, n, matB, 'B');
	
	tongMaTran(m, n, matA, matB, matC);
	
	ghiMaTran("CONG_MT.C", m, n, matC);
	
	return 0;
}
