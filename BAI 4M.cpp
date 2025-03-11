#include <stdio.h>
#include <limits.h>
int main(){
	int mang[10];
	int max = INT_MIN, min = INT_MAX, vitrimax = -1, vitrimin = -1;
	printf("Nhap 10 so nguyen:\n");
	for (int i=0; i<10; i++){
		printf("Phan tu %d: ", i+1);
		scanf("%d", &mang[i]);
		if (mang[i]>max){
			max = mang[i];
			vitrimax = i;
		}
		if (mang[i]< min){
			min = mang[i];
			vitrimin = i;
		}
	}
	printf("Phan tu lon nhat: %d, vi tri: %d\n", max, vitrimax + 1);
	printf("Phan tu be nhat: %d, vi tri: %d\n", min, vitrimin + 1);
	return 0;
}
