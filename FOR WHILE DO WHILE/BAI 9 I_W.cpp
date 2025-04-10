#include <stdio.h>
int main(){
	int n;
	double sum = 1.0, x = 1.0;
	
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	for (int i = 1; i<= n; i++){
		x /= i;
		sum += x;
	}
	printf("Tong S la: %.6lf\n", sum);
	return 0;
}
