#include <stdio.h>

int r_sum(int num);

int main(void){
	int num, result;
	scanf("%d", &num);
	result = r_sum(num);
	printf("%d\n", result);
}

int r_sum(int num){
	if (num==1) return 1;
	return num + r_sum(num-1);
}
