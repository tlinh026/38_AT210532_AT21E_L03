#include <stdio.h>
int main (){
	
	int mang[10];
	int x, dem = 0;
	
	printf ("Nhap 10 so nguyen:\n");for (int i=0; i<10; i++){
		printf("Phan tu %d: ", i+1);
		scanf ("%d", &mang[i]);
	}
	
	printf("Nhap gia tri x: ");
	scanf("%d", &x);
	
	for (int i = 0; i < 10; i++){
		if (mang[i] == x) {
			dem++;
		}
	}	
	printf("Phan tu %d xuat hien %d lan trong mang\n",x,dem);
	return 0;
}
