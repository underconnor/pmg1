#include <stdio.h>

int is_equal(int a[], int b[], int size);

int main(void){
	int a[5] = {0,2,3,4,5};	
	int b[5] = {1,2,3,4,5};	
	printf("%d", is_equal(a,b,5));
	return 0;
}

int is_equal(int a[], int b[], int size){
	for (int i=0;i<size;i++){
		if (a[i] != b[i]) return 0;
	}
	return 1;
}
