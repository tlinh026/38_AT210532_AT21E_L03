#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf ("Nhap 3 canh cua tam giac (a,b,c):");
	scanf ("%f %f %f", &a, &b, &c);
	if (a+b>c && a+c>b && b+c>a){
		printf ("Ba canh nay tao nen mot tam giac!\n");
		}else {
			printf ("Ba canh khong hop le!");
		}
	if (a==b && b==c){
		printf ("Tam giac deu!\n");
	}
	else if (a==b||a==c||b==c){
		printf ("Tam giac can!\n");
	}
	else if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
		printf ("Tam giac vuong!\n");
	}
	else{
		printf ("Tam giac thuong!\n");
	}
double C, S; 
	double n =(a+b+c)/2;
	if (C=2*n){
		printf ("Chu vi cua tam giac la:%lf\n", C);
	}
	if (S=sqrt (n*(n-a)*(n-b)*(n-c))){
		printf ("Dien tich cua tam giac la: %lf\n", S);
	}
return 0;
}
