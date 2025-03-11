#include <stdio.h>
int main (){
	int mang[10];
	int tong = 0, tongDuong = 0, tongAm = 0, demDuong = 0, demAm = 0;
	float trungbinhcong, trungbinhcongDuong,trungbinhcongAm;
	printf("Nhap 10 so nguyen:\n");
	for (int i = 0; i < 10; i++){
		printf("Phan tu %d: ",i+1);
		scanf ("%d", &mang[i]);
		tong += mang[i];
		if (mang[i] > 0){
			tongDuong += mang[i];
			demDuong++;
		} else if (mang[i] <0){
			tongAm += mang[i];
			demAm++;
		}
	}
	trungbinhcong = (float)tong/10;
	trungbinhcongDuong = (demDuong >0) ? (float)tongDuong / demDuong : 0;
	trungbinhcongAm = (demAm >0) ? (float)tongAm / demAm : 0;
	printf ("Tong: %d\n", tong);
	printf ("Tong so duong: %d\n", tongDuong);
	printf ("Tong so am: %d\n", tongAm);
	printf ("Trung binh cong: %.2f\n", trungbinhcong);
	printf ("Trung binh cong so duong: %.2f\n", trungbinhcongDuong);
	printf ("Trung binh cong so am: %.2f\n", trungbinhcongAm);
	return 0;
}
