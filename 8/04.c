#include <stdio.h>
#include <time.h>

unsigned long long count=0;
unsigned long long fibonacci_r(int n);

int main(void){
	clock_t start = clock();
	printf("40번째 값 : %llu\n", fibonacci_r(40));
	printf("재귀함수 호출 수 : %llu\n", count);
	clock_t end = clock();
	printf("피보나치 재귀함수 실행시간 : %lu초\n", (end-start)/CLOCKS_PER_SEC);
	return 0;
}

unsigned long long fibonacci_r(int n){
	count += 1;
	if (n==0) return 0;
	if (n==1) return 1;
	return fibonacci_r(n-1) + fibonacci_r(n-2);
}
