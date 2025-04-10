#include <stdio.h>
 
 int main (){
 	int mang[10];
 	printf("Nhap 10 so nguyen:\n");
 	for (int i = 0; i< 10; i++){
 		printf ("Phan tu %d: ", i+1);
 		scanf("%d", &mang[i]);
 		
 		if (mang[i] < 0){
 			mang[i] = 0;
		 }
	 }
	 printf ("Mang sau khi thay the: \n");
	 for (int i=0; i < 10; i++){
	 	printf(" %d", mang[i]);
	 }
	 printf("\n");
	 return 0;
 }
