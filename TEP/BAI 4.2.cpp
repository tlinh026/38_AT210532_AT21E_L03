#include <stdio.h>

#define MAX 100

void inMaTran(int n, int a[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[i][j]); 
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Gia tri n khong hop le.\n");
        return 1;
    }

    int a[n][n];
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right; i++)
            a[top][i] = value++;
        top++;

        for (int i = top; i <= bottom; i++)
            a[i][right] = value++;
        right--;

        for (int i = right; i >= left; i--)
            a[bottom][i] = value++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            a[i][left] = value++;
        left++;
    }

    printf("Ma tran xoay oc %dx%d:\n", n, n);
    inMaTran(n, a);

    return 0;
}

