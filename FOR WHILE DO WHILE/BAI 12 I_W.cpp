#include <stdio.h>
#include <math.h> 

double calculateSin( double x, double eps){
	double term = x, sum = x;
	int n = 1;
	
	while (fabs(term) > eps){
		term *= -1 * x * x / ((2 * n)*(2* n + 1));
		sum += term;
		n++;
	}
	return sum;
} 
int main (){
	double x, eps;
	printf("Nhap gia tri x (radian): ");
	scanf("%lf", &x);
	printf("Nhap do chinh xac epsilon: ");
	scanf("%lf", &eps);
	
	printf("Gia tri sin(x) la: %.6lf\n", calculateSin(x, eps));
	return 0;
}
