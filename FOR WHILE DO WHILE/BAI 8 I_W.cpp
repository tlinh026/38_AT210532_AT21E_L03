#include <stdio.h>
 int main(){
 	int n;
 	long long factorial = 1;
 	
 	printf("Nhap so n: ");
 	scanf ("%d", &n);
 	
 	for (int i = 1; i<= n; i++){
 		factorial *= i;
	 }
	 printf("Giai thua cua %d la: %lld\n", n, factorial);
	 return 0;
 }
