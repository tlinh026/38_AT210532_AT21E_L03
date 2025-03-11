#include <stdio.h>
#include <stdlib.h>
int* ghepmang(int arr1[], int n1, int arr2[], int n2, int *n3){
	*n3 = n1 + n2;
	int* arr3 = (int*)malloc((*n3) * sizeof(int));
	
	int i = 0, j = 0, k = 0;
	while (i< n1 && j< n2){
		if (arr1[i] < arr2[j]){
			arr3[k++] = arr1[i++];
		} else {
			arr3[k++] = arr2[j++];
		}
	}
	while (i< n1){
		arr3[k++] = arr1[i++];
	}
	while (j < n2){
		arr3[k++] = arr2[j++];
	}
	return arr3;
}
int main(){
	int mang1[5] = {1, 3, 5, 7, 9};
	int mang2[5] = {2, 4, 6, 8, 10};
	int n1 = 5, n2 = 5, n3;
	
	int *mang3 = ghepmang(mang1, n1, mang2, n2, &n3);
	printf("Mang sau khi ghep va sap xep: \n");
	for (int i = 0; i < n3; i++) {
		printf("%d ", mang3[i]);
	}
	printf("\n");
	free(mang3); // giai phong bo nho cap phat
	return 0;
}
