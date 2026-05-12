#include <stdio.h>

int r_power(int base, int exp);

int main(void){
	int a,b;
	printf("정수 2개를 입력하시오 : ");
	scanf("%d %d",&a, &b);
	if (a<0){
		printf("첫 번째 정수는 양수여야 합니다.");
		return 0;
	}
	printf("%d^%d = %d\n", a,b,r_power(a,b));

	return 0;
}

int r_power(int base, int exp){
	if (exp == 0) return 1;
	return base * r_power(base, exp - 1);
}
