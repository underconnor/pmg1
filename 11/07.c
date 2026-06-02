#include <stdio.h>

int dot_product(int a[], int b[], int size);

int main(void){
 	int a[3] = {1,2,3};
	int b[3] = {4,5,6};

	printf("%d", dot_product(a,b,3));
	return 0;
}

int dot_product(int a[], int b[], int size){
	int result = 0;
	for (int i=0; i<size;i++){
		result += a[i] * b[i];
	}
	return result;
}
