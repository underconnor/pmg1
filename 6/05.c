#include <stdio.h>

int main(void){
	int n;
	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &n);
	
	int sum =0;
	while (n>=10){
		sum += n % 10;
		n /= 10;
	}
	sum += n;
	printf("각 자릿수의 합 : %d", sum);

	return 0;
}
