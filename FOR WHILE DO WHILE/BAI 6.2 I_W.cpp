#include <stdio.h>
int main (){
	int n, sum = 0;
	printf("Nhap mot so: ");
	scanf("%d", &n);
	
	for (int i=1; i < n; i++){
		if (n % i == 0){
			sum +=i;
		}
	}
	if (sum ==n){
		printf("%d la so hoan hao.\n", n);
	} else {
		printf("%d khong phai la so hoan hao.", n);
	}
	return 0;
}
