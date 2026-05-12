#include <stdio.h>

int main(void){
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);

	for (int i=1; i<=n;i++){
		for (int j =1;j<=i;j++){
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}
