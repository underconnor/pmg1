#include <stdio.h>
int main() {
	int a = 3, b = 2, c = 1;
	if(((a <= b) <= c) || (a++) && (++b))
	printf("output : %d", a * b);
	else
	printf("output : %d", a * c);
	return 0;
}
