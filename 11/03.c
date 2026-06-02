#include <stdio.h>

void rotate_left(int arr[], int size);

int main(void){
	int arr[5] = {1,2,3,4,5};
	rotate_left(arr,5);
	for (int i=0; i<5;i++) printf("%d ", arr[i]);
	return 0;
}

void rotate_left(int arr[], int size){
	int temp = arr[0];
	for (int i=0;i<size-1;i++){
		arr[i] = arr[i+1];
	}
	arr[size-1] = temp;
}
