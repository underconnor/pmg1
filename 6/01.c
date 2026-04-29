#include <stdio.h>

int main(void){
	int a,b;
	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	printf("a > b : %d\n", a > b);
	printf("a == b : %d\n", a == b);
	printf("a != b : %d\n", a != b);
	printf("a > b && a > 0 : %d\n", (a > b && a > 0));
	printf("a > b || b > 0 : %d\n", (a > b || b > 0));
	printf("!(a < b) : %d\n", !(a < b));

	return 0;
}
