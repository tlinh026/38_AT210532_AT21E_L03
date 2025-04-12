#include <stdio.h>

struct Hang {
    char ten[20];
    int dongia;
    int soluong;
    int thanhtien;
};

int main() {
    FILE *fp;
    struct Hang ds[100];
    int n, tong = 0;

    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Mat hang %d:\n", i + 1);
        printf("Ten hang: "); scanf("%s", ds[i].ten);
        printf("Don gia: "); scanf("%d", &ds[i].dongia);
        printf("So luong: "); scanf("%d", &ds[i].soluong);
        ds[i].thanhtien = ds[i].dongia * ds[i].soluong;
        tong += ds[i].thanhtien;
    }

    fp = fopen("SO_LIEU.C", "w");
    fprintf(fp, "SO LIEU BAN HANG\n");
    fprintf(fp, "STT  Ten Hang   Don gia   So luong   Thanh tien\n");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%-5d%-12s%-10d%-10d%-10d\n", i + 1, ds[i].ten, ds[i].dongia, ds[i].soluong, ds[i].thanhtien);
    }
    fprintf(fp, "Tong tien: %d\n", tong);
    fclose(fp);
    printf("Da ghi vao file SO_LIEU.C\n");
    return 0;
}

