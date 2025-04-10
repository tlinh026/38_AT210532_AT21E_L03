#include <stdio.h>
#include <stdlib.h>

void convert (int n, int base){
	if (n==0) return;
	convert(n/ base, base);
	int remainder =n% base;
	if (remainder <10){
		printf ("%d", remainder);
	}
	else {
		printf ("%c",remainder - 10 + 'A');
	}
}
int main(){
	int n;
	printf ("Nhao mot so nguyen duong:");
	scanf("%d",&n);
	printf ("Co so 2:");
	if (n==0) printf ("0");
	else convert (n,2);
	printf("\n");
	
	printf ("Co so 8:");
	if (n==0) printf("0");
	else convert (n,8);
	printf("\n");
	
	printf ("Co so 16:");
	if (n==0) printf ("0");
	else convert (n,16);
	printf ("\n");
	return 0;
}

