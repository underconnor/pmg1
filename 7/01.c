#include <stdio.h>

int square(int);

int main(void){
	int n,s;
	printf("정수 입력: ");
	scanf("%d",&n);
	
	s = square(n);
	printf("%d의 제곱은 %d입니다.\n", n,s);

	return 0;
}

int square(int n){
	n = n * n;
	return n;
}
