#include <stdio.h>

int main(void){
	int a,b,c,max;
	printf("세 정수를 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	max = a > b ? a > c ? a : c : b > c ? b : c;
	printf("가장 큰 수는 %d 입니다.", max);

	return 0;
}
