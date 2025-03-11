#include <stdio.h>
#include <math.h>
int main(){
	double x,y,z;
	double C, S; 
	scanf ("%lf %lf %lf", &x, &y, &z);
	double n =(x+y+z)/2;
	if (C=2*n){
		printf ("Chu vi cua tam giac la:%lf\n", C);
	}
	if (S=sqrt (n*(n-x)*(n-y)*(n-z)) ){
		printf ("Dien tich cua tam giac la: %lf\n", S);
	}
return 0;
}
