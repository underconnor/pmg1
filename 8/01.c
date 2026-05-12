#include <stdio.h>

int factorial(int n);
int my_permutation(int n, int r);

int main(void){
	int a,b;
	printf("정수 2개를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("P(%d, %d) = %d\n", a,b,my_permutation(a,b));

	return 0;
}

int factorial(int n){
	int result = 1;
	for (int i = 1; i<=n;i++) result *= i;
	return result;
}

int my_permutation(int n, int r){
	int result = factorial(n) / factorial(n-r);
	return result;
}
