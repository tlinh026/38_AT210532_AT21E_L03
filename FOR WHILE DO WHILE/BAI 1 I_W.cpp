#include <stdio.h>
int main(){
	int i, n, sum = 0;
	for (i=1; i<=10; i++){
		printf ("Nhap so thu %d: ", i);
		scanf("%d", &n);
		sum+= n;
	}
	printf ("Tong cua 10 so la: %d\n", sum);
	return 0;
}
