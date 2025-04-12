#include <stdio.h>
#include <string.h>

struct SinhVien {
    char hoten[30];
    int tuoi;
    float diemTB;
};

int main() {
    FILE *fp;
    struct SinhVien ds[100];
    int n;

    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ho ten: "); scanf(" %[^\n]", ds[i].hoten);
        printf("Tuoi: "); scanf("%d", &ds[i].tuoi);
        printf("Diem TB: "); scanf("%f", &ds[i].diemTB);
    }

    // Ghi vao file
    fp = fopen("DSACH.C", "w");
    fprintf(fp, "DANH SACH SINH VIEN\n");
    fprintf(fp, "STT  Ho ten                Tuoi  Diem TB\n");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%-5d%-20s%-7d%-7.2f\n", i + 1, ds[i].hoten, ds[i].tuoi, ds[i].diemTB);
    }
    fclose(fp);
    printf("Da ghi danh sach vao DSACH.C\n");

    // Them sinh vien moi
    printf("Them mot sinh vien moi:\n");
    printf("Ho ten: "); scanf(" %[^\n]", ds[n].hoten);
    printf("Tuoi: "); scanf("%d", &ds[n].tuoi);
    printf("Diem TB: "); scanf("%f", &ds[n].diemTB);
    n++;

    // Ghi lai
    fp = fopen("DSACH.C", "w");
    fprintf(fp, "DANH SACH SINH VIEN (Cap nhat)\n");
    fprintf(fp, "STT  Ho ten                Tuoi  Diem TB\n");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%-5d%-20s%-7d%-7.2f\n", i + 1, ds[i].hoten, ds[i].tuoi, ds[i].diemTB);
    }
    fclose(fp);
    
    int index;
    printf("Nhap STT sinh vien can sua: ");
    scanf("%d", &index);
    index--;

    printf("Nhap diem TB moi: ");
    scanf("%f", &ds[index].diemTB);
    printf("Nhap tuoi moi: ");
    scanf("%d", &ds[index].tuoi);

    fp = fopen("DSACH.C", "w");
    fprintf(fp, "DANH SACH SINH VIEN (Da sua)\n");
    fprintf(fp, "STT  Ho ten                Tuoi  Diem TB\n");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%-5d%-20s%-7d%-7.2f\n", i + 1, ds[i].hoten, ds[i].tuoi, ds[i].diemTB);
    }
    fclose(fp);
    printf("Da cap nhat sinh vien trong file.\n");

    return 0;
}

