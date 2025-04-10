#include <stdio.h>
void sapxep (int arr[], int n){
	for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; j++ ){
			if (arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
} 
int main() {
	int mang[10];
	 printf("Nhap 10 so nguyen:\n");
	 for (int i = 0; i < 10; i++){
	 	printf("Phan tu %d:", i+1);
	 	scanf("%d", &mang[i]);
	 }
	 sapxep(mang, 10);
	 printf("Mang sau khi sap xep tang dan: \n");
	 for (int i = 0; i < 10; i++){
	 	printf(" %d", mang[i]);
	 }
	 printf("\n");
	 return 0;
}
