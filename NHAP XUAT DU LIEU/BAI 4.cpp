#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
	float r;
	printf("Nhap ban kinh hinh cau: ");
	scanf("%f", &r);
	
	float dien_tich = 4 * PI * r * r;
	float the_tich = (4.0/ 3.0) * PI * r * r * r;
	
	printf("Dien tich hinh cau: %.5f\n", dien_tich);
	printf("The tich hinh cau: %.5f\n", the_tich);
	
	return 0;
}
