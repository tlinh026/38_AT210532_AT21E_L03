#include <stdio.h>
// Ham tinh UCLN
int ucln(int a, int b){
	while (b != 0){
		int temp = b;
		b = a % b;
		a = temp; 
	}
	return a;
}
// Ham tinh BCNN
int bcnn( int a, int b) {
	return (a*b) / ucln(a, b);
}
int main (){
	int a, b;
	printf ("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf ("Nhap so thu hai: ");
	scanf ("%d", &b);
	
	printf("UCLN cua %d va %d la: %d\n", a, b, ucln(a, b));
	printf("BCNN cua %d va %d la: %d\n", a, b, bcnn(a, b));
	return 0;
}

