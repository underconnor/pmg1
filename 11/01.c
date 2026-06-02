#include <stdio.h>

void reverse_array(int arr[], int size);

int main(void){
	int arr[5] = {1,2,3,4,5};
	reverse_array(arr,6);
	for (int i =0; i<5;i++) printf("%d ", arr[i]);
	return 0;
}

void reverse_array(int arr[], int size){
	int temp;
	for (int i=0;i<size/2;i++){
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;
	}
}
