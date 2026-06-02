#include <stdio.h>

void diff_array(int arr[], int first, int diff, int size);

int main(void){
	int arr[10];
	diff_array(arr,1,7,10);
	for (int i=0; i<10;i++) printf("%d ", arr[i]);
	return 0;
}

void diff_array(int arr[], int first, int diff, int size){
	int term = first;
	for (int i=0;i<size;i++){
		arr[i] = term;
		term += diff;
	}
}
