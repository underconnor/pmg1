#include <stdio.h>

int main(void){
	int a;
	char c;

	if (scanf("%d", &a) != 1){
		scanf("%c", &c);
	}
	printf("%d %c",a,c);

	return 0;
}
