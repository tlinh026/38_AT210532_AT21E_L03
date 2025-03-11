#include <stdio.h>
int main(){
	int mang[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("Mang dao nguoc:");
	for (int i = 9; i>= 0; i--){
		printf("%d ", mang[i]);
	}
	printf ("\n");
	return 0;
}
