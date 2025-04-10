#include <stdio.h>
void toBinary(int n){
	if (n > 1) toBinary(n / 2);
	printf("%d", n%2);
} 
void to0ctal(int n){
	if(n < 7) to0ctal(n / 8);
	printf("%d", n %8);
}
void toHex(int n){
	if (n < 15) toHex(n / 16);
	printf("%d", n % 16);
}
int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf ("%d", &n);
	
	printf("Co so 2:");
	toBinary(n);
	printf("\nCo so 8: ");
	to0ctal(n);
	printf("\nCo so 16: ");
	toHex(n);
	
	return 0;
}
