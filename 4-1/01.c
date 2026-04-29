#include <stdio.h>

int main(void){
	printf("%lu \n", sizeof(_Bool));
	printf("%lu \n", sizeof(char));
	printf("%lu \n", sizeof(short));
	printf("%lu \n", sizeof(int));
	printf("%lu \n", sizeof(unsigned));
	printf("%lu \n", sizeof(long));
	printf("%lu \n", sizeof(long long));
	printf("%lu \n", sizeof(float));
	printf("%lu \n", sizeof(double));
	printf("%lu \n", sizeof(long double));

	return 0;
}
